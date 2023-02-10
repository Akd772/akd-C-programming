#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 int bin,a,c,b;
 int sum = 0;
 int n = 0;
 printf("Enter a binary number : ");
 scanf("%d",&bin);
 b = bin;
 clrscr();
 while (bin != 0)
 {
  a = bin%10;
  c = pow(2,n);
  sum = sum + (a*c);
  n = n + 1;
  bin = bin/10;
 }
 printf("Binary number : %d\n",b);
 printf("Decimal number : %d\n",sum);
}
