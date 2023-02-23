#include<stdio.h>
   int fact(int n)
     {
        int facto=1,i;
        for(i=n;i>0;i--)
       return facto=facto*i;
     }
int main()
{
    int n,i,sum[10],j=0,temp=0;
    //long int b[9]={1,2,6,24,120,720,5040,40320,362880};
    printf("enter no ");
    scanf("%d",&n);//40512

while(n>=1)
{
    if(n>=fact(9))
    {
        sum[j]=9;
        j++;
        n=n-fact(9);
    }
    else if(n>=fact(8))
    {
        sum[j]=8;
        j++;
        n=n-fact(8);
    }
    else if(n>=fact(7))
    {
        sum[j]=7;
        j++;
        n=n-fact(7);
    }
    else if(n>=fact(6))
    {
        sum[j]=6;
        j++;
        n=n-fact(6);
    }
    else if(n>=fact(5))
    {
        sum[j]=5;
        j++;
        n=n-fact(5);
    }
    else if(n>=fact(4))
    {
        sum[j]=4;
        j++;
        n=n-fact(4);
    }
    else if(n>=fact(3))
    {
        sum[j]=3;
        j++;
        n=n-fact(3);
    }
    else if(n>=fact(2))
    {
        sum[j]=2;
        j++;
        n=n-fact(2);
    }
    else if(n>=fact(1))
    {
        sum[j]=1;
        j++;
        n=n-fact(1);
    }
    else
    {
        sum[j]=0;
        n=n-0;
    }
}
for(i=1;i<=9;i++)
{
  int temp;
  temp=sum[i];
  sum[i]=sum[9-i-1];
  sum[9-i-1]=temp;
}
for(i=1;i<=9;i++)
{
    printf("%d",sum);
}
}
