include "main.h"
/**
 * _isupper - check for uppercase
 * Return: 1 if character is upprcase 0 if it is not
 */
int _isupper(int c);
{
	if (c>= 'A' && c<= 'z')
		return(1);
	else
		return(0);
}
