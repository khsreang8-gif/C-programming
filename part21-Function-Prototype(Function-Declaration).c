/*#include <stdio.h>

// Example 
//F umula Funtion Prototype
// return_type function_name (parameter);
 
void hello (); 

int main ()
{
	hello ();
	
	return 0;
}
void hello ()
{
	printf ("Hello\n");
} */
#include <stdio.h>

int add (int a, int b);

int main ()
{
	int x;
	x = add(10,20);
	printf ("%d", x);
	/* Or- printf ("%d", add(10,20); */
	
	return 0;
}
int add (int a, int b)
{
	return a + b;
}
