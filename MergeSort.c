#include<stdio.h>
#include<stdlib.h>
#define MAX 50

void partition(int arr[],int low,int high);
void mergeSort(int arr[],int low,int mid,int high);

void main()
{
    int a[MAX],i,n;
   

    printf("Enter the total number of elements: ");
    scanf("%d",&n);

    printf("Enter the elements which to be sort: ");
    for(i=0;i<n;i++)
   {
	 scanf("%d",&a[i]);
    }
    partition(a,0,n-1);
    printf("After merge sorting elements are: ");
    for(i=0;i<n;i++){   printf("%d ",a[i]);   }
    
  }

void partition (int a[], int low, int high)
{
int mid;
if( low<high)
{
mid = (low+high)/2;
partition(a, low, mid);
partition(a, mid+1, high);
mergeSort(a, low, mid, high);
}
}

void mergeSort(int a[], int low, int mid, int high)
{
	int temp[MAX];
	int i = low;
	int j = mid+1;
	int k = low;
	while((i<=mid)&&(j<=high))
	{	if(a[i]<=a[j])    {temp[k++] = a[i++]; }
		else     {temp[k++] = a[j++];}
	}
	while(i<=mid)   { temp[k++] = a[i++];}
	while(j<=high)   { temp[k++] = a[j++];}//if true
	for(i=low; i<=high; i++) { a[i] = temp[i]; }
} 
