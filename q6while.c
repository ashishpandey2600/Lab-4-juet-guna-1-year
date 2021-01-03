#include<stdio.h>
int main()
{
    int i=2,fact=1,num;
    scanf("%d",&num);
    while(i<=num)
    {
        fact=fact*i;
        i++;
    }
    printf("%d is factorial",fact);
    return 0;
}