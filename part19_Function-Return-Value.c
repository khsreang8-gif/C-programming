#include <stdio.h>
int add (int a, int b)
{
	return a + b;
}
int main ()
{
	int result;
	result = add (10, 20);
	printf ("%d", result);
	
	return 0;
}
