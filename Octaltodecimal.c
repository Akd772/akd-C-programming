#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 int oct;
 int n = 0;
 int sum = 0;
 int a,c,l;
 printf("Enter an octal number\n");
 scanf("%d",&oct);
 l = oct;
 clrscr();
 while(oct != 0)
 {
  a = oct%10;
  c = pow(8,n);
  sum = sum + (a*c);
  n = n + 1;
  oct = oct/10;
 }

 printf("Octal number :%d\n",l);
 printf("Decimal number :%d\n",sum);
}

