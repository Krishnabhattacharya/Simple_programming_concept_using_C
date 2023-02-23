#include<stdio.h>
#include<string.h>
int main()
{
	int i,n1,n2,j=0,k=0,l;
	char s1[10],s2[10];
	printf("enter 2 string\n");
	gets(s1);
	gets(s2);
	n1=strlen(s1);
	n2=strlen(s2);
if(n1!=n2)
{
	printf("no");
}
else
{
	strcat(s1,s2);
	if(strstr(s1,s2)!=NULL)
	printf("yes");
	else
	printf("no");	
}
}
