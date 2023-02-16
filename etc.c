#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int i,j, main_exit;

void menu();
void new_entry();
void view_list();
void see();
//void closer();

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
    
    }add,check;

//----------------------------------------------------------------------------------------------------------
int main()
{
	
  menu();
  return 0;
}

//-----------------------------------------------------------------------------------------------------------
void menu()
{  
    int choice;
    printf("\n\n\t\t\t---------------------------------------------------------------------\n\t\t\t  || ✪ ✪   ℍ 𝕆 𝕊 𝕋 𝔼 𝕃   𝕄 𝔸 ℕ 𝔸 𝔾 𝔼 𝕄 𝔼 ℕ 𝕋   𝕊 𝕐 𝕊 𝕋 𝔼 𝕄   ✪ ✪ ||\n\t\t\t---------------------------------------------------------------------");
    printf("\n\n\n\n\n\t   ▓▓▓▓▓▓  𝐖 𝐄 𝐋 𝐂 𝐎 𝐌 𝐄   𝐓 𝐎   𝐓 𝐇 𝐄   𝐌 𝐀 𝐈 𝐍   𝐌 𝐄 𝐍 𝐔  ▓▓▓▓▓▓ ");
    printf("\n\n\t\t1] Enter new Student's data\n\t\t2] view all students list\n\t\t3] Check the details of existing account\n\t\t4] Removing existing account\n\t\t5] Exit\n\n\n\n\n\t\t Enter your choice:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:new_entry();
        break;
        case 2:view_list();
        break;
        case 3:see();
        break;
        default:menu();
    }
}
//------------------------------------------------------------------------------------------------------------
void new_entry()
{
    int choice ;
    FILE *ptr,*hostel;
    ptr=fopen("record.dat","a+");
   roll_no:
    
    printf("\n\n\t\t\t|| ADD STUDENTS DATA ||");
    printf("\n Enter your roll number:");
    scanf("%s",check.roll_no);
    while(fscanf(ptr,"%s %s %d %s %d %s %s %d %s %s\n",add.roll_no, add.name, &add.age, add.city, &add.phone, add.mail_id, add.father_name, &add.father_phone, add.room_no, add.hostel_name)!=EOF)
    { if (strcmp(check.roll_no,add.roll_no)==0)
            {printf("Students roll no. already in use!");
             goto roll_no;
            }
    }

    strcpy(add.roll_no,check.roll_no);
    printf("\n Enter your name:");
    scanf("%s",add.name);
    printf("\n Enter your Father's name:");
    scanf("%s",add.father_name);
    printf("\n Enter your age:");
    scanf("%d",&add.age);
    printf("\n Enter the city:");
    scanf("%s",add.city);
    printf("\n Enter your phone number: ");
    scanf("%d",&add.phone);
    printf("\n Enter your email id :");
    scanf("%s",add.mail_id);
    printf("\n Enter your Father's phone no.:");
    scanf("%d",&add.father_phone);
    printf("\n Enter your room no.:");
    scanf("%s",add.room_no);
    printf("\n Enter your hostel name from BH-1, BH-2, BH-3 :");
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
    printf("\n\n𝐒𝐭𝐮𝐝𝐞𝐧𝐭 𝐚𝐝𝐝𝐞𝐝 𝐬𝐮𝐜𝐜𝐞𝐬𝐬𝐟𝐮𝐥𝐥𝐲 !\n\n\n");
    
    printf("Enter 1 for menu");
    scanf("%d",&main_exit);
    if (main_exit==1)
      menu();
}

//-------------------------------------------------------------------
void view_list()
{
	system("CLS");
    FILE *view;
    view=fopen("record.dat","r");
    int test=0;
    
    printf("\nROLL NO.\tNAME\t\t\tcity\t\t\tPHONE\n");

    while(fscanf(view,"%s %s %d %s %d %s %s %d %s %s\n",add.roll_no, add.name, &add.age, add.city, &add.phone, add.mail_id, add.father_name, &add.father_phone, add.room_no, add.hostel_name)!=EOF)
       {
           printf("\n%8s\t %10s\t\t\t %10s\t\t %d",add.roll_no,add.name,add.city,add.phone);
           test++;
       }
    fclose(view);
    
    if (test==0)
        {   
            printf("\nNO RECORDS!!\n");}

    view_list_invalid:
     printf("\n\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&main_exit);
        
        if (main_exit==1)
            menu();
        else if(main_exit==0)
            closer();
        else
        {
            printf("\nInvalid!\a");
            goto view_list_invalid;
        }
}

//------------------------------------------------------------------------------------------------------------------
//function to view all data of 1 student
void see()
{
	system("CLS");
    FILE *ptr;
    int test=0;
    int choice;
    ptr=fopen("record.dat","r");
    printf("Do you want to check by\n1.Roll no\n2.Name\nEnter your choice:");
    scanf("%d",&choice);
    if (choice==1)
    {   printf("\n\nEnter the roll number:");
        scanf("%s",check.roll_no);

        while (fscanf(ptr,"%s %s %d %s %d %s %s %d %s %s\n",add.roll_no, add.name, &add.age, add.city, &add.phone, add.mail_id, add.father_name, &add.father_phone, add.room_no, add.hostel_name)!=EOF)
        {
            if(strcmp(add.roll_no,check.roll_no)==0)
            {   
                test=1;

                printf("\nROLL NO.:%s\nName:%s \nDOB:%d/%d/%d \nAge:%d \ncity:%s \nPhone number:%d \nE-Mail id:%s \nFather's name:%s \n Father's Phone No.:%d \nRoom No:%s \nHostel:%s \n",add.roll_no, add.name, add.dob.month, add.dob.day, add.dob.year, add.age, add.city, add.phone, add.mail_id, add.father_name, add.father_phone, add.room_no, add.hostel_name);
            }
        }void new_entry()
{
	system("CLS");
    int choice;
    FILE *ptr,*hostel;

    ptr=fopen("record.dat","a+");
    roll_no:
    
    printf("\t\t\t\xB2\xB2\xB2 ADD STUDENTS DATA  \xB2\xB2\xB2\xB2");
    printf("\nEnter your roll number:");
    scanf("%s",check.roll_no);
    while(fscanf(ptr,"%s %s %d/%d/%d %d %s %d %s %s %d %s %s\n",add.roll_no, add.name, &add.dob.month, &add.dob.day, &add.dob.year, &add.age, add.city, &add.phone, add.mail_id, add.father_name, &add.father_phone, add.room_no, add.hostel_name)!=EOF)
    {
        if (strcmp(check.roll_no,add.roll_no)==0)
            {printf("Students roll no. already in use!");
             goto roll_no;
        }
    }

    strcpy(add.roll_no,check.roll_no);
    printf("\nEnter the name:");
    scanf("%s",add.name);
    printf("\nEnter the date of birth(mm/dd/yyyy):");
    scanf("%d/%d/%d",&add.dob.month,&add.dob.day,&add.dob.year);
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
        fprintf(ptr,"%s %s %d/%d/%d %d %s %d %s %s %d %s %s\n",add.roll_no, add.name, add.dob.month, add.dob.day, add.dob.year, add.age, add.city, add.phone, add.mail_id, add.father_name, add.father_phone, add.room_no, add.hostel_name);
	
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
		//----------------------------------------
    
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