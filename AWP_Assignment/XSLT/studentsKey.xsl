<xsl:stylesheet version="1.0"
xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:key name="firstname-search" match="student" use="firstname"/>
<xsl:template match="/">
<html>
<body>
<h2>Students</h2>
<table border="1">
<tr bgcolor="#9acd32">
<th>Roll No</th>
XSLT
34
<th>First Name</th>
<th>Last Name</th>
<th>Nick Name</th>
<th>Marks</th>
</tr>
<xsl:for-each select="key('firstname-search', 'Vaneet')">
<tr>
<td>
<xsl:value-of select="@rollno"/>
</td>
<td><xsl:value-of select="firstname"/></td>
<td><xsl:value-of select="lastname"/></td>
<td><xsl:value-of select="nickname"/></td>
<td><xsl:value-of select="marks"/></td>
</tr>
</xsl:for-each>
</table>
</body>
</html>
</xsl:template>
</xsl:stylesheet>