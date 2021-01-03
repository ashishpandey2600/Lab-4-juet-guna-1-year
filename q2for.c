#include<stdio.h>
#include<bootstrap.h>
int main()
{
    bool flag=0;
int num;
printf("Enter the number\n");
scanf("%d",&num);
for(int i=2;i<num;i++)
{
    if(num%i==0)
   {
   
     flag=1;
      printf(" Not prime");
     break;
   }  
} 

if (flag==0)
{
    printf("prime");
   
}

    
    return 0;
}