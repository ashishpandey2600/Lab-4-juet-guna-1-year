#include<stdio.h>
int main()
{
    int num,store=0;
    scanf("%d",&num);
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            store=store+i;
            
        }
    }
    if (store==num)
    {
        printf("perfect number");
    }
    else
    {
        printf("not perfect number");
    }
    
    return 0;
}