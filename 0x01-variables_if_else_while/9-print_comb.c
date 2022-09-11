#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - entry point
*
* Description: all possible combinations of single digit numbers
*
* Return: 0
*/
int main(void)
{
int = 0;

for (i = 0; i < 10; ++i)
{
putchar('0' + i);

if (i != 9)
{
putchar(',');
putchar('');
}
}

putchar('\n');
return (0);
