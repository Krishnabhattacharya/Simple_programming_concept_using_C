#include<stdio.h>
#include<stdlib.h>
struct NODE 
{
    int data;
    struct NODE *preadd;
    struct NODE *postadd;
} *start=NULL;
void create()
{
    struct NODE *p,*q;
    int n;
    printf("enter a no ");
    scanf("%d",&n);
    p=(struct NODE*)malloc(sizeof(struct NODE));
    p->data=n;
    p->preadd=NULL;
    p->postadd=NULL;
    if(start==NULL)
    {
        start=p;
    }
    else
    {
        q=start;
        while(q->postadd!=NULL)
        {
            q=q->postadd;
        }
        p->preadd=q;
        q->postadd=p;
    }
}
void insert_first()
{
    struct NODE *p,*q;
    int n;
    printf("enter a data ");
    scanf("%d",&n);
    p=(struct NODE*)malloc(sizeof(struct NODE));
    p->data=n;
    p->preadd=NULL;
    p->postadd=NULL;
    q=start;
    p->postadd=q;
    q->preadd=p;
    start=p;
}
void insert_last()
{
    struct NODE *p,*q;
    int n;
    printf("enter a data ");
    scanf("%d",&n);
    p=(struct NODE*)malloc(sizeof(struct NODE));
    p->data=n;
    p->preadd=NULL;
    p->postadd=NULL;
    q=start;
    while(q->postadd!=NULL)
    {
        q=q->postadd;
    }
    p->preadd=q;
    q->postadd=p;
}
void insert_any_pos()
{
    struct NODE *p,*q,*r;
    int n,m=0,pos;
    printf("enter data ");
    scanf("%d",&n);
    printf("enter position ");
    scanf("%d",&pos);
    p=(struct NODE*)malloc(sizeof(struct NODE));
    p->data=n;
    p->preadd=NULL;
    p->postadd=NULL;
    q=start;
    while(q!=NULL)
    {
        m++;
        if(m==pos)
        {
         r->postadd=p;
         p->postadd=q;
         break;
        }
        r=q;
        q=q->postadd;
    }
}
void delete_first()
{
    struct NODE *p;
    p=start;
    start=start->postadd;
    start->preadd=NULL;
    free(p);
}
void delete_last()
{
    struct NODE *p,*q,*r;
    p=start;
    while(p->postadd!=NULL)
    {
        q=p;
        p=p->postadd;
    }
    q->postadd=NULL;
    free(p);
}
void delete_any_pos()
{
    struct NODE *p,*q,*r;
    int pos,m=0;
    printf("enter position ");
    scanf("%d",&pos);
    p=start;
    while(p!=NULL)
    {
        if(m==pos)
        {
            p->postadd->preadd=q;
        }
    }
        q=p;
        p=p->postadd;
}
void count()
{
    struct NODE *p;
    int c=0;
    p=start;
    while(p!=NULL)
    {
        c++;
        p=p->postadd;
    }
    printf("number of node is >>>");
    printf("%d ",c);
}

void sort()
{
    struct NODE *p,*q,*r;
    p=start;
    while(p!=NULL)
    {
        q=p->postadd;
        while(q!=NULL)
        {
       if(p->data>q->data)
        {
            r=p->data;
            p->data=q->data;
            q->data=r;
        }
    q=q->postadd;
    }
    p=p->postadd;
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
        p=p->postadd;
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
        p=p->postadd;
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
