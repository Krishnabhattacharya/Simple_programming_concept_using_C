#include<stdio.h>
int main()
{
 int a[10],i,minday=0,minprofit,maxprofit,n,profit=0;//{7,1,2,6,4,}
 printf("enter limit ")	;
 scanf("%d",&n);
 printf("enter array element ");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 minprofit=a[0];
 for(i=1;i<n;i++)
 {
 
 	if(a[i]<minprofit){
	 
	 minprofit=a[i];//1;
 	minday=i+1;//2
 }
 }
  maxprofit=a[minday];
  	 for(i=minday;i<n;i++)//7132458//7
 {
 	if(maxprofit<a[i])
 	maxprofit=a[i];//6
 	
 }	
 profit=(maxprofit-minprofit);
 printf("----%d",profit);

}
