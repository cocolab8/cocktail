<xsl:stylesheet
 xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0"
>

<xsl:import href="text_layout.xsl"/>

<xsl:output method="text"/>

<!-- This stylesheet extracts the code from a specification and inserts it
     in one or more files at places indicated by TAG elements.
     See code.dtd and file.dtd.
  -->

<!-- This is so we can find CODE elements in the main document when processing
     a TAG element from a file.xml.
  -->
<xsl:variable name="root" select = "/"/>

<!-- Find all the files to be produced from this spec -->
<xsl:template match="SPEC">
        <xsl:apply-templates select="FILE"/>
</xsl:template>


<!-- This is the FILE from the main document -->
<xsl:template match="FILE">
   <xsl:variable name="filetag" select="@NAME"/>
   <xsl:variable name="fileroot" select="@FILE"/>
   <xsl:for-each select="document(concat(@TYPE,'.xml'))/FILE">
      <xsl:document href="{$fileroot}.{@EXT}">
         <xsl:apply-templates mode="writing">
             <xsl:with-param name="filetag" select="$filetag"/>
         </xsl:apply-templates>
      </xsl:document>
   </xsl:for-each>
</xsl:template>

<!-- A TAG in a referenced file.xml: go back to the main document to find
     all the CODE elements with the same name.
     It is possible by including this stylesheet in another to filter the
     CODE elements in some way.  See the next template.
     Note that the text is output by the built-in / default template.
     The /node() in the select below is required in order to pass through
     the template parameter $filetag to the CASE template.
  -->
<xsl:template match="TAG" mode="writing">
   <xsl:param name="filetag"/>
   <xsl:variable name="tagname" select="@NAME"/>
   <xsl:variable name="code-section">
      <xsl:apply-templates select="$root//CODE[@NAME=$tagname]" mode="writing">
         <xsl:with-param name="filetag" select="$filetag"/>
      </xsl:apply-templates>
   </xsl:variable>
   <!-- now reprocess to interpret inserted layout tags -->
   <xsl:apply-templates select="$code-section"/>
</xsl:template>

<!-- A CODE element for a matching tag.
     Note that the text is output by the built-in / default template.
  -->
<xsl:template match="CODE" mode="writing">
   <xsl:param name="filetag"/>
   <xsl:apply-templates mode="writing">
      <xsl:with-param name="filetag" select="$filetag"/>
   </xsl:apply-templates>
</xsl:template>

<!-- CASE element from a matching CODE element whose text is NOT required
     The default template will copy the text from nodes which do match
  -->
<xsl:template match = "CASE" mode="writing">
   <xsl:param name="filetag"/>
   <xsl:if test="@NAME=$filetag"><xsl:apply-templates/></xsl:if>
</xsl:template>

</xsl:stylesheet>
