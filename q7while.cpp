#include<stdio.h>
int main()
{
    int i,sum=0,count=0;
    float average; printf("enter -1 to stop and compute average\n");
    scanf("%d",&i);
    while(i!=-1)
    {
        
        sum=sum+i;
        count++;
        scanf("%d",&i);
        
        
    }
   average=sum/count;
    printf("%f",average);

    
    return 0;
}