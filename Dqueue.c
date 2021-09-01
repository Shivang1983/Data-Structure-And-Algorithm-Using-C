#include<stdio.h>
#include <stdlib.h>
#define MAX 20

typedef struct Q
{
	int R, F;
	int data[MAX];
}Q;

void create(Q*);
void enqueue(Q*,int);
int dequeue(Q*);
int dqdelete_rear(Q*);
void Print(Q*);
void main()
{
       Q P;
	int x, i, n ,m, a;

	create(&P);
	printf("1-PUSH, 2-POP, 3-PRINT, 4-dqdelete_rear, 5-EXIT\n");
	printf("Enter Your Choice\n");
	scanf("%d",&n);
	while(n<5)
	{
		switch(n)
		{
			case 1:
				printf("Enter the value\n");
				scanf("%d", &x);
				enqueue(&P, x);
				break;
			case 2:
			      m=dequeue(&P);
			      printf("Deleted element%d\n",m);
				break;
			case 3:
				Print(&P);
				break;

			case 4:
				a=dqdelete_rear(&P);
			       printf("Deleted element%d\n",a);
				break;

			default :
			printf("exit");
			break;
		}
		printf("\nEnter Your Choice\n");
		scanf("%d",&n);
	}//while ends
}

void create(Q *P)
{
	P->R=-1;
	P->F=-1;
}

void enqueue(Q *P, int x)
{
	if(P->R==MAX-1)
	{
		printf("Queue is FULL\n");
		exit(0);
	}
	if(P->R==-1)
	{
		P->R=P->F=0;
		P->data[P->R]=x;
	}
	else
		P->R=P->R+1;
		P->data[P->R]=x;
}

int dequeue(Q *P)
{
	int x;
	x=P->data[P->F];
	if(P->F==-1)
	{
		printf("UNDERFLOW\n");
	       //	exit(0);
	}
	if(P->R==P->F)
	{
		P->R=P->R=-1;
	}
	else
	{
		P->F=P->F+1;
	}
		return(x);
}


int dqdelete_rear( Q *P)
{
	int x;
	if(P->R==-1)
	{
		printf("queue is empty\n");
		//exit(0);
	}
	else
	{
		x = P->data[P->R];
		P->R=P->R-1;
	}
	return(x);
}


void Print(Q *P)
{
	int i;
	if(P->F==-1)
	{
		printf("Queue is EMPTY\n");
	}
	for(i=P->F; i<=P->R; i++)
	{
		printf("%d\n", P->data[i]);
	}
}
