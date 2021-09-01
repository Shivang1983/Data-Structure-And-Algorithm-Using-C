#include<stdio.h>
#include<stdlib.h>

void QS(int *a, int p, int r);
int partition(int *a, int p, int r);

void main()
{
	int a[6], i;
	
	for(i=1; i<=6; i++)
	{
		printf("enter the elemnets in array%d\n",i);
		scanf("%d", &a[i]);
	}
	for(i=1; i<=6; i++)
	{
		printf("ARRAY INPUT%d\n",a[i]);

	}

	QS(a, 1, 6);
	for(i=1; i<=6; i++)
	{
		printf("AFTER SORTING%d\n",a[i]);

	}
	
}

void QS(int *a, int p, int r)
{
	int q;
	if(p<r)
	{	q=partition(a, p, r);
		QS(a, p, q-1);
		QS(a, q+1, r);
	}
}
int partition(int *a, int p, int r)
{
	int x=a[r];
	int i,j,s;
	x=a[r];
	i=p-1;
	for(j=p; j<r; j++)
	{
		if(a[j]<=x)
		{
			i=i+1;
			s=a[i];
			a[i]=a[j];
			a[j]=s;
		}
	}
	a[r]=a[i+1];
	a[i+1]=x;
	return i+1;
}
