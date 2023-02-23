#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,count=0;
	char a[100];
	printf("enter string ");
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
	for(j=i+1;j<n;j++)
	{
		if(a[i]==a[j])
	{
		count++;
		printf("duplicate is %c\n",a[j]);
	}
		
	}
	
	
	}
	printf("duplicate %d\n",count);
	
}

