#include<stdio.h>
int main()
{
    int Data[25];
    int i,key,count,ch;
      printf("\n \t\t\t\t\t|| Program of Array || \n");
      do
      {
        printf("\n Enter markes of 25 students \n");
        
        for(i=0;i<25;i++)
        scanf("%d",&Data[i]);
        printf("Enter key that occurences you want \n");
        scanf("%d",&key);
        for ( i = 0; i < 25; i++)
        {
            if (Data[i]==key)
            count++;
        }
        printf("%d occurs %d times\n",key,count);
        printf("Do you Want continue (1/0):");
        scanf("%d",&ch); 
      }
       while(ch==1);
       
        return 0;

    
}