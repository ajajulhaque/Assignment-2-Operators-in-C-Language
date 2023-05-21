//9.Write a program to print size of an int, a float ,a char and
//  a double type variable.

#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;

  printf("size of int=%d\n",sizeof(a));
   printf("size of float=%d\n",sizeof(b));
    printf("size of char=%d\n",sizeof(c));
     printf("size of double=%d\n",sizeof(d));
   getch();
   return 0;
}
