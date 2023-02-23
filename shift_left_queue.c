#define MAX 4
#include<stdio.h>
#include<stdlib.h>
void insert (int item);
void delete ();
void display ();
void shift_left ();
int r=-1;
int f=0;
int queue [4];
void insert (int item)
{
    if(r==MAX)
    {
        printf("full");
    }
    else
    {
        r++;
        queue[r]=item;
    }
}
    void delete ()
    {
        int t;
        if(f>r)
        {
            printf("empty");
        }
        else
        {
            t=queue[f];
            printf("deleted item is %d\n",t);
            f++;
        }
    }
    void display ()
    {
        int i;
        for(i=f;i<=r;i++)
        {
            printf("%d\t",queue[i]);
        }
    }
    void shift_left ()
    {
        int temp,i;
        if(f>r)
        printf("empty");
        else{
            temp=queue[0];
        for(i=f;i<=r-1;i++){
        queue[i]=queue[i+1];
        }
        queue[i]=temp;
         for(i=f;i<=r;i++)
        printf("%d ",queue[i]);
        }
       // printf("hello");
    }
    int main()
    {
        int ch,p;
        
        while(1)
        {
            printf("\n1.insert\n");
            printf("2.delete\n");
            printf("3.display\n");
            printf("4.exit\n");
            printf("5.shift left\n");
            printf("enter your choice\n");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1:
                printf("enter a no\n");
                scanf("%d",&p);
                insert(p);
                break;
               
                case 2:
                delete();
                break;
                
                case 3:
                display();
                break;

                case 4:
                exit(0);
                break;

                case 5:
                shift_left ();
                break;

                default :
                printf("wrong option");
            }

        }
    
    }
