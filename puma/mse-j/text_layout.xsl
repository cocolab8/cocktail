<xsl:stylesheet
 xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0"
>
<!-- This stylesheet handles two elements:
     LOB - LayOut Block - identifies some text which may contain some
     LOE - LayOut Elements.  The LOE may contain further LOBs.
     If they do, then the LOB is laid out comb fasion as in
       call (
          arg,
          call2 (a,b),
          arg3)
     Otherwise the LOB is laid out with no layout changes.  We do not remove
     any white space already in the tree.
     Two global variable may be set:
      lo-margin is output before every indented LOE, followed by
      lo-indent spaces for every indent level (depth of LOB element)
-->

<xsl:param name="lo-margin" select="'    '"/>
<xsl:param name="lo-indent" select="2"/>

<xsl:template match="LOB" mode="indent">
   <xsl:apply-templates/>
</xsl:template>

<xsl:template match="LOB[.//LOB]">
   <xsl:apply-templates mode="indent"/>
</xsl:template>

<xsl:template match="LOB[.//LOB]" mode="indent">
   <xsl:apply-templates mode="indent"/>
</xsl:template>

<xsl:template match="LOE" mode="indent">
   <xsl:text>&#xa;</xsl:text>
   <xsl:value-of select="$lo-margin"/>
   <xsl:value-of select=
     "substring('                             ',1,$lo-indent*count(ancestor::LOB))"
   />
   <xsl:apply-templates mode="indent"/>
   <xsl:if test="position()=last()">
      <xsl:text>&#xa;</xsl:text>
      <xsl:value-of select="$lo-margin"/>
      <xsl:value-of select=
        "substring('                             ',1,$lo-indent*(count(ancestor::LOB)-1))"
      />
   </xsl:if>
</xsl:template>

<!--
<xsl:template match="LOE">
   <xsl:apply-templates/>
</xsl:template>
-->

</xsl:stylesheet>
