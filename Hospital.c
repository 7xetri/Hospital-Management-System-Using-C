#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
struct ad
{
    char name[30];
    char disease[30];
    int cabin,phone,age;
} 
x[100];
int n,i,j=0,a=0,sum=0,g,flag,num;
void read();
void write();
void add();
void viewpat();
void search();
int t(void);
void edit();
void del();
void show();
int main()
{
    read();
    int c,i,q;
    printf("\t\t\t HOSPITAL MANAGEMENT SYSTEM \n\n");
    printf("\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n\n");
    int m,n;
//making out the pattern
   
        
        printf("\n");
    
    while(c!=6)
    {

        
printf("\t\t\xDB\xDB\xDB\xDB\xB2 1. Add Patients   \n\n");

printf("\t\t\xDB\xDB\xDB\xDB\xB2 2. View Records\n\n");
printf("\t\t\xDB\xDB\xDB\xDB\xB2 3. Search\n\n");

printf("\t\t\xDB\xDB\xDB\xDB\xB2 4. Edit Informations\n\n");

printf("\t\t\xDB\xDB\xDB\xDB\xB2 5. Delete Patients Information\n\n");
printf("\t\t\xDB\xDB\xDB\xDB\xB2 6.Close Appication\n\n");

printf("\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
printf("\t\t");
t();

printf("\nEnter your choice:");
        scanf("%d",&c);//choice for option
        fflush(stdin);//making it clear
        if(c==1)//add
        {
            add();
            system("cls");
        }
        else if(c==2)
        {
            
            viewpat();
            system("cls");
            
        }
        else if(c==3)//search
        {
            system("cls");
            search();
        }
        else if(c==4)//edit
        {
            system("cls");
            edit();
        }
        else if(c==5)//delete
        {
            system("cls");
            del();
            
            system("cls");
        }
        else if(c==6)
        {
            	{
system("cls");

printf("\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 HOSPITAL MANAGEMENT SYSTEM \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

printf("\n\n\t\t\t\t\t   \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MINI C PROJECT \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

printf("\n\n \n \n\n\n \t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 PREPARED BY: \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

printf("\n\n\n \t\t\xB2\xB2\xB2\xB2\xB2 SAUGAT THAPA (PAS076BEI035)");
printf("\n \t\t\xB2\xB2\xB2\xB2\xB2 NABARAJ SUBEDI(PAS076BEI018)");
printf("\n \t\t\xB2\xB2\xB2\xB2\xB2 AAKASH THAKUR (PAS076BEI001)");
printf("\n\n\n\n\t\t\tExiting in 3 second...........>");
//flushall();
Sleep(3000);
exit(0);
}
        }
        else
        {
            system("cls");
            Beep(750, 300);
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2Invalid input , try again by using valid inputs \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
            Sleep(5000);
            system("cls");
        }
        printf("\n\n");
    }
}
void add()
{   
            system("cls");
			printf("\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ADDING RECORDS \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n\n");
  
	    printf("\n\n");
   
    printf("\n\t\tHow many entry do you want to add=");
    scanf("%d",&n);
    sum=n+num;

    for(i=num,j=0; i<sum; i++)
    {
        printf("\n");
        fflush(stdin);
        printf("\t\t\xDB\xDB\xDB\xDB\xB2 Enter patient's Name = ");
        gets(x[i].name);
        fflush(stdin);
        printf("\t\t\xDB\xDB\xDB\xDB\xB2 Enter disease = ");
        gets(x[i].disease);
        fflush(stdin);
        printf("\t\t\xDB\xDB\xDB\xDB\xB2 Enter the age = ");
        scanf("%d",&x[i].age);
        fflush(stdin);
        printf("\t\t\xDB\xDB\xDB\xDB\xB2 Enter cabin no = ");
        scanf("%d",&x[i].cabin);
        fflush(stdin);
        printf("\t\t\xDB\xDB\xDB\xDB\xB2 Enter phone number = ");
        scanf("%d",&x[i].phone);
        fflush(stdin);
        printf("\n");
        j++;
        a++;
        num++;
    }
    printf("\t\t\xDB\xDB\xDB\xDB\xB2 %d RECORDS ADDED SUCESSFULLY \xDB\xDB\xDB\xDB\xB2",n);
    
Sleep(3000);
}



void edit()
{printf("\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 EDITING RECORDS \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n\n");
 
    int q,p;
    fflush(stdin);
    printf("\t\tWhat do you want to edit ?\n\n");
    printf("\t\tEnter your option\n\n");
    printf("\t\xDB\xDB\xDB\xDB\xB2 1.Name\n \t\xDB\xDB\xDB\xDB\xB2 2.Disease\n \t\xDB\xDB\xDB\xDB\xB2 3.Age\n \t\xDB\xDB\xDB\xDB\xB2 4.Cabin\n \t\xDB\xDB\xDB\xDB\xB2 5.Phone no.\n");
	
    printf("\n\t\tOption=");
    scanf("%d",&q);//option
    if(q<=5)
    {
        printf("\n\n\t\xDB\xDB\xDB\xDB\xB2 Enter the serial no of that patient= (0 - %d)=",num-1);
        scanf("%d",&p);//serial number
        if(p<num)
        {
            if(q==1)
            {
                fflush(stdin);
                printf("\n\n\t\xDB\xDB\xDB\xDB\xB2 Enter the new name=");
                gets(x[p].name);
            }
            else if(q==2)
            {
                fflush(stdin);
                printf("\n\n\t\xDB\xDB\xDB\xDB\xB2  Enter the new Disease=");
                gets(x[p].disease);
            }
            else if(q==3)
            {
               fflush(stdin);
                printf("\n\n\t\xDB\xDB\xDB\xDB\xB2  Enter the new Age=");
                scanf("%d",&x[p].age);
            }

            else if(q==4)
            {
               fflush(stdin);
                printf("\n\n\t\xDB\xDB\xDB\xDB\xB2  Enter the new Cabin no=");
                scanf("%d",&x[p].cabin);
            }

            else if(q==5)
            {
                fflush(stdin);
                printf("\n\n\t\xDB\xDB\xDB\xDB\xB2  Enter the new Phone no =");
                scanf("%d",&x[p].phone);
            }
        }
        
    }
    else
    {
                printf("\n\t\t\xDB\xB2 INVALID INPUT \xDB\xB2 \n");




    }

printf("\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 EDITED SUCESSFULLY!!! \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n\n");
     Sleep(5000);
system("cls");
}
void search()
{printf("\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SERCHING RECORDS \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n\n");
  
    int s,h,f;
    char u[100];
    printf("\t\tBy what do you want to search ?\n\n");
    printf("\t\xDB\xDB\xDB\xDB\xB2 1.Serial No.\n\n \t\xDB\xDB\xDB\xDB\xB2 2. Name\n\n \t\xDB\xDB\xDB\xDB\xB2 3.Disease\n\n \t\xDB\xDB\xDB\xDB\xB2 4.Cabin No.\n\n \t\xDB\xDB\xDB\xDB\xB2 5Phone No.\n\n \t\xDB\xDB\xDB\xDB\xB2 6.Age\n\n\n\t\tOption = ");
	scanf("%d",&h);
        printf("\n\n");
        if(h==1)
    {
        printf("\tEnter Serial number of the patient=");
        scanf("%d",&s);
        if(s<num)
        {
            printf("\n");
            printf("\t\xDB\xDB\xDB\xDB\xB2 Serial Number=%d\n",s);
            printf(" \t\xDB\xDB\xDB\xDB\xB2Name = ");
            puts(x[s].name);
            printf("\t\xDB\xDB\xDB\xDB\xB2 Disease = ");
            puts(x[s].disease);
            printf("\t\xDB\xDB\xDB\xDB\xB2 Cabin no = %d \n\t\xDB\xDB\xDB\xDB\xB2 Phone number = 0%d\n \t\xDB\xDB\xDB\xDB\xB2 Age = %d",x[s].cabin,x[s].phone,x[s].age);
            printf("\n\n");
        }
        else
            printf("\n\t\t\xDB\xB2 Not Found \xDB\xB2 \n");

          
    }
    else if(h==2)//problem is here.........
    {
        int f=1;
        fflush(stdin);
        printf("\tEnter name of patient=");
        gets(u);
        fflush(stdin);
        for(g=0; g<num; g++)
        {
            if(strcmp(u,x[g].name)==0)
            {  printf("\n");
            printf("\t\xDB\xDB\xDB\xDB\xB2 Serial Number=%d\n",s);
            printf(" \t\xDB\xDB\xDB\xDB\xB2Name = ");
            puts(x[s].name);
            printf("\t\xDB\xDB\xDB\xDB\xB2 Disease = ");
            puts(x[s].disease);
            printf("\t\xDB\xDB\xDB\xDB\xB2 Cabin no = %d \n\t\xDB\xDB\xDB\xDB\xB2 Phone number = 0%d\n \t\xDB\xDB\xDB\xDB\xB2 Age = %d",x[s].cabin,x[s].phone,x[s].age);
            printf("\n\n");

            }
        }
        if(f==1)
           printf("\n\t\t\xDB\xB2 Not Found \xDB\xB2 \n");




    }
    else if(h==3)
    {
        int f=1;
        fflush(stdin);
        printf("\tEnter Disease = ");
        gets(u);
        fflush(stdin);
        for(g=0; g<num; g++)
        {
            if(strcmp(u,x[g].disease)==0)
            {
               printf("\n");
            printf("\t\xDB\xDB\xDB\xDB\xB2 Serial Number=%d\n",s);
            printf(" \t\xDB\xDB\xDB\xDB\xB2Name = ");
            puts(x[s].name);
            printf("\t\xDB\xDB\xDB\xDB\xB2 Disease = ");
            puts(x[s].disease);
            printf("\t\xDB\xDB\xDB\xDB\xB2 Cabin no = %d \n\t\xDB\xDB\xDB\xDB\xB2 Phone number = 0%d\n \t\xDB\xDB\xDB\xDB\xB2 Age = %d",x[s].cabin,x[s].phone,x[s].age);
            printf("\n\n");
                f=0;
            }


        }
        if(f==1)
           printf("\n\t\t\xDB\xB2 Not Found \xDB\xB2 \n");



    }
    else if(h==4)
    {
        int f=1;
        printf("\tEnter Cabin number = ");
        scanf("%d",&f);
        for(g=0; g<num; g++)
        {
            if(f==x[g].cabin)
             { printf("\n");
            printf("\t\xDB\xDB\xDB\xDB\xB2 Serial Number=%d\n",s);
            printf(" \t\xDB\xDB\xDB\xDB\xB2Name = ");
            puts(x[s].name);
            printf("\t\xDB\xDB\xDB\xDB\xB2 Disease = ");
            puts(x[s].disease);
            printf("\t\xDB\xDB\xDB\xDB\xB2 Cabin no = %d \n\t\xDB\xDB\xDB\xDB\xB2 Phone number = 0%d\n \t\xDB\xDB\xDB\xDB\xB2 Age = %d",x[s].cabin,x[s].phone,x[s].age);
            printf("\n\n");
                f=0;
            }

        }
        if(f==1)
           printf("\n\t\t\xDB\xB2 Not Found \xDB\xB2 \n");


    }
    else if(h==5)
    {
        int f=1;
        printf("\tEnter Phone number = ");
        scanf("%d",&f);
        for(g=0; g<num; g++)
        {
            if(f==x[g].phone)
            {
               printf("\n");
            printf("\t\xDB\xDB\xDB\xDB\xB2 Serial Number=%d\n",s);
            printf(" \t\xDB\xDB\xDB\xDB\xB2Name = ");
            puts(x[s].name);
            printf("\t\xDB\xDB\xDB\xDB\xB2 Disease = ");
            puts(x[s].disease);
            printf("\t\xDB\xDB\xDB\xDB\xB2 Cabin no = %d \n\t\xDB\xDB\xDB\xDB\xB2 Phone number = 0%d\n \t\xDB\xDB\xDB\xDB\xB2 Age = %d",x[s].cabin,x[s].phone,x[s].age);
            printf("\n\n");
            }

        }
        if(f==1)
           printf("\n\t\t\xDB\xB2 Not Found \xDB\xB2 \n");

    }
    else if(h==6)
    {
        int f=1;
        printf("\tEnter Age = ");
        scanf("%d",&f);
        for(g=0; g<num; g++)
        {
            if(f==x[g].age)
            {
               printf("\n");
            printf("\t\xDB\xDB\xDB\xDB\xB2 Serial Number=%d\n",s);
            printf(" \t\xDB\xDB\xDB\xDB\xB2Name = ");
            puts(x[s].name);
            printf("\t\xDB\xDB\xDB\xDB\xB2 Disease = ");
            puts(x[s].disease);
            printf("\t\xDB\xDB\xDB\xDB\xB2 Cabin no = %d \n\t\xDB\xDB\xDB\xDB\xB2 Phone number = 0%d\n \t\xDB\xDB\xDB\xDB\xB2 Age = %d",x[s].cabin,x[s].phone,x[s].age);
            printf("\n\n");
            }

        }
        if(f==1)
           printf("\n\t\t\xDB\xB2 Not Found \xDB\xB2 \n");


    }
    else
        printf("\n\t\t\xDB\xB2 INVALID INPUT \xDB\xB2 \n");



Sleep(5000);
system("cls");
}
void del()
{
	printf("\t\t \xDB\xDB\xDB\xDB\xB\xDB\xDB\xDB\xDB\xB2 DELETING RECORS \xDB\xDB\xDB\xDB\xB\xDB\xDB\xDB\xDB\xB2 ");
    int f,h;
    
    printf("\n\nEnter the serial number of the patient that you want to delete=");
    scanf("%d",&f);
    if(f<num)
    {
        printf("\n\n\t\tWhat do you want to do ?\n\n");
        printf(" \t\xDB\xDB\xDB\xDB\xB2 1.Remove the whole record\n\n \t\xDB\xDB\xDB\xDB\xB2 2.Remove Name\n\n \t\xDB\xDB\xDB\xDB\xB2 3.Remove Disease\n\n \t\xDB\xDB\xDB\xDB\xB2 4.Remove age\n\n \t\xDB\xDB\xDB\xDB\xB2 5.Remove Cabin\n\n \t\xDB\xDB\xDB\xDB\xB2 6.Remove phone number\n\n\n\t\tOption = ");scanf("%d",&h);
        if(h==1)
        {
            while(f<num)
            {
                strcpy(x[f].name,x[f+1].name);
                strcpy(x[f].disease,x[f+1].disease);
                x[f].age=x[f+1].age;
                x[f].cabin=x[f+1].cabin;
                x[f].phone=x[f+1].phone;
                f++;
            }
            num--;
        }
        else if(h==2)
        {
            strcpy(x[f].name,"Cleared");

        }
        else if(h==3)
        {
            strcpy(x[f].disease,"Cleared");
        }
        else if(h==4)
        {
            x[f].age=0;
        }
        else if(h==5)
        {
            x[f].cabin=0;
        }
        else if(h==6)
        {
            x[f].phone=0;
        }

    }
    else
    
        printf("\n\n\t\xDB\xDB\xDB\xDB\xB2 Invalid Serial number \t\xDB\xDB\xDB\xDB\xB2");
        printf("\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 DELETED SUCESSFULLY \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n\n");
  
Sleep(3000);
}
void read()
{
    FILE *fp = fopen("patient.txt","r");
    if(fp == NULL)
    {
        //create empty file, so that we can open it
        //in the next execution of this program
        fp = fopen("patient.txt","w");
        fclose(fp);
        printf("File does not exist, I JUST CREATED IT, exiting...\n\n\n");
        
    }

    num = fread(x, sizeof(struct ad),100, fp);
    fclose(fp);
}
void write()
{
    FILE *fp = fopen("patient.txt","w");
    if(fp == NULL)
    {
        printf("Error");
        exit(1);
    }
    fwrite(x, sizeof(struct ad),num, fp);

    fclose(fp);
}
int t(void) //for time
{
time_t t;
time(&t);
printf("Date and time:%s\n",ctime(&t));

return 0 ;
}
void viewpat()
{
system("cls");
printf("\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 VIEWING RECORDS \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n\n");
  

    for(i=0; i<num; i++)
    { 
        printf("\n");
        printf("\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Serial Number=%d",i);
        printf("\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Name = ");
        puts(x[i].name);
        
        printf("\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Disease = ");
        puts(x[i].disease); 
        printf("\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Cabin no = %d\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Phone number = 0%d\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Age=%d",x[i].cabin,x[i].phone,x[i].age);
        printf("\n\n");
    }printf("\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 RETURNING TO MAIN MENU IN 15 SECONDS \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ");
	Sleep(15000);
    
}
