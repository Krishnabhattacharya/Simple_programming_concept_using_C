#include<stdio.h>
int top=-1;
int stack[20];
void push(int p)
{
    top=top+1;
    stack[top]=p;
}
int pop()
{
    int _p;
    _p=stack[top];
    top=top-1;
    return (_p);
}
int main()
{
   int i,n,x,y,z=0,a=0,b=1,c;
   printf("enter a limit ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       if(i==1)
       push(a);
       else if(i==2)
       push(b);
       else{
           c=a+b;
           a=b;
           b=c;
           push(c);
       }
   }
   for(i=1;i<=n;i++)
   {
       x=pop();
//       y=pop();
//       z=y+x;
       printf("%d ",x);
      // push(z);
   }
   //for(i=1;i<=n;i++)
  // {
      
  // }
   
   return 0;
}