#include<stdio.h>
int main()
{
   int num,store=0,i=1,store1;
   scanf("%d",&num);
   do
   {
       if(num%i==0){
       store=store+i;
       }
       i++;
        
   }while(i<num);
   store1=store;
   if(store1==num){
   printf("%d is a perfect Number",store);
   }
   else
   {
       printf("%d is not perfect Number",num);
   }
   
    
    return 0;
}