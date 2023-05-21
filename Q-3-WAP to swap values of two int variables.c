//3.Write a program to swap values of two int variables.


#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("Befor swaping number is a=%d or b=%d\n",a,b);
    c=a;
    a=b;
    b=c;

     printf("After swaping numbers is a=%d or b=%d",a,b);
     getch();
     return 0;
}

