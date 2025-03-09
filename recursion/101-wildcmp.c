#include "main.h"

/**
 * wildcmp - compares two strings using wildcards
 * @s1: first string
 * @s2: second strings
 *
 * Return: 1 if s1 and s2 are considered identical ; 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	return (compare_strings(s1, s2, 0, 0));
}

/**
 * compare_strings - compares two strings using wildcards
 * @s1: first string
 * @s2: second string
 * @i: index for s1
 * @j: index for s2
 *
 * Return: 1 if s1 and s2 are considered identical ; 0 otherwise
 */
int compare_strings(char *s1, char *s2, int i, int j)
{
	/* Checking if the end of both strings is reached */
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);

	if (s2[j] == '*')
		return (compare_strings(s1, s2, i, j + 1));

	if (s1[i] == s2[j])
	{
		/* Checking if end of s1 matches end of s2 */
		if (compare_strings(s1, s2, i + 1, j + 1) == 1)
			return (1);
	}

	/* Ignoring unmatching character when wildcard used */
	if (s2[j - 1] == '*' && s1[i] != '\0')
		return (compare_strings(s1, s2, i + 1, j));
	else
		return (0);
}

