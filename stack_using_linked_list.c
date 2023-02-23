#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10
int top=-1;
struct stack 
{
    int data;
   struct stack *add;
}*start=NULL;
void push()
{
if(top==MAXSIZE)
{
    printf("overflow ");
}
else
{
    struct stack *p,*q;
    int n;
    printf("enter data");
    scanf("%d",&n);
    p=(struct stack*)malloc(sizeof(struct stack));
    p->data=n;
    p->add=NULL;
    q=start;
    if(start==NULL)
    start=p;
    else{
    	q=start;
    while(q->add!=NULL)
    {
      q=q->add;
    }
    top++;
    q->add=p; 
}
}
}
void pop()
{
    if(top==-1)
    {
        printf("empty");
    }
    else
    {
        struct stack *p,*q;
        p=start;
       while(p->add!=NULL)
       {
       	q=p;
       	p=p->add;
	   }
	   q->add=NULL;
	   free(p);
    }
}

    
void display()
{
    struct stack *p;
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
        printf("\n1.push\n");
        printf("2.pop\n");
        printf("3.display\n");
        printf("4.exit\n");
        printf("enter number:-");
        scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        push();
        break;

        case 2:
        pop();
        break;

        case 3:
        display();
        break;
        
        case 4 :
        exit(1);
        break;
        default :
printf("back");
    }
}
}
