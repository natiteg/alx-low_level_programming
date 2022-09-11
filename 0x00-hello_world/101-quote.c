#include <stdio.h>
#include <unistd.h>
/**
 * main - using write outputs a string to stderr
 * Return: (1) successful exit code for project spec
 */
int main(void)
{
char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

write(1, quo, 59);
return (1);
}
