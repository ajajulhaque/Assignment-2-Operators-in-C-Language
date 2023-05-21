//4.Write a program to swap values of two int variables without using
//  a third variable.



#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("Befor swaping number is a=%d or b=%d\n",a,b);

    a=a+b;
    b=a-b;
    a=a-b;
     printf("After swaping numbers is a=%d or b=%d",a,b);
     getch();
     return 0;
}

