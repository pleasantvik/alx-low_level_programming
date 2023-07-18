#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @alp: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int alp)
{
	return ((alp >= 'a' && alp <= 'z') || (alp >= 'A' && alp <= 'Z'));
}

