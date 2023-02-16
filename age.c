#include<stdio.h>

int main()
{
    int ram,shyam,ajay;
        printf("Enter the age of Ram,Shyam,Ajay \n");
            scanf("%d%d%d",&ram,&shyam,&ajay);
                
                    
                        
                            if((ram < shyam) && (ram < ajay))
                                printf("Ram is youngest");
                                    else if ((shyam < ram) && (shyam < ajay))
                                        printf("Shyam is youngest");
                                            else
                                                printf("Ajay is youngest");
                                                    
                                                        return 0;
} 