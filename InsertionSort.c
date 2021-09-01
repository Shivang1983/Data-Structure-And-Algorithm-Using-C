#include<stdio.h>
#include<stdlib.h>

int main()
{
int i, j, s, key, a[20];

printf("Enter total elements: "); 
scanf("%d", &s);

printf("Enter %d elements: ",s);
 for(i=0; i<s; i++)
  scanf("%d", &a[i]);

for(j=1;j<s; j++){

key=a[j];

while((key <a[i]) && (i=0)) {

a[i+1]=a[i]; i=i-1;

}

a[i+1]=key;



}

printf("After sorting: "); 
for(i=0;i<s; i++) 
printf("%d ", a[i]);
return 0;
}