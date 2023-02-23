#define MAX 20
#include<stdio.h>
#include<stdlib.h>
void insert (int item);
void delete ();
void display ();
int r=-1;
int f=0;
int queue [20];
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
            r=-1;
            f=0;
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
    void count()
    {
    	if(f==-1||f>r)
    	{
    		printf("empty");
		}
		else
		{
		int c;
		c=r-f+1;
			printf("--------->%d",c);
		}
	}
    int main()
    {
        int ch,p;
        while(1)
        {
            printf("\n1.insert\n");
            printf("2.delete\n");
            printf("3.display\n");
            printf("4.display count\n");
            printf("5.exit\n");
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
                count();
                break;
                
                case 5:
                	exit(0);
                	break;

                default :
                printf("wrong option");
            }

        }
    
    }
