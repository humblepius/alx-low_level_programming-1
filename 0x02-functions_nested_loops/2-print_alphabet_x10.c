/**
 * main - print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 * Return: 0 on Success
 */
#include "main.h"

/* function to print lower case alphabet in 10 lines*/
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
