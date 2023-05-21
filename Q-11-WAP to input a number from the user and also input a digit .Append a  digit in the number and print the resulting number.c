//11.Write a program to input a number from the user and also input a digit.
//   Append a digit in the number and print the resulting number.

//(Example -number=234 and digit=9 then the resulting number is 2349)


#include<stdio.h>
#include<conio.h>
int main()
{
   int n,digit;
   printf("Enter a number:\n");
   scanf("%d",&n);
   printf("Enter also a digit:\n");
   scanf("%d",&digit);
    n*=10;
       n+=digit;
       printf("The resulting number=%d",n);
   getch();
   return 0;
}

