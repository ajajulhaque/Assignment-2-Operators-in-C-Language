
//7.Write a program to find the position of first 1 in LSB.

#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    int result=0;
    int count=0;
    while(x!=0)
    {
     result=(x&1);
     count++;
     if(result==1)
     {
         printf("%d",count);
         break;
     }
     x=x>>1;

    }

     getch();
     return 0;
}
