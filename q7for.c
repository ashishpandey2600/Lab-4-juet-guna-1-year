#include<stdio.h>
int main()
{
    int num,count=0,store=0,num1;
    float average;
    scanf("%d",&num);
    for(;;)
    {
      if(num==-1){
        average=store/count;
      printf("%f",average);
      break;
      }
    store=store+num;
      count++;
      scanf("%d",&num);
    }

    return 0;
}