#include<stdio.h>
int main()
{
    int i,num=0,d,p;
    scanf("%d",&i);
   for(;;){
        if(i==0){
            printf("%d",num);
       break;
       }

       d=i%10;
       p=i/10;
       num=num+d;
       i=p;
      
      
    }
    
    return 0;
}