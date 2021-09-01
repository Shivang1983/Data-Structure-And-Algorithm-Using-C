/*Tower Of Hanoi*/
#include<stdio.h>
#include<stdlib.h>
void TOH(int n,char x,char y,char z) {
   if(n>0) {
      TOH(n-1,x,z,y);
      printf("\n%c to %c",x,y);
      TOH(n-1,z,y,x);
   }
}
void main() {
   int n=3;
   
   TOH(n,'A','C','B');

}
