main()
{
	int i,j=0,n,temp,arr[100],p=0,ne=0;
	printf("enter a limit ");
	scanf("%d",&n);
	int a[n];
	printf("enter array element ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
    {
   
	
		if(a[i]<0)
		{
			//if(i!=j){
			
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
		//}
			j++;
		}
		}	
	
    
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
    

}
