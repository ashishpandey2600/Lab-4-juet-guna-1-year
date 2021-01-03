#include<stdio.h>
int main()
{ //for loop se
    int x,y,m=1;
    printf("Enter the numbers x and y\n");
    scanf("%d%d",&x,&y);
    for(int i=1;i<=y;i++)
    {
        m=m*x;
    }
    
    printf("%d ",m);
    
    return 0;
}