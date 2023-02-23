main()

{
	int n,i,c;
	printf("enter imit" );
	scanf("%d",&n);
	printf("enter array element ");
	int a[10];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	c=duplicate(a,n);
	printf("duplicate is >> %d ",c);
	
	
}
int duplicate(int a[],int n)
{
  int i, j,count=0;
  for(i=0;i<n;i++)
  {
  	for(j=i+1;j<n;j++){
  		
	  
  	if(a[i]==a[j])
  	{
  		count++;
  		break;
	}
  }	
}
	 return count;
}
