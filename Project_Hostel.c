#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int i,j, main_exit;

void menu();
void new_entry();
void closer();

//-----------------------------------------------------------------------------------------------------------
struct {

    char name[60];
    int age;
    char city[60];
    char mail_id[30];
    char room_no[8];
    char father_name[60];
    int father_phone;
    int phone;
    char hostel_name[6];
    char roll_no[10];
    
    }add,upd,check,rem,sort;

//----------------------------------------------------------------------------------------------------------
int main()
{
	
  menu();
  return 0;
}

//-----------------------------------------------------------------------------------------------------------
void menu()
{  
system("CLS");
    int choice;
    printf("\t\t\t__________________________________");
    printf("\n\n\t\t\t || HOSTEL MANAGEMENT SYSTEM  ||");
    printf("\n\t\t\t__________________________________");
    printf("\n\n\n\n\n\t\t || WELCOME TO THE MAIN MENU  ||");
    printf("\n\n\t\t1>> Enter new Student's data\n\t\t2>> Update information of existing account\n\t\t3>> Check the details of existing account\n\t\t4>> View all Students of a particlar Hostel\n\t\t5>> Removing existing account\n\t\t6>> View all students list\n\t\t7>> Exit\n\n\n\n\n\t\t Enter your choice:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:new_entry();
        break;
       // case 2:
        default:menu();
    }
}
//------------------------------------------------------------------------------------------------------------
void new_entry()
{
	system("CLS");
    int choice ;
    
 FILE *ptr,*hostel;
    ptr=fopen("record.dat","a+");
    roll_no:
    
    printf("\t\t\t ADD STUDENTS DATA ");
    printf("\nEnter your roll number:");
    scanf("%s",check.roll_no);
    while(fscanf(ptr,"%s %s %d %s %d %s %s %d %s %s\n",add.roll_no, add.name, &add.age, add.city, &add.phone, add.mail_id, add.father_name, &add.father_phone, add.room_no, add.hostel_name)!=EOF)
    { if (strcmp(check.roll_no,add.roll_no)==0)
            {printf("Students roll no. already in use!");
             goto roll_no;
            }
    }

    strcpy(add.roll_no,check.roll_no);
    printf("\nEnter the name:");
    scanf("%s",add.name);

    printf("\nEnter the age:");
    scanf("%d",&add.age);
    printf("\nEnter the city:");
    scanf("%s",add.city);
    printf("\nEnter the phone number: ");
    scanf("%d",&add.phone);
    printf("\n Enter your email id :");
    scanf("%s",add.mail_id);
    printf("\n Enter your Father's name:");
    scanf("%s",add.father_name);
    printf("\n Enter your Father's phone no.:");
    scanf("%d",&add.father_phone);
    printf("\n Enter your room no.:");
    scanf("%s",add.room_no);
    printf("\n Enter your hostel name from BH-1, BH-2, BH-3, GH-1 :");
    scanf("%s",add.hostel_name);
       
	
		//adding student roll no. to hostels' list
	if(strcmp(add.hostel_name,"BH-1")==0)
	{
		hostel=fopen("BH-1.dat","a+");
		fprintf(hostel, "%s\n", add.roll_no);
		fclose(hostel);		
	}
	else if(strcmp(add.hostel_name,"BH-2")==0)
	{
		hostel=fopen("BH-2.dat","a+");
		fprintf(hostel, "%s\n", add.roll_no);
		fclose(hostel);		
	}
	else if(strcmp(add.hostel_name,"BH-3")==0)
	{
		hostel=fopen("BH-3.dat","a+");
		fprintf(hostel, "%s\n", add.roll_no);
		fclose(hostel);		
	}
	else if(strcmp(add.hostel_name,"GH-1")==0)
	{
		hostel=fopen("GH-1.dat","a+");
		fprintf(hostel, "%s\n", add.roll_no);
		fclose(hostel);		
	 }
     fclose(ptr);
    printf("\nStudent added successfully!");
    add_invalid:
    printf("\n\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
    scanf("%d",&main_exit);
    if (main_exit==1)
    
        menu();
    else if(main_exit==0)
            closer();
    else
        {
            printf("\nInvalid!\a");
            goto add_invalid;
        }
}
}