main()
{
	int n,m,k,i,j=0,l=0;
	int a1[100],a2[100],c[100];
	    printf("enter array 1 limit ");
	scanf("%d",&n);
	    
	    printf("enter array1 ele ");
	for(i=0;i<n;i++);
	    scanf("%d",&a1[i]);
	printf("enter array 2 limit ");
	    scanf("%d",&m);
	printf("enter array2 ele  ");
	
	for(i=0;i<n;i++);
	scanf("%d",&a2[m]);
        
        
    for(i=0;i<k;i++)
    {
    	if(a1[i]>a2[i])
    	{
    		c[j]=a1[i];
    		j++;
		}
		else
		{
		c[j]=a2[i]	;
		j++;
		}
	}
	for(i=0;i<k;i++)
	printf("%d ",c[i]);
}
