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


void insert_first(u16 idp, u16 agep, u8 *namep, u8 *genderp)
{
	u16 i;
	//creat a new node
	node *new_node =(node*)malloc(sizeof(node));
	//insert its data
	new_node->id = idp;
	new_node->age = agep;
	for(i=0;i<20;i++)
		new_node->name[i] = namep[i];
	for(i=0;i<20;i++)
		new_node->gender[i] = genderp[i];
	//make node indicate to (what the head pointer indicate for) null at first then when add node its changed to it
	new_node->next=head;
	//make head points to the new node
	head = new_node;
}

void show_details (u16 idp)
{
	u16 flag;
	if(head==NULL)
	{
		printf("\nits empty\n");
	}
	else 
	{
		current = head;
		while(current != NULL)
		{
			if (current->id == idp)
			{
				printf("\nname is %s\n",head->name);
				printf("\nage is %d\n",head->age);
				printf("\ngender is %s\n",head->gender);
				
				flag=1;
				break;
			}
			current=current->next;
		}
		if (flag==1)
		{
			printf("\ndone\n");
		}
		else
			printf("\nnot found\n");
			
		
	}
	
}


void reserve (void)
{
	u8 x=0;
	for(i=0;i<5;i++)
	{
		switch(i)
		{
			case 0 : 
				if(arr[0]!=-1) 
				break;
			
				else 
					printf("(1)2pm to 2:30\n"); 
				break;
			case 1 : 
				if(arr[1]!=-1) 
				break;
				else 
					printf("(2)2:30pm to 3\n");
				break;		
			case 2 : 
				if(arr[2]!=-1) 
				break;
				
				else 
					printf("(3)3:30pm to 4\n"); 
				break;
			case 3 : 
				if(arr[3]!=-1) 
				break;
						
				else
					printf("(4)4pm to 4:30\n"); 
				break;
			case 4 : 
				if(arr[4]!=-1) 
				break;
						
				else 
					printf("(5)4:30pm to 5\n"); 
				break;						
		}
	}
	printf("Your choice: ");
	scanf("%d",&time);
	if(time>5)
	{
		printf("wrong choise");
		return;
	}
	printf("Please Enter your ID: ");
	scanf("%d",&ID);
	current = head;
   while(current != NULL)
   {
      if(current->id == ID)
      {
        arr[time-1]=ID;
		x=1;
        return;
      }
      current = current->next;
   }
   if (x==0)
	   printf("\nnot found id\n");
	
}
void reserve_view (u16 idp)
{
	for(i=0;i<5;i++)
	{
		switch(i)
		{
			case 0 : 
				if(arr[0]==-1)
					break;
				else 
					printf("2 to 2:30\n",arr[0]);
				break;
			case 1 : 
				if(arr[1]==-1) 
					break;
				else
				printf("2:30 to 3\n",arr[1]);
				break;		
			case 2 : 
				if(arr[2]==-1) 
					break;
				else 
					printf("3:30 to 4\n",arr[2]); 
				break;
			case 3 : 
				if(arr[3]==-1) 
					break;
				else 
					printf("4 to 4:30\n",arr[3]); 
				break;
			case 4 : 
				if(arr[4]==-1) 
					break;
				else 
					printf("4:30 to 5\n",arr[4]); 
				break;										
		}
	}
	
}

void cancel_reserve (u16 idp)
{
u8 y=0;
	for(i=0;i<5;i++)
	{
			if(arr[i]==ID)
			{
				arr[i]=-1;
				y=1;
			}
    }
	if(y==0)
	{
		printf("\nnot found ID\n");
	}
	return;
}


void Print_List(u32 idp)
{	u16 flag;
	if(head==NULL)
	{
		printf("\nits empty\n");
	}
	else 
	{
		current = head;
		while(current != NULL)
		{
			if (current->id == idp)
			{
				printf("\name is %s\n",head->name);
				printf("\nage is %d\n",head->age);
				printf("\ngender is %s\n",head->gender);
				
				flag=1;
				break;
			}
			current=current->next;
		}
		if (flag==1)
		{
			printf("\ndone\n");
		}
		else
			printf("\nnot found\n");
			
		
	}
}


void edit_info (u16 idp)
{
u16 flag,r,i;
	if(head==NULL)
	{
		printf("\nits empty\n");
	}
	else 
	{
		current = head;
		while(current != NULL)
		{
			if(current->id ==idp)
			{
				printf("\n\n ### the old data ###\n\n");
				printf("\nname is %s\n",head->name);
				printf("\nage is %d\n",head->age);
				printf("\ngender is %s\n",head->gender);
				printf("\n\n ### enter the new data ###\n\n");
			printf("enter name :");
			scanf("%s",&current->name);
			printf("enter age :");
			scanf("%d",&current->age);
			printf("enter gender :");
			scanf("%s",&current->gender);
			current->id = idp;
			flag =1;
			break;
			}
			current=current->next;
			
		}
		if (flag==1 )
		{
			printf("\ndone\n");
		}
		else
			printf("\nnot found\n");
			
		
	}
}
