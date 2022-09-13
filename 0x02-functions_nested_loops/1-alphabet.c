/**
 * main -  prints the alphabet, in lowercase, followed by a new line
 * Return: 0 on Success
 */

#include "main.h"

/* function to print lower case alphabet*/
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
