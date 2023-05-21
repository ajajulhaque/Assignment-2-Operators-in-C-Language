//10.Write a program to make the last digit of a number stored in a
//variable as zero.

//(EXAMPLE-if x=2345 then make it x=2340)


#include<stdio.h>
#include<conio.h>
int main()
 {
     int n;
     printf("Enter three or four digit number:");
     scanf("%d",&n);
     int x=n/10;
       x*=10;
       printf("Last digit of a number stored in zero=%d",x);

   getch();
   return 0;
}

