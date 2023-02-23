#include<stdio.h>
#include<string.h>
int main()
{
	int i,len,temp=0;
	char a[100];
	printf("enter string ");
	gets(a);
	len=strlen(a);
	for(i=0;i<len/2;i++)
	{
		if(a[i]==a[len-1-i])
		printf("palindrome");
		else
		printf("not");
	}
	
}
