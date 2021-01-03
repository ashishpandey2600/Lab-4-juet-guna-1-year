#include<stdio.h>
int main()
{
    int i,num=0,d,p;
    scanf("%d",&i);
    do 
    {
        d=i%10;
       p=i/10;
       num=num+d;
       i=p;
      
    }while(i!=0);
    printf("%d",num);

    return 0;
}