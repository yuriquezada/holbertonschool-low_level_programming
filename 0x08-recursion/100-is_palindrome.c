#include "holberton.h"

/**
 * _strlen_recursion - Return the length of a string
 *
 * @s: string
 *
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * find_letter - Return if a string is a palindrome
 *
 * @s: string
 * @len: string length
 *
 * Return: 1 or 0
 */
int find_letter(char *s, int len)
{
	if (len == 1 || len == 0)
		return (1);
	if (s[0] != s[len - 1])
		return (0);
	return (find_letter(s + 1, len - 2));
}

/**
 * is_palindrome - Return if a string is a palindrome
 *
 * @s: string
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	return (find_letter(s, len));
}
