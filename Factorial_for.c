#include<stdio.h>
int main()
{
    int i,j,fact=1;
   do
   {
    printf("\nEnter number :");
    scanf("%d",&j);
    for ( i = 1; i <=j; i++)
    {
      fact=fact*i;
    }
    printf("\nFactioral of %d is %d ",j,fact);
    while(1)
    
return 0;
}