#include<stdio.h>
int main()

{
    int arr[50];
    printf("Enter the numbers");
    for(int i=1;i<=5;i++)
    {
        
        scanf("%d",arr[i]);
    }
    for(int i=1;i<=5;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
