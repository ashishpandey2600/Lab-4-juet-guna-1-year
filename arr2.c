#include<stdio.h>
int main()
{
    int arr[20],sum=0,count=0,average;
    printf("Enter the value\t");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
        if(arr[i]!=0)
        count++;
    }
    average=sum/count;
    printf("%d is average ",average);
    return 0;
}