#include<stdio.h>
int main()
{
int x,y,i=1,m=1;
scanf("%d%d",&x,&y);

while(i<=y)
{
   m=m*x;
    i++;
}
printf("%d",m);

    
    return 0;
}