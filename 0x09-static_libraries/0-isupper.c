#include "main.h"
/**
 ** _isupper - return 1 when is a uppercase
 ** @c: integer
 ** Return: 1 if is uppercase and 0 if is lowcase
 **/
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
