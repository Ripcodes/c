#include<stdio.h>
int main()
{
    int ch;
    int n;
    do {
         printf("Enter number that you want cheak : ");
         scanf("%d",&n);
         if(n%2==1)
         printf("\n %d is odd number ",n);
         else 
         {printf("\n %d is even number ",n);}
         {printf("\n Do you want continue (0/1)?");
         scanf("%d",&ch);}
         
        }
     while(ch==0);
      
        return 0;
}