//#include<stdio.h>
int assg1prog6()
{
	int a[20], min, max;
	int n, i, temp1 = 0, temp2 = 0, pos1 = 0, pos2 = 0;
	printf("Enter the num of elements : ");
	scanf("%d", &n);
	printf("Enter the elements :\n");
	for (i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
		if (i == 0)
		{
			min = max = a[i];
		}
		if (a[i]<min)
			min = a[i];
		else if (a[i]>max)
			max = a[i];
	}
	printf("\nBiggest element is %d and Smallest elementis %d\n ", max, min);

	for (i = 0; i<n; i++)
	{
		if (min == a[i])
		{
			pos1 = i;
			break;
		}
	}
	for (i = 0; i<n; i++)
	{
		if (max == a[i])
		{
			pos2 = i;
			break;
		}
	}
	temp1 = a[pos1];
	temp2 = a[pos2];
	a[pos1] = temp2;
	a[pos2] = temp1;
	printf("\nArray after interchange of smallest and largest : \n");
	for (i = 0; i<n; i++)
	{
		  printf("\nElement : %d", a[i]);
	}
	return 0;
}