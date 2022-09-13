#include "main.h"
/**
* print_alphabet_x10 - Entry point
* Description:this function is used in a program
* that 10 times the alphabet, in lowercase.
* Return: 0
*/
void print_alphabet_x10(void)
{
	/* local variables declarations */
	int alphabet;
	int i = 0;

	while (i <= 9)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
		i++;
	}

}
