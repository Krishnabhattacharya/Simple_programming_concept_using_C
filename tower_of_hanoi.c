#include<stdio.h>
void tower(int ndisk,char source,int temp,int dest)
{
    if(ndisk==1)
    {
        printf("move disk %d from %c --> %c\n",ndisk,source,dest);
        return;
    }
    tower(ndisk-1,source,dest,temp);
    printf("move disk %d from %c --> %c\n",ndisk,source,dest);
    tower(ndisk-1,temp,source,dest);
}




int main()
{
    int ndisk;
    char source='a',temp='b',dest='c';
    printf("enter number of disk");
    scanf("%d",&ndisk);
    tower(ndisk,source,temp,dest);
    

}