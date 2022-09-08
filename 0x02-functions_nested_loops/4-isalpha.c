#include <unistd.h>
#include "main.h"
/**
 * _isalpha- checks for lowercase character
 * @c: An input character
 * Description: No using inbult functions
 * Return: 1 if lowercase. 0 if not
 */
int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;


	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
