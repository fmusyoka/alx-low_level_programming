#include <unistd.h>
#include "main.h"
/**
 * print_alphabet_x10- print alphabets
 * 10 times followed by new line
 * Description: No using inbult functions
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}

}
