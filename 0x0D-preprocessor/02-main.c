#include <stdio.h>

#define BLURT printf ("%s", __FILE__)
/*laila22haz*/
/**
 * main - print the name of the file it was compiled from
 *
 * Return: 0
 */
void help_function ()
{
	        BLURT;
}

int main ()
{
	BLURT;
	help_function ();
	return (0);
}
