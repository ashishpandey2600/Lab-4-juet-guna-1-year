#include<stdio.h>
int main()
{
    int i,num=0,count=0;
    float avg;
    scanf("%d",&i);
    
    do
    {
      
      num=num+i;
      if(i!=0) 
      count++;
     scanf("%d",&i);
    
     
    }while(i!=-1);
    avg=num/count;
    printf("%f",avg);
    return 0;
}