#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1 : the first argument
 * @s2 : the second argument
 * @n : the third argument
 *
 * Return: return pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *result;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	if (n > len2)
		n = len2;
	result = malloc(sizeof(char) * (len1 + n + 1));
	if (!result)
		return (NULL);
	strcpy(result, s1);
	strncat(result, s2, n);
	return (result);
}
