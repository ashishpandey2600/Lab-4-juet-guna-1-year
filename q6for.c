#include<stdio.h>
int main()
{
    int fact=1,num;
    scanf("%d",&num);
    for(int i=2;i<=num;i++)
    {
        fact=fact*i;
    
    }
    printf("%d is factorial",fact);
    return 0;
}