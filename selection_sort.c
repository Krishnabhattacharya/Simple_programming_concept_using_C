#include<stdio.h>
int main()
{
        int a[100],i,j,temp,n,pos;      
    printf("enter limit ");
    scanf("%d",&n);
    printf("enter numbers ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
      pos=i;
      for(j=i+1;j<n;j++)
      {
        if(a[pos]>a[j])
        pos=j;
      }
     if(pos!=i)
{
  temp=a[i];
  a[i]=a[pos];
  a[pos]=temp;
}
    }
    for(i=0;i<n;i++)
    {
      printf("%d ",a[i]);
    }
}