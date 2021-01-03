#include<stdio.h>
int main()
{ 
    int i,num=0,d,p;
    printf("enter the number\n");
    scanf("%d",&i);
    while(i!=0){
    d=i%10;
    p=i/10;
    num=num+d;
    i=p;
}
printf("%d",num);

    return 0;
}