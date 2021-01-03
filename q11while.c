#include<stdio.h>
int main()
{
    int cposi=0,czero=0,cneg=0,num;
   
    printf("Enter the number  : ");
    scanf("%d",&num);
    int ynum=num;
    while (num!=10001)
    {
    if(ynum<0)
    {
     cneg++;
    }
    else if (!ynum)
    {
        czero++;
    }
    else if(ynum>0)
    cposi++;
    printf("Enter the number  :  ");
    scanf("%d",&num);
    
    }
    printf("you have entered %d zeros.\n %d positive. \n%d negetive  ",czero,cposi,cneg);
        
    
    return 0;
    

}