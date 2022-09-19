#include <stdio.h>

/**
 * main - storing the address of variable into a pointer
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;
/**
 * char c;
 * int *p;
 * p = &c;
 * this code is incorrect.
 * a pointer is supposed to point to the variable of the type
 * it is supposed to point to. 
 */	
	printf("Address of 'n': %p\n", &n);
	printf("Value of 'p': %p\n", p);
	return (0);
}
