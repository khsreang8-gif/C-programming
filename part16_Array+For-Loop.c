#include <stdio.h>

int main ()
{
	int number[5];
	int i;
	
	for (i = 0; i < 5; i++)
	{
		number[i] = (i + 1) * 10;
	}
	for (i = 0; i < 5; i++)
	{
		printf ("%d\n", number[i]);
	}
	return 0;
}
