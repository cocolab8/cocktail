<xsl:stylesheet
 xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0"
>

<xsl:import href="code.xsl"/>

<xsl:param name="lo-margin" select="'&#x9;'"/>
<xsl:param name="lo-indent" select="3"/>


<!-- A CODE element for a matching tag.
     Suppress those code elements which are part of a test which is switched off.
     The templates from code.xsl handle everything else.
  -->
<xsl:template match="TEST[@RUN='n']/CODE" mode="writing">
</xsl:template>

<!-- Put the contents of <C> and <Java> elements only in the relevant files.
  -->

<xsl:template match="C" mode="writing">
   <xsl:param name="filetag"/>
   <xsl:if test="'C'=$filetag">
      <xsl:apply-templates mode="writing">
          <xsl:with-param name="filetag" select="$filetag"/>
      </xsl:apply-templates>
   </xsl:if>
</xsl:template>

<xsl:template match="Java" mode="writing">
   <xsl:param name="filetag"/>
   <xsl:if test="'Java'=$filetag">
      <xsl:apply-templates mode="writing">
          <xsl:with-param name="filetag" select="$filetag"/>
      </xsl:apply-templates>
   </xsl:if>
</xsl:template>

<xsl:template match="WriteI" mode="writing">
   <xsl:param name="filetag"/>
   <xsl:choose>
      <xsl:when test="'Java'=$filetag">
         <xsl:text>yyf.write (</xsl:text>
         <xsl:apply-templates mode="writing">
            <xsl:with-param name="filetag" select="$filetag"/>
          </xsl:apply-templates>
         <xsl:text>)</xsl:text>
      </xsl:when>
      <xsl:when test="'C'=$filetag">
         <xsl:text>fprintf (yyf, "%d", </xsl:text>
         <xsl:apply-templates mode="writing">
            <xsl:with-param name="filetag" select="$filetag"/>
          </xsl:apply-templates>
         <xsl:text>)</xsl:text>
      </xsl:when>
   </xsl:choose>
</xsl:template>

<xsl:template match="WriteS" mode="writing">
   <xsl:param name="filetag"/>
   <xsl:choose>
      <xsl:when test="'Java'=$filetag">
         <xsl:text>yyf.write (</xsl:text>
         <xsl:apply-templates mode="writing">
            <xsl:with-param name="filetag" select="$filetag"/>
          </xsl:apply-templates>
         <xsl:text>)</xsl:text>
      </xsl:when>
      <xsl:when test="'C'=$filetag">
         <xsl:text>fprintf (yyf, "%s", </xsl:text>
         <xsl:apply-templates mode="writing">
            <xsl:with-param name="filetag" select="$filetag"/>
          </xsl:apply-templates>
         <xsl:text>)</xsl:text>
      </xsl:when>
   </xsl:choose>
</xsl:template>

<xsl:template match="Spaces" mode="writing">
   <xsl:param name="filetag"/>
   <xsl:choose>
      <xsl:when test="'Java'=$filetag">
         <xsl:text>{{for (int i = 0; i &lt; </xsl:text>
         <xsl:value-of select="@n"/>
         <xsl:text>; i++) yyf.write(' ');}}</xsl:text>
      </xsl:when>
      <xsl:when test="'C'=$filetag">
         <xsl:text>{{int i; for (i = 0; i &lt; </xsl:text>
         <xsl:value-of select="@n"/>
         <xsl:text>; i++) fprintf (yyf, " ");}}</xsl:text>
      </xsl:when>
   </xsl:choose>
</xsl:template>


<!-- The MACRO element surrounds elements which are expanded differently
     according to whether the context is C or Java.  We use modes to do
     this because they are transmitted by the built-in templates - the
     $filetag argument is not.
  -->

<xsl:template match="MACRO" mode="writing">
   <xsl:param name="filetag"/>
   <xsl:if test="'C'=$filetag"><xsl:apply-templates mode="C"/></xsl:if>
   <xsl:if test="'Java'=$filetag"><xsl:apply-templates mode="Java"/></xsl:if>
</xsl:template>

<!-- The macro bodies.
  -->

<!-- Some syntactic sugar for building lists.  This assumes a convention for defining
     the tree nodes as in

Slist	= <
<<nil>>	= .
Sitem	= Next: Slist <
<<element>>	= <<children and/or attributes>> .
...
  >.
>.

     where <<nil>> is the name of the node which terminates the list, and <<element>>
     represents the name of a generic element.

     The idea is that instead of building a list directly with node constructors thus:

<NEW NAME="e1"><ARG>
    <NEW NAME="e2"><ARG><NEW NAME="Sempty"></NEW></ARG>
         <ARG>e2 arg</ARG></NEW></ARG>
    <ARG>e1 arg</ARG></NEW>

     which gets nasty for long lists, we say instead:

<LIST nil="Sempty">
      <ITEM name="e1"><ARG>e1 arg</ARG></ITEM>
      <ITEM name="e2"><ARG>e2 arg</ARG></ITEM>
</LIST>
  -->

<xsl:template match="LIST" mode="C">
   <xsl:variable name="tree">
      <xsl:call-template name="list-to-tree">
         <xsl:with-param name="list-nil" select="@nil"/>
         <xsl:with-param name="list" select="ITEM"/>
      </xsl:call-template>
   </xsl:variable>
   <xsl:apply-templates select="$tree/child::node()" mode="C"/>
</xsl:template>

<xsl:template match="LIST" mode="Java">
   <xsl:variable name="tree">
      <xsl:call-template name="list-to-tree">
         <xsl:with-param name="list-nil" select="@nil"/>
         <xsl:with-param name="list" select="ITEM"/>
      </xsl:call-template>
   </xsl:variable>
   <xsl:apply-templates select="$tree/child::node()" mode="Java"/>
</xsl:template>

<xsl:template name="list-to-tree">
   <xsl:param name="list-nil"/>
   <xsl:param name="list"/>
   <xsl:choose>
      <xsl:when test="$list">
         <NEW NAME="{$list[position()=1]/@name}">
            <ARG>
               <xsl:call-template name="list-to-tree">
                  <xsl:with-param name="list-nil" select="$list-nil"/>
                  <xsl:with-param name="list" select="$list[position()!=1]"/>
               </xsl:call-template>
            </ARG>
            <xsl:copy-of select="$list[position()=1]/node()"/>
         </NEW>
      </xsl:when>
      <xsl:otherwise>
         <NEW NAME="{$list-nil}"></NEW>
      </xsl:otherwise>
   </xsl:choose>
</xsl:template>

<!-- Calls within calls are expressions not statements: they don't have ';' at the end. -->
<xsl:template match="CALL//CALL" mode="C">
<xsl:value-of select="@NAME"/> (<LOB><xsl:apply-templates select="ARG" mode="C"/></LOB>)<xsl:text/>
</xsl:template>

<xsl:template match="CALL//CALL" mode="Java">
<xsl:value-of select="@NAME"/> (<LOB><xsl:apply-templates select="ARG" mode="Java"/></LOB>)<xsl:text/>
</xsl:template>

<xsl:template match="CALL" mode="C">
<xsl:text>	</xsl:text><xsl:value-of select="@NAME"/> (<LOB><xsl:apply-templates select="ARG" mode="C"/></LOB>);<xsl:text/>
</xsl:template>

<xsl:template match="CALL" mode="Java">
<xsl:text>	</xsl:text><xsl:value-of select="@NAME"/> (<LOB><xsl:apply-templates select="ARG" mode="Java"/></LOB>);<xsl:text/>

</xsl:template>

<xsl:template match="ARG" mode="C">
   <xsl:if test="not(position()=1)">, </xsl:if>
   <LOE><xsl:apply-templates mode="C"/></LOE>
</xsl:template>

<xsl:template match="ARG" mode="Java">
   <xsl:if test="not(position()=1)">, </xsl:if>
   <LOE><xsl:apply-templates mode="Java"/></LOE>
</xsl:template>

<xsl:template match="NEW" mode="C">
   <xsl:text>m</xsl:text>
   <xsl:value-of select="@NAME"/>
   <xsl:text>(</xsl:text>
   <LOB><xsl:apply-templates select="ARG" mode="C"/></LOB>
   <xsl:text>)</xsl:text>
</xsl:template>

<xsl:template match="NEW" mode="Java">
   <xsl:text>new </xsl:text>
   <xsl:value-of select="@NAME"/>
   <xsl:text>(</xsl:text>
   <LOB><xsl:apply-templates select="ARG" mode="Java"/></LOB>
   <xsl:text>)</xsl:text>
</xsl:template>

<xsl:template match="NULL" mode="C">NULL</xsl:template>

<xsl:template match="NULL" mode="Java">null</xsl:template>

<xsl:template match="NL" mode="C">printf ("\n");</xsl:template>

<xsl:template match="NL" mode="Java">yyf.writeNl ();</xsl:template>

<xsl:template match="C" mode="C"><xsl:apply-templates mode="C"/></xsl:template>
<xsl:template match="C" mode="Java"></xsl:template>
<xsl:template match="Java" mode="Java"><xsl:apply-templates mode="Java"/></xsl:template>
<xsl:template match="Java" mode="C"></xsl:template>
</xsl:stylesheet>
