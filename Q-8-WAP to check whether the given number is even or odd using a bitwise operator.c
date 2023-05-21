
//8.Write a program to check whether the given number is even or odd using a bitwise operator.

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,result;
    printf("Enter a number:");
    scanf("%d",&n);
    result=(n&1);
    if(result==0)
        printf("%d is even",n);
    else
        printf("%d is odd",n);
    getch();
    return 0;



}
