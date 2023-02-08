#include<stdio.h>
#include<conio.h>
int main()
{
 int n;
 int a;
 int sum = 0;
 printf("Enter the value of n");
 scanf("%d",&n);
 clrscr();
 while(n != 0)
 {
   a = n%10;
   sum = sum + a;
   n = n/100;
 }
 printf("Sum of given digits is %d\n",sum);
}
