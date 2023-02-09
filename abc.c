// // Online C compiler to run C program online
 #include <stdio.h>
 #include <string.h>
// int main() {
//     int i;
//     int m1[10],m2[10],m3[20];
//     printf("enter m1");
//     for(i=0;i<10;i++)
//     scanf("%d",&m1[i]);
//     printf("enter m2");
//     for(i=0;i<10;i++)
//     scanf("%d",&m2[i]);
//     for(i=0;i<10;i++)
//     m3[i]=m1[i]+m2[i];
//     for (i=0;i<10;i++)
//     printf("%d\n",m3[i]);

// return 0;
    
// }
#include<stdio.h>
int main()
{
    int n1,n2,n3,n,i;
    // printf("enter");
    // scanf("%d%d%d",&n1,&n2,&n);
    // printf("%d\n%d",n1,n2);
    for(;;)
    {
        n3=n1+n2;
        printf("\n%d",n3);
        n1=n2;
        n2=n3;
        
    }
     return 0;
 }
// int main()
// {
//  char str1[30]="bd",str2[30]="aikas";
//  printf("%s\n",str2);
 
// int comp=strcmp(str1,str2);
//  //strlwr(str1);
//  printf("%d\n",comp);
//  return 0;

// }