/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>



int main()

{

 int n;   

 printf("Enter the number to check for prime number: ");

 scanf("%d",&n);

 if(n==0)

 printf("number is 0!");

 if(n==2||n==3)

 printf("It is a prime number");

int t;

 if(n>3)

 {

   for(int x=2;x<n/2;x++)

   {

     if(n%x==0)

     {

    t=0;

    break;

     }

     else 

     {

     

     t=1;

       

     }

     

   }

   if(t==1)

  printf("\n it is a prime number");

  else if(t==0)

  printf("\n not a prime number");

 

 }

return 0;  