#include<stdio.h>
int main()
{
    int num,reverse=0,n1,n3;
    scanf("%d",&num);
    n3=num;
    do
    {
        n1=num%10;
        num=num/10;
        reverse=reverse*10+n1;
    }while(num>0);
    // int z=reverse;
    // printf("%d",z);
if(reverse==n3)
{
    printf(" palindrome");
}
else
{
    printf("Not Palindrome");
}

    
    return 0;
}