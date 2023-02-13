#include<stdio.h>
void main()
{
    int i, n;
    printf("Enter your num\n");
    scanf("%d",&n);
    for ( i = 2; i < n; i++)
    {
    if (n%i!=0)
    {
     printf("Your num is prime\n");
    }
    else
    {
     printf("Your num is Not-prime\n");
    }
    break;}

    
   
    
}