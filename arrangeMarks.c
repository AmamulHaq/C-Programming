
#include <stdio.h>
int main()
{
	int marks[24], i, j, n = 5;
	printf("Enter marks:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &marks[i]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (marks[i] < marks[j])
			{ // if true arrange values
				int temp = marks[i];
				marks[i] = marks[j];
				marks[j] = temp;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d\t", marks[i]);
	}
	printf("\nHighest Mark is=%d", marks[0]);
}