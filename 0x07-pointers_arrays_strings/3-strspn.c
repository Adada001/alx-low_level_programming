#include"main.h"
/**
*_strspn-getsthelengthofaprefixsubstring
*@s:pointertothestringtobesearched
*@accept:pointertothestringcontainingthecharacterstosearchfor
*
*Return:numberofbytesintheinitialsegmentofswhichconsistonlyofbytesfromaccept
*/
unsignedint_strspn(char*s,char*accept)
{
unsignedinti,j,len;

len=0;

for(i=0;s[i]!='\0';i++)
{
for(j=0;accept[j]!='\0';j++)
{
if(s[i]==accept[j])
{
len++;
break;
}
}

if(accept[j]=='\0')
return(len);
}

return(len);
}
