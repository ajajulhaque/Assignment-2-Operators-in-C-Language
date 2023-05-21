//1.Write a program to print unit digit of a given number.

#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
     int x=n%10;
     printf("Unit digit of given number=%d\n",x);
     getch();
     return 0;
}
