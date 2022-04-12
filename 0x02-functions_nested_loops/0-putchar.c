#include <main.h>

/**
 * main - main code
 * Description: This code prints putchar
 * \\s: the s[] member is used to define the character
 * of the function we want to print using putchar
 * Result: Always 0 if succesful
 */
void print_putchar(char *s);
int main(void)
{
char s[] = "_putchar";
print_putchar(s);
putchar('\n');

return (0);
}

void print_putchar(char *s);
{
int i = 0;
while (s[i] != '\n' && s[i] != '\0')
{
putchar(s[i]);
i++;
}
}
