#include<stdio.h>
#include<math.h>
int main()
{
   int num,s1,s2,s3=0,s4,count=0 ,i,num2 ,num3;
   scanf("%d",&num);
   num2=num;
   num3=num;
   do
   {
       s1=num%10;
       s2=num/10;
       num=s2;
       count=count+1; 
   }while(num>0);
   i=count;
   do
   {
        s1=num2%10;
        s2=num2/10;
        num2=s2;
        s3=s3+pow(s1,i);
   }while(num2>0);
   s4=s3;
   if(num3==s4)
   {
        printf("%d is AMSTRONG NUMBER",s4);
   }
   else
   printf("NOT AMSTRONG");

    
    return 0;
}