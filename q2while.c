#include<stdio.h>
#include<bootstrap.h>
int main()
{
    bool flag=0;
    int i=2,num;
    scanf("%d",&num);
    while(i<num)
    {
        if(num%i==0)
        {
            
            
            printf("not prime");
            flag=1;
            i++;
            break;
        }
    
    }
    if(flag==0)
    {
        printf("Prime");
    }
    return 0;
}