//6.Write a program which takes a character as an input and displays its ASCII code.

#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a character:");
    scanf("%c",&x);
    printf("ASCII code of given character %d",x);
    getch();
    return 0;

}
