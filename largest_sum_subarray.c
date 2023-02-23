main()
{
	int max=0,i,j,n,k,sum=0;
	printf("enter limit ");
	scanf("%d",&n);
	printf("enter elements ");
	int a[n];
	for(i=0;i<n;i++) 
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		if(sum>max)
		max=sum;

	if(sum<0)
	sum=0;
	}
	printf("%d",max);
	
}
