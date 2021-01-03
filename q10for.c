#include<stdio.h>
int main()
{
    int reverse=0,num,store,store2,re;
    scanf("%d",&num);
    int num2=num;
    for(;;)
    {
      store=num%10;
      store2=num/10;
      reverse=reverse*10+store;
      num=store2;
      if(num==0)
      {
        if(reverse==num2)
        printf("%d is palidrome",reverse);
      else 
          printf(" not palidrome");
        break;
      }
    }
    
    return 0;
}