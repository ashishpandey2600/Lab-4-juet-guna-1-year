#include<stdio.h>
int main()
{
int x,y,i=1,m=1;
scanf("%d%d",&x,&y);
do{
    m=m*x;
    i++;
}while(i<=y);
printf("%d",m);

    
    return 0;
}