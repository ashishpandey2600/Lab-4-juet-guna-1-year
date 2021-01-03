#include<stdio.h>
int main()
{
    int czero=0,cneg=0,cone=0,a=420,num;
   printf("Enter the  number.... TO Equate enter 10001 : ");
         scanf("%d",&num);
       
    
    do
    {
        if(num==0)
        {
            czero++;

        }
        else if (num<0)
        {
            cneg++;
        
        }
        else if (num>0)
        {
            cone++;
        }
        printf("Enter the  number.... TO Equate enter 10001 : ");
         scanf("%d",&num);
       
    }while(num!=10001);
    printf("You have entered \n%d zeros \n%d negative \n%d positive",czero,cneg,cone);
    
    return 0;
    
}