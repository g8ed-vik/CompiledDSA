//WAP to determine whether the given matrix is a lower triangular or upper triangular or tri-diagonal matrix.
#include <stdio.h>
int assg9prog6()
{
	int n;
	printf("Enter size of matrix:");
	scanf("%d", &n);
	int flag1 = 0, flag2 = 0, flag3 = 0;
	int mat[n][n];
	int i, j;
	printf("Enter elements:\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			scanf("%d", &mat[i][j]);
	}
	for (i = 1; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (mat[i][j] != 0)
			{
				flag1 = 0;
			}
			else
			{
				flag1 = 1;
			}
		}
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (mat[i][j] != 0)
			{
				flag2 = 0;
			}
			else
			{
				flag2 = 1;
			}
		}
	}
	if (flag1 == 1)
		printf("Upper Triangular Matrix");
	else if (flag2 == 1)
		printf("Lower Triangular Matrix");
	else
		printf("Tri-diagonal matrix");
	return 0;
}