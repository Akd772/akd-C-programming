#include <stdio.h>
#include<conio.h>

int main()
{
    int i, j, m, n,d1,d2;
    int matrix[1][1];

    printf("Enter number of rows : ");
    scanf("%d", &m);
    printf("Enter number of columns : ");
    scanf("%d", &n);
    clrscr();

    for (i = 1; i <= m; i++)
    {
	for (j = 1; j <= n; j++)
	{
	    printf("Enter data in [%d][%d]: ", i, j);
	    scanf("%d", &matrix[i][j]);
	}
    }
    for (i = 1; i <= m; i++)
    {
	for (j = 1; j <= n; j++)
	{
	    printf("%d\t", matrix[i][j]);
	}
	printf("\n");
    }

   d1 = matrix[1][1] + matrix[2][2] + matrix[3][3];
   d2 = matrix[3][1] + matrix[2][2] + matrix[1][3];

   printf("Sum of diagonal 1 is: %d\n",d1);
   printf("Sum of diagonal 2 is: %d\n",d2);

}


