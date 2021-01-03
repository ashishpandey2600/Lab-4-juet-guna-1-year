#include<stdio.h>
#include<bootstrap.h>
int main()
{
    bool flag=0;
    int i=2,num;
    scanf("%d",&num);
    do{
        if(i<num)
        {
            flag=1;
            printf("not prime");
            i++;
            break;
        }

    }while(i<num);
    if(flag==0)
    {
        printf("prime");
    }

    
    return 0;
}