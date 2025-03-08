#include "main.h"
#include <string.h>

/**
 * is_palindrome - determines if s is a palindrome or not
 * @s: string to analyze
 *
 * Return: 1 if string s is a palindrome ; 0 otherwise
 */
int is_palindrome(char *s)
{
	int start = 0;
	int end = length(s, 0) - 1;

	if (end > 0)
		return (compare(s, start, end));
	else
		return (1);
}

/**
 * compare - compares pairs of characters in a string
 * @s: string to analyze
 * @start: first index
 * @end: lest index
 *
 * Return: 1 if string s is a palindrome ; 0 otherwise
 */
int compare(char *s, int start, int end)
{
	if (start == end)
		return (1);
	else if (s[start] == s[end])
	{
		if (start == (end + 1))
			return (1);
		else
			return (compare(s, start + 1, end - 1));
	}
	else
		return (0);
}

/**
 * length - computes the length of string s
 * @s: string to analyze
 * @count: index
 *
 * Return: length of the string s
 */
int length(char *s, int count)
{
	if (s[count] == '\0')
		return (count);
	else
		return (length(s, count + 1));
}

