#include<stdio.h>
#include<bootstrap.h>
#include<math.h>
int main()
{
    int prime,num;
    bool flag =0;
    printf("Enter the number\n");
    scanf("%d",&num);
    for(int i=2;i<sqrt(num);i++)
    {
       if(num%i==0)
       {
           printf("Not prime");
           flag=1;
           break;
       }
       if (flag==0)
       {
           printf("prime");
           break;
       }

    }
    return 0;
}