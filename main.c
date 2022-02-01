/****************************************************************************/
/****************************************************************************/
/*****************    Author: Mohamed Alaa Eldehimy   ***********************/
/*****************    Layer: Main                     ***********************/
/*****************    SWC: C_lectures                 ***********************/
/*****************    VER: 1.00                       ***********************/
/****************************************************************************/
/****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"
#include "clincapp.h"


void main (void)
{
	u16 mode,pass,i=0,id,age,admin_mode,user_mode,flag=0;
	u8 name[20],gender[20];
	system("cls");
	printf("\n\t\t##################################################\n");
	printf("\n\t\t##################################################");
	printf("\n\t\t\t\tWelcome in Clinc App\n");
	printf("\t\t##################################################\n");
	printf("\t\t\t\tMohamed Alaa Eldin Eldehimy\n");
	printf("\t\t##################################################\n");


	
	do
	{	restart:
		printf("\n\t\t(1) for admin mode enter\n\t\t(2) for user mode enter\n\t\t(0) to close\n choose : ");
		scanf("%d",&mode);
		switch(mode)
		{
			
			case 1:
			printf("\t\tenter password for admin mode : ");
			scanf("%d",&pass);
			for(i=0;i<2;i++)
			{
				if (pass==1234)
				{
					printf("\n\t\t correct password, welcome in admin mode :\n");
					flag =0;
					break;
				}
				else
				{
					printf("\t\tincorrect password, please try again : ");
					scanf("%d",&pass);
					flag =0;
				}
				
				if (i==1)
				{
					printf("\t\t3 times incorrect password, no more try : ");
					system("cls");
					printf("\n\n\t\t#### back to main page ###\n\n");
					goto restart;
				}
			}
			do{
				printf("\n\t\t(1)to add new patient enter\n\t\t(2)to edit patient data enter\n\
\t\t(3)for reservation enter\n\t\t(4)to cancel the reservation\n\t\t(0)to close the admin mode\n choose : ");
				scanf("%d",&admin_mode);
				
				switch(admin_mode)
				{
					case 1 :
						system("cls");					
						printf("enter name :");
						scanf("%s",&name);
						printf("enter age :");
						scanf("%d",&age);
						printf("enter gender :");
						scanf("%s",&gender);
						printf("enter id for this patient :");
						scanf("%d",&id);
						insert_first(id,age,name,gender);
						break;
						
					case 2 :
						system("cls");
						printf("\t\tenter id :");
						scanf("%d",&id);
						
						edit_info(id);
						break;
						
					case 3 :
						system("cls");
						
						reserve();
					break;
					
					case 4 :
						printf("\t\tEnter ID for Cancel Reservation:");
						scanf("%d",&id);
						cancel_reserve(id);
					break;
					
				}
			}while(admin_mode);
			mode=1;
			break;
			
			
			case 2:
			do{
				printf("\t\t(1) to show patient data enter\n\t\t(2) to show reservations enter\n\
 \t\t(0) to close user mode\n choose : ");
				scanf("%d",&user_mode);
				switch(user_mode)
				{
					case 1 :
						system("cls");
						printf("enter id to search for :");
						scanf("%d",&id);
						show_details(id);
					break;
					
					case 2:
						printf("enter your id to show today reservation :");
						scanf("%d",&id);
						reserve_view(id);	
					break;
					
				}
			}while(user_mode);
			mode=1;
			break;
			
		}
	}while(mode);
	
	
	
}