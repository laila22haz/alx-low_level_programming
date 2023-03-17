# include<stdio.h>
/**
 * main - A program that print the lines with printf function
 * Return: 0 (Success)
*/
int main(void)
{
char cha;
int i;
float f;
long long int dl;
long int d;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(cha));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(dl));
printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));
return (0);
}
