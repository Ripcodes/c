#include<stdio.h>
void main() 
{
    int choice , ch2;
    printf("\n || Welcome to Menue ||\n\n Enter your choice \n 1.Vej fod \n 2.Non-vej \n 3.Water \n 4.Coldring\n");
    scanf("%d",&choice);
    switch(choice)
    { case 1:
         { printf("\n Welcome to vej menue \n \n Enter your choice");
           printf("\n 1.masalapa \n 2.puri bhaji \n 3.pulaw \n 4.----- \n 5.----- \n 6.----\n");
           scanf("%d",&ch2);
           switch (ch2)
            {
              case 1:
               printf("Prise of masalapa -------");
              break;
              case 2:
              printf("Prise of puri bhaj ------");
              break;
              case 3:
               printf("Prise of -----    -----");
              break;
              case 4:
              printf("Prise of ------------");
              break;
              case 5:
               printf("Prise of -----------");
              break;
              case 6:
              printf("Prise of ------------");
              break;
              default:
              printf(" Enter vallid datails");
              break;
            } break;}
       case 2:
            {printf("\n Welcome to Non-vej menue");
             printf("\n1.-----\n 2.----\n 3.---- \n 4.----- \n 5.----- \n 6.----\n");
             scanf("%d",&ch2);
             switch (ch2)
             {
              case 1:
               printf("Prise of -------");
              break;
              case 2:
              printf("Prise of ------");
              break;
              case 3:
               printf("Prise of -----    -----");
              break;
              case 4:
              printf("Prise of ------------");
              break;
              case 5:
               printf("Prise of -----------");
              break;
              case 6:
              printf("Prise of ------------");
              break;
              default:
              printf(" Enter vallid datails");
              break;
            } break;


            }
         case 3:
         { printf("\n Welcome to water menue \n \n Enter your choice");
           printf("\n 1.masalapa \n 2.puri bhaji \n 3.pulaw \n 4.----- \n 5.----- \n 6.----\n");
           scanf("%d",&ch2);
           switch (ch2)
            {
              case 1:
               printf("Prise of masalapa -------");
              break;
              case 2:
              printf("Prise of puri bhaj ------");
              break;
              case 3:
               printf("Prise of -----    -----");
              break;
              case 4:
              printf("Prise of ------------");
              break;
              case 5:
               printf("Prise of -----------");
              break;
              case 6:
              printf("Prise of ------------");
              break;
              default:
              printf(" Enter vallid datails");
              break;
            } break;}
       case 4:
            {printf("\n Welcome to colddrink menue \n \n Enter your choice");
             printf("\n1.-----\n 2.----\n 3.---- \n 4.----- \n 5.----- \n 6.----\n");
             scanf("%d",&ch2);
             switch (ch2)
             {
              case 1:
               printf("Prise of -------");
              break;
              case 2:
              printf("Prise of ------");
              break;
              case 3:
               printf("Prise of -----    -----");
              break;
              case 4:
              printf("Prise of ------------");
              break;
              case 5:
               printf("Prise of -----------");
              break;
              case 6:
              printf("Prise of ------------");
              break;
              default:
              printf(" Enter vallid datails");
              break;
            } break;


            }
    
     }
      
    }