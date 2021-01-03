#include<stdio.h>
int main()
{
    int arr[5],n,temp;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   for(int i=0;i<n-1;i++)
   {
       for(int j=i+1;j<n;j++)
       {
          if(arr[i]>arr[j]){
          temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
          }
       }
   }
       for(int k=0;k<n;k++)
       {
           printf("\t%d",arr[k]);
       }
   
    return 0;
}