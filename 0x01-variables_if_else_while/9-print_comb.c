#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int number;
for (number = 48; number <= 57; number++)
{
if (number == 57)
{
break;
}
putchar(number);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
