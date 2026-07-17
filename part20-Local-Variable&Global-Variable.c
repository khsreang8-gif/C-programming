/*#include <stdio.h>
//Local Variable
void hello ()
{
	int x = 10;
	printf ("%d\n", x);
}

int main ()
{
	hello ();
	
	return 0;
}*/

#include <stdio.h>
/* Global Variable*/
int x = 100;

void hello ()
{
	printf ("%d\n", x);
}

int main ()
{
	hello ();
	printf ("%d\n", x);
	
	return 0;
}
