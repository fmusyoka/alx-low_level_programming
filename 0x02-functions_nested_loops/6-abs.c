#include <unistd.h>
#include "main.h"
/**
 * _abs- This function returns absolute value of a number
 * @r: An inpu int
 * Description: No using inbult functions
 * Return: absolute value of r
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
