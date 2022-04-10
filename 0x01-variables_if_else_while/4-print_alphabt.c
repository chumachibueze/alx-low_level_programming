#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
char alphabet_lower;
for (alphabet_lower = 'a'; alphabet_lower <= 'z'; alphabet_lower++)
{
if (alphabet_lower == 'q' || alphabet_lower == 'e')
{
continue;
}
else
{
putchar(alphabet_lower);
}
}
putchar('\n');
return (0);
}
