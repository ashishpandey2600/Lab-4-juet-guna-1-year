#include<stdio.h>
int main()
{
    int cone=0 ,cneg=0,czero=0, num;
    
    for(;;){
    printf("Enter 10001 when you want  result and stop program. Enter the number : ");
    scanf("%d",&num);
    if(num==10001)
    {
    printf("you have entered %d positive. \n%d negative\n%d zeros",cone,cneg,czero);
    break;
    }
    if(num>0)
    {
        cone++;
    }
    if (num<0)
    {
        cneg++;
    }
    if (!num)
    {
        czero++;
    }
    
    }
    return 0;
    
}