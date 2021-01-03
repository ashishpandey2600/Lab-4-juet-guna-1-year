#include<stdio.h>
int main()
{
   int num,store=0,i=1,store1;
   scanf("%d",&num);
   while(i<num)
   {
       if(num%i==0){
       store=store+i;
       }
       i++;
        
   }
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