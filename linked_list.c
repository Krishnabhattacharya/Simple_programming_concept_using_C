#include<stdio.h>
#include<stdlib.h>
struct NODE {
    int data;
    struct NODE *add;
}*start=NULL;

void create()
{
    struct NODE *p,*q;
    int n;
    printf("enter a number");
    scanf("%d",&n);
    p=(struct NODE*)malloc(sizeof(struct NODE));
    p->data=n;
    p->add=NULL;
    if(start==NULL)
    {
        start=p;
    }
    else
    {
        q=start;
        while(q->add!=NULL)
        {
         q=q->add;
        }
        q->add=p;
    }
}

void insert_first()
{
    struct NODE *p,*q;
    int n;
    p=start;
    printf("enter data ");
    scanf("%d",&n);
    q=(struct NODE*)malloc(sizeof(struct NODE));
    q->data=n;
    q->add=NULL;
    q->add=p;
    start=q;
}
void insert_last()
{
    struct NODE *p,*q;
    int n;
    printf("enter data ");
    scanf("%d",&n);
    p=(struct NODE *)malloc(sizeof(struct NODE));
    p->data=n;
    p->add=NULL;
    q=start;
    while(q->add!=NULL)
    {
        q=q->add;
    }
    q->add=p;
}

void insert_any_pos()
{
    struct NODE *p,*q,*r;
    int n,pos,m=0;
    printf("enter data ");
    scanf("%d",&n);
    printf("enter poition ");
    scanf("%d",&pos);
    p=(struct NODE*)malloc(sizeof(struct NODE));
    p->data=n;
    p->add=NULL;
    q=start;
    while(q!=NULL)
    {
    m++;
    if(m==pos)
    {
        r->add=p;
        p->add=q;
        break;
    }   
    r=q;
    q=q->add;
    }
}

void delete_first()
{
    struct NODE *p;
    p=start;
    start=start->add;
    free(p);
}

void delete_last()
{
    struct NODE *p,*q;
    int n;
    p=start;
    while(p->add!=NULL)
    {
        q=p;
        p=p->add;
    }
    q->add=NULL;
    free(p);
}

void delete_any_pos()
{
    struct NODE *p,*q;
    int n,pos,m=0;
    printf("enter position ");
    scanf("%d",&pos);
    p=start;
    while(p!=NULL)
    {
        m++;
        if(m==pos)
        {
         q->add=p->add;
         free(p);
         break;
        }
        q=p;
        p=p->add;
    }
}

void count()
{
    struct NODE *p;
    int c=0;
    while(p!=NULL)
    {
        c++;
        p=p->add;
    }
    printf("number of node is >>> %d",c);
}

void sort()
{
    struct NODE *p,*q;
    p=start;
    int r;
    while(p!=NULL)
    {
        q=p->add;
        while(q!=NULL)
        {
       if(p->data>q->data)
        {
            r=p->data;
            p->data=q->data;
            q->data=r;
        }
    q=q->add;
    }
    p=p->add;
  }
}

void search()
{
    struct NODE *p;
    int n,m=0;
    printf("enter search element ");
    scanf("%d",&n);
    p=start;
    while(p!=NULL)
    {
        if(p->data==n)
        {
            m=1;
            break;
        }
        p=p->add;
    }
    if(m==1)
    printf("found");
    else
    printf("not found");  
}

void display()
{
    struct NODE *p;
    p=start;
    while(p!=NULL)
    {
        printf("display >>> %d  ",p->data);
        p=p->add;
    }
    printf("\n");
}


int main()
{
    int ch;
    while(1)
    {
        printf("\n1.create\n");
         printf("2.insert_first\n");
          printf("3.insert_last\n");
           printf("4.insert_any_pos\n");
            printf("5.delete_first\n");
             printf("6.delete_last\n");
              printf("7.delete_any_pos\n");
               printf("8.count\n");
                printf("9.sort\n");
                 printf("10.search\n");
                  printf("11.display\n");
                   printf("12.exit\n");
                    printf("enter your choice:");
                     scanf("%d",&ch);
                   switch(ch)
                   {
                       case 1:
                       create();
                       break;

                       case 2:
                       insert_first();
                       break;

                       case 3:
                       insert_last();
                       break;

                       case 4:
                       insert_any_pos();
                       break;

                       case 5:
                       delete_first();
                       break;

                       case 6:
                       delete_last();
                       break;

                       case 7:
                       delete_any_pos();
                       break;

                       case 8:
                       count();
                       break;

                       case 9:
                       sort();
                       break;

                       case 10:
                       search();
                       break;
                       
                       case 11:
                       display();
                       break;

                       case 12:
                       exit(0);
                       //break;

                            default:
                             printf("wrong");
       }
    }
    return 0;
}