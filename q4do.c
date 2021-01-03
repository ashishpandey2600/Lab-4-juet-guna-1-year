#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int i=1;
    do
    {
        if(num%i==0){
            printf("%d,",i);
        }
        i++;
    }while(i<=num);
    
    return 0;
}