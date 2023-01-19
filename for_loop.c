#include<stdio.h>
int main()
{
    int i,j,ch;
    printf("Enter starting ascii value : \n");
    scanf("%d",&j);
    printf("Enter termenating ascii value :\n");
    scanf("%d",&ch);
    for ( i=j;i<=ch;i++)
    {
        printf("%c: :%d\n",i,i);
        if (i==ch)
        {
            break;
        }
        
        
    }
    return 0;
    
}