#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - entry point
*
* Description: Print numbers 0 to 9 on one line
*
*
* Return: 0
*/
int main(void)
{
char c;

for (c  = 'z'; c >= 'a'; --c)
putchar(c);

putchar('\n');
return (0);
}
