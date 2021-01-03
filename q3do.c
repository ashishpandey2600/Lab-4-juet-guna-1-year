#include<stdio.h>
int main()
{
    int i=0;
    do
    {
        printf("ASCII character %c  =  %d\n",i,i);
        i++;
    }while(i<=255);
    return 0;
}