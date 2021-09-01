#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}node;

node *create(int);
node *addbeg(node*);
node *insertmid(node*);
node *insertend(node*);
void Print(node*);

void main()
{
node *start; int n,x;

start=NULL;
printf("Enter the no. of node\n");
scanf("%d",&n);
start=create(n);
Print(start);
printf("Enter your Choice\n");
scanf("%d", &x);
while(x<5)
{	switch(x)
	{
		case 1:
		       start=addbeg(start);
		break;
		case 2:
			start=insertmid(start);
		break;
		case 3:
			start=insertend(start);
		break;
		case 4:
		Print(start);
		break;
		default:
		printf("enter 5 for quit");
		break;
	}
		printf("Enter for rechoice\n");
		scanf("%d",&x);

}

}

node *create(int n)
{
	node *head, *p, *temp;
	int i;
	head=(node*)malloc(sizeof(node));
	head->next=NULL;
	printf("Enter the value");
	scanf("%d", &head->data);
	p=head;
	for(i=1; i<n; i++)
	{
		temp=(node*)malloc(sizeof(node));
		p->next=temp;
		p=p->next;
		printf("enter the first onwords values\n");
		scanf("%d", &p->data);
		p->next=NULL;
	}
	return(head);
}

void Print(node *p)
{
	while(p!=NULL)
	{
		printf("->%d", p->data);
		printf("\n");
		p=p->next;
	}
}
node *addbeg(node *p)
{
	node *tmp, *head; int item;
	head=p;
	tmp=(node*)malloc(sizeof(node));
	printf("Enter the FIRST value\n");
	scanf("%d",&item);
	tmp->data=item;
	tmp->next=head;
	head=tmp;
	return(head);
}
node *insertend(node *head)
{
	node *p, *q; int item;
	p=(node*)malloc(sizeof(node));
	printf("Enter the LAST value");
	scanf("%d",&item);
	p->data=item;
	p->next=NULL;
	if(head==NULL)
		return(p);
	q=head;
	while(q->next!=NULL)
	{
		q=q->next;
	}
	q->next=p;
	return(head);
}
node *insertmid(node *head)
{
	node *p, *q; int item, i, loc;
	p=(node*)malloc(sizeof(node));
	printf("Enter the LOCATION of item\n");
	scanf("%d", &loc);
	printf("Enter the item value\n");
	scanf("%d", &item);
	p->data=item;
	p->next=NULL;
	q=head;
	for(i=0; i<loc-1; i++)
	{
		q=q->next;

		if(q==NULL)
		{
			printf("there are less then element\n");
			return(head);
		}
	}
	p->next=q->next;
	q->next=p;
	return(head);
}
