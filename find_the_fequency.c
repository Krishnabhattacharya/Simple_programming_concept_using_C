main()
{
	int n,a[10],x,i,count=0;
	printf("enter a limit ");
	scanf("%d",&n);
	printf("enter array element\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element for search ");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	if(a[i]==x)
	count++;
	
	printf("%d",count);
}
