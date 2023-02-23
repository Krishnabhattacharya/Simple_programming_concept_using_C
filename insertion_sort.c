#include<stdio.h>
int main()
{
       int a[100],i,j,temp,n;
    printf("enter limit ");
    scanf("%d",&n);
    printf("enter numbers ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=2;i<n;i++)
    {
        temp=a[i];
        for(j=i-1;j>=0;j--)
        {
            if(a[j]>temp)
            {
              a[j+1]=a[j];
            }
            else
            break;
            
        }
        a[j+1]=temp;
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}