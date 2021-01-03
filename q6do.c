#include<stdio.h>
int main()
{
    int fact=1,i=2,num;
    scanf("%d",&num);
    do
    {
        fact=fact*i;
        i++;
    }while(i<=num);
    printf("%d is factorial",fact);
    return 0;
}