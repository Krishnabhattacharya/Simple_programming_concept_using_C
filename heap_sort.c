#include<stdio.h>

void heapify(int a[],int n,int i);
void heapsort(int a[],int n);
void print(int a[],int n);
int main()
{
   /* int n,i;
    printf("enter limit ");
    scanf("%d",&n);
    printf("enter array element ");
    int a[n];*/
  
    int i,a[100],n,m;
    printf("enter limit ");
    scanf("%d",&n);
    printf("enter ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("before sort >>");
    print(a,n);
    heapsort(a,n);
    printf("\nafter sort >>");
    print(a,n);
    return 0;

}
void heapify(int a[],int n,int i)
{
    int largest =i;
    int left=(i*2)+1;
    int right =(i*2)+2;
    if(left<n&&a[left]>a[largest])
    largest=left;
    if(right<n&&a[right]>a[largest])
    largest=right;
    if(largest!=i)
    {
        int temp=a[i];
        a[i]=a[largest];
        a[largest]=temp;
        heapify(a,n,largest);
    }
}
void heapsort(int a[],int n)
{
    int i;
    for(i=n/2-1;i>=0;i--)
    heapify(a,n,i);
    for(i=n-1;i>=0;i--)
    {
        int temp=a[0];
        a[0]=a[i];
        a[i]=temp;
        heapify(a,i,0);

    }
}
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
