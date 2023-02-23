#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n;
    char str[10];
    printf("enter string ");
    gets(str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            int f=0;
           for(int k=i;k<j;k++)
           {
            if(str[k]!=str[j-i+1])
            f=1;
        }
        }
    }

}