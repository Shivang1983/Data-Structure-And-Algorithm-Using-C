#include<stdio.h>
#include<stdlib.h>
#define MAX 10

void insert(int*);
void insertLOC(int*);
void del(int*);
void reverse(int*);
void display(int*);
void search(int*);

int size;
void main()
{
	int arr[10],x;
	//system("cls");
	
	printf("Enter 1 for Insert\n");
	printf("Enter 2 for DEL\n");
	printf("Enter 3 for search\n");
	printf("Enter 4 for reverse\n");
	printf("Enter 5 for display\n");
	printf("Enter 6 for Location of inserting Element\n");
	printf("Enter 7 for EXIT");
	scanf("%d",&x);
	while(x<7)
	{
		switch(x)
		{	case 1:
				insert(arr);
				break;
			case 2:
				del(arr);
				break;
			case 3:
				search(arr);
				break;
			case 4:
				reverse(arr);
				break;
			case 5:
				display(arr);
				break;
			case 6:
				insertLOC(arr);
				break;
			default:
				printf("DEFAULT");
				break;
			}
			printf("Enter for Re choice");
			scanf("%d",&x);
	}
       //	getch();
}
//insert an element num at given position pos
void insert(int *arr)
{      //shift elements to right
	int i;
	printf("Enter the size of ARRAY");
	scanf("%d", &size);
	printf("Enter the element in Array");
	for(i=0; i<size; i++)
	{
		scanf("%d", &arr[i]);
	}
}
//deletes an elements from the given position pos
void del(int *arr)
{
	//skip to desired position
	int i, pos;
	printf("Enter the deleting element position in ARRARY");
	scanf("%d",&pos);
	for(i=pos; i<size; i++)
	{
		arr[i-1]=arr[i];
	       //arr[i]=0;
	}
	size = size-1;
}
void reverse(int *arr)
{
	int i;
	for(i=0;i<size/2; i++)
	{
		int temp=arr[i];
		arr[i]=arr[size-1-i];
		arr[size-1-i]=temp;
	}
}
//searches array for a given element num
void search(int *arr)
{
// traverse the array

	int i, num;
	printf("Enter the searching element");
	scanf("%d", &num);
	for(i=0;i<size; i++)
	{
		if(arr[i]==num)
		{
		printf("The element %d is present at %dth position.\n\n", num, i+1);
			return;
		}
	}
	if(i==size)
		printf("The element %d is not prsent in the array.\n\n",num);
}
// inset the element from given position
void insertLOC(int *arr)
{
	int pos,b,i;
	printf("Enter the Location");
	scanf("%d", &pos);
	if(pos<size)
	{
		printf("Enter the element");
		scanf("%d", &b);
		size=size+1;
		for(i=size; i>=pos; i--)
		{
			arr[i+1]=arr[i];

		}
		arr[pos]=b;
	}
	else
		printf("Location out of the array size");


}

void display(int *arr)
{
	int i;
	for(i=0;i<size; i++)
		printf("%d\t",arr[i]);
	printf("\n");
}
