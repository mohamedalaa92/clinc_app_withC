/****************************************************************************/
/****************************************************************************/
/*****************    Author: Mohamed Alaa Eldehimy   ***********************/
/*****************    Layer: Main                     ***********************/
/*****************    SWC: C_lectures                 ***********************/
/*****************    VER: 1.00                       ***********************/
/****************************************************************************/
/****************************************************************************/
#ifndef CLINCAPP_H_
#define CLINCAPP_H_

typedef struct node_t
{
	u8 name[20];
	u8 gender[20];
	u16 reserve;
	u16 age ;
	u16 id;
	
	struct node_t *next;
}node;
#define size 5
static u32 ListLength,Size,ID,time,i;
static u32 arr[size]={-1,-1,-1,-1,-1};

static node *head=NULL;
static node *current=NULL;
static node *pervios=NULL;
static node *del=NULL;
static node *edit=NULL;

void insert_first(u16 idp, u16 agep, u8 *namep, u8 *genderp);
void edit_info (u16 idp);
void show_details (u16 idp);
void reserve (void);
void reserve_view (u16 idp);
void cancel_reserve (u16 idp);
#endif