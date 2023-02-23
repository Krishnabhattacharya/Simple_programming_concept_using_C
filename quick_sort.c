#include<stdio.h>
int particen (int a[],int first,int last);
int quicksort(int a[],int first,int last);


int particen (int a[],int first,int last)
{
	int start,end,pivot,temp=0,n;

	pivot=a[first];
	start=first;
	end=last;
	while(start<end)
	{
		while(a[start]<=pivot)
		start++;
		while(a[end]>pivot)
		end--;
		if(start<end)
		{
		temp=a[start];
		a[start]=a[end];
		a[end]=temp;	
		}
	}
	temp=a[first];
	a[first]=a[end];
	a[end]=temp;
	return end;
}
int quicksort(int a[],int first,int last)
{
	int loc;
	if(first<last){
	
	loc=particen(a,first,last);
	quicksort(a,first,loc-1);
	quicksort(a,loc+1,last);
}
}
void print(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
int main()
{
	int a[100],n,i;
	printf("enter limit ");
	scanf("%d",&n);
	printf("enter array element ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
    print(a,n);
    quicksort(a,0,n-1);
    printf("after sort \n");
    print(a,n);
	return 0;
}
