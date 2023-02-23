#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    int n,i,j,maxlen=1,start=0;
    printf("enter a string ");
    gets(str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
             int flag=1;
             for(int k=i;k<=j;k++)
             {
                if(str[k]!=str[j-k-i])
                flag=0;
             }
             if(flag=1&&(j=i+1)>maxlen)
             {
                 start=i;
                 maxlen=j-i+1;
             }
        }
    }
    for(i=start;i<=start+maxlen-1;i++)
    printf("%c",str[i]);
return 0;
}

