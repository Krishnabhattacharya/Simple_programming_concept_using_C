#define MAX 5
#include<stdio.h>
#include<stdlib.h>
void insert (int item);
void delete ();
void display ();
int r=-1;
int f=0;
int queue [5];
void insert (int item)
{
    if(r==MAX)
    {
        printf("full");
    }
    else
    {
       r=(r+1)%MAX;
        queue[r]=item;
    }
}
    void delete ()
    {
        int t;
        if(f>r)
        {
            f=0;
            r=-1;
            printf("empty");
        }
        else if(f==MAX-1)
        {
            f=0;
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
    //  if(r==MAX-1)
        for(i=f;i!=r;)
        {
            printf("%d\t",queue[i]);
            i=(i+1)%MAX;
        }
        printf("%d\t",queue[i]);
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

                default :
                printf("wrong option");
            }

        }
    
    }
