#include<stdio.h>
#include<stdlib.h>
#define MAX 6
int arr[10];
int r1=-1,r2=MAX;
int f1=0,f2=MAX-1;
int isfull()
{
    if(r1<f1&&r2>f2)
    return 1;
    else
    return 0;
}
int isempty()
{
    if(r1==r2)
    return 1;
    else
    return 0;
}
void insertion_front(int item)
{
    if(isfull)
    {
        printf("full");
    }
    else
    {
        r1=r1+1;
        arr[r1]=item;
    }
}
void insertion_end(int item2)
{
    if(isfull)
    {
        printf("full");
    }
    else
    {
        r2=r2-1;
        arr[r2]=item2;
    }
}
int delete_front()
{
    int item3;
    if(isempty())
    {
        printf("empty");
    }
    else
    {
        item3=arr[f1];
        f1=f1+1;
        printf("%d is deleted",item3);
    }
}
int delete_end()
{
    int item4;
    if(isempty())
    {
        printf("empty");
    }
    else
    {
        item4=arr[f2];
        f2=f2-1;
        printf("%d is deleted",item4);
    }
}
void display()
{
    int i;
    for(i=f2;i<r2;i++)
    printf("%d",arr[i]);
}
  int main()
    {
        int ch,p,x;
        while(1)
        {
            printf("\n1.insertion\n");
            printf("\n8.insertion through end\n");
            printf("2.delete\n");
            printf("\n9.delete throw end\n");
            printf("3.display\n");
            printf("4.exit\n");
            printf("enter your choice\n");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1:
                printf("enter a no\n");
                scanf("%d",&p);
                insertion_front(p);
                break;
               
                case 2:
                delete_front();
                break;
                
                case 3:
                display();
                break;

                case 4:
                exit(0);
                break;

                case 8:
               
                printf("enter a no");
                scanf("%d",&x);
                insertion_end(x);
                break;

                case 9:
                delete_end();
                break;

                default :
                printf("wrong option");
            }

        }
    
    }
