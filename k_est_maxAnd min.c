#include<stdio.h>
int main()
{
	int i,j,temp,k,n;
	printf("enter limit ");
	scanf("%d",&n);
	int a[n];
	printf("enter array ele ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter k:st element");
    scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
	     	}
		}
	}
	printf(" k:st minimum>>%d ",a[k]);
	printf("k:st maximum is>>%d",a[n-k]);
	return 0;
}
