//5.Write a program to input a three-digit number and display
// the sum of the digits.


#include<stdio.h>
#include<conio.h>
int main()
{
    int n,s=0,x,f,m,l;
    printf("Enter Three-digit numbers:");
    scanf("%d",&n);
    f=n/100;
    x=n%100;
    m=x/10;
    l=x%10;
    printf("First-digit=%d\n Middle-digit=%d\n Last-digit=%d\n",f,m,l);
    s=f+m+l;
    printf("Sum=%d",s);


     getch();
     return 0;
}

