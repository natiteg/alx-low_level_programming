#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - entry point
*
* Description: Prints a number and it's last digit along with whether its
*  last digit is 0, greater than 5, or less than 6 and not 0.
* Return: 0.
*/
int main(void)
{
int c;

for (c = 0; c < 26; ++c)
putchar('a' + c);

putchar('\n');

return (0);
}
