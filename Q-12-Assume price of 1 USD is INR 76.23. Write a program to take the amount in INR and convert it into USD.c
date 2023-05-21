//12.Assume price of 1 USD is INR 76.23.Write a program to take the
//   amount in INR and convert it into USD.


#include<stdio.h>
#include<conio.h>
int main()
{
  float  INR;
  printf("Enter price in INR:");
  scanf("%f",&INR);
  float  x=1/76.23*INR;
  printf("INR convert into USD=%f",x);
   getch();
   return 0;
}

