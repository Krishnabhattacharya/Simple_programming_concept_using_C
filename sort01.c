#include<stdio.h>
int main()
{
  int  a[]={0,1,2,0,2,1,2,0,1};
  int b[9];
  int i=0,j=9;
  while(i<j)
  {
   while(a[i]==0)
   {
    i++;
    
   }
   while(a[j]==1)
   {
       j--;
   }
   int temp=a[i];
       a[i]=a[j];
       a[j]=temp;
       i++;
       j--;

  }
  for(i=0;i<9;i++)
  printf("%d",a[i]);

}