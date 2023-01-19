#include<stdio.h>
int main()
{
 int a, b, c;
  char op;

    printf("\n Enter operator (+,-,*,/) :");
    scanf("%c", &op);

    printf("\n Enter two numbers a,b :\n"); 
    scanf("%d %d", &a, &b);
    
    switch(op)
    {
        case '+':
        c = a+b;
        printf("\n Addition of a and b is %d",c);
        break;
        
        case '-':
        c = a-b;
        printf("\n subtraction of a and b is %d",c);
        break;
        
        case '*':
        c = a*b;
        printf("\n Multiplication of a and b is %d",c);
        break;
        
        case '/':
        c = a/b;
        printf("\n Divide of a and b is %d",c);
        break;

        default :
        printf("\n you entered oprator not valid plese enter valid operator");
        break;
  
    }
    
    return 0;
}




















