#include <stdio.h>

/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)  
{
	printf("Value of 'cc': %p\n", cc);
  printf("Address of 'cc': %p\n", &cc);

   *cc = 'o';
   ccc = 'l'; 
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
   char c;
   char *p;

   p = &c;
   c = 'H';
   printf("Value of 'c' before call: %d\n", c);
   printf("Address of 'c': %p\n", &c);
   printf("Value of 'p': %p\n", p);
   printf("Address of 'p': %p\n", &p);
   modif_my_char_var(p, c);
   printf("value of 'c' after the call: %d\n", c);
   return (0);
}
