#include<stdio.h>
#define MAX 20

typedef struct Q
{
	int R, F;
	int data[MAX];
}Q;

void create(Q*);
int enqueue(Q*,int);
int dequeue(Q*);
void Print(Q*);

void main()
{
       Q P;  int x, i,n,m;
	create(&P);
	printf("1-PUSH, 2-POP, 3-PRINT, 4-EXIT\n");
	printf("Enter Your Choice\n");
	scanf("%d",&n);
	while(n<4)
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
			default :
			printf("exit");
			break;
		}
		printf("Enter Your Choice\n");
		scanf("%d",&n);
	}//while ends
}





void create(Q *P)
{
	P->R=-1;
	P->F=-1;
}

int enqueue(Q *P, int x)
{
	if(P->R==MAX-1)
	{
		printf("Queue is FULL\n");
		
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
		P->R=P->F=-1;
	}
	else
	{
		P->F=P->F+1;
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
