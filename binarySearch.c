#include<stdio.h>
int main()
{
	int n,key,i;
	printf("enter array limit and key  ");
	scanf("%d%d",&n,&key);
	int a[n];
	printf("enter array in sorted order ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    int ans=binarysearch(a,n,key);
	//printf("%d",ans);
}
void binarysearch(int a[],int n,int key)
{
	int start=0;
	int end=n-1;
	int mid=start+(end-start)/2;
	while(start<=end)
	{
		if(a[mid]==key)
		{
		printf("%d%d",mid,end);
		}
		if(a[mid]<key)
		{
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}
	//return -1;
}
