#include<stdio.h>
#include<math.h>
int main()
{
  int n,n2,count=0,rem,z;
  float result=0.0;
  scanf("%d",&n);
  n2=n;
  for( n2=n;n2!=0;++count)
  {
   n2=n2/10;
  }
  for(n2=n;n2!=0;n2=n2/10)
  {
     rem=n2%10;
      result=result+pow(n2,count);
  }
  if((int)result==n)
  {printf("Armstrong");}
  else 
  printf("not Armstrong");
    
    return 0;
}