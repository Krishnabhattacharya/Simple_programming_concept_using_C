#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 20
int stack[MAX];
int top=-1;
int pop();
int isfull();
int isempty();
void display();
int push(int element )
{
    if(isfull())
    {
        //printf("stack is full");
    }
    else
    {
        top=top+1;;
        stack[top]=element;
    }
   // printf("push element is %d",element);
}
int pop()
{
	int o;
if(isempty())
{
    //printf("stack is empty");
}
else
{
    o=stack[top];
  //  printf("deleted item is %d",o);
    top=top-1;
    return(o);
}

}
int isfull()
{
    if(MAX==top)
    return 1;
    else
    return 0;
}
int isempty()
{
    if(top==-1)
    return 1;
    else
    return 0;
}
void display()
{
    int i;
    for(i=0;i<=top;i++)
    printf("%d\t",stack[i]);
}
int main()
{
   int i,len,temp,result,a,b;
   char postfix[MAX];
   printf("enter postfix opa ");
   gets(postfix);
   len=strlen(postfix);
   for(i=0;i<len;i++)
   {
       if(postfix[i]<='9'&& postfix[i]>='0')
       {
           push((int) postfix[i]-'0');
       }
       else
       {
           a=pop();
           b=pop();
 //          printf("%d",a);
   //        printf("%d",b);
           switch(postfix[i])
           {
               case '+':
               temp=b+a;
              // printf("hello =%d",temp);
               break;

               case '-':
               temp=b-a;
               break;

               case '*':
               temp=b*a;
               break;
               
               case '/':
               temp=b/a;
               break;
           }
           push(temp);

       }
   }
printf("%d ",stack[0]);

}

