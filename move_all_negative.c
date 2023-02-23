main()
{
	int i,j,zero,temp,n,a[10];
	printf("enter a limit ");
	scanf("%d",&n);
	printf("enter array element ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		i=-1;
		zero=0;
		for(j=0;j<n;j++)
		{
			if(a[j]<zero)
			{
				i++;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	printf("-->>\n%d ",a[i]);
}
