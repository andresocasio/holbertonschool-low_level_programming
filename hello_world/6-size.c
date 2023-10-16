#include <stdio.h>
/**
 * main - start de program
 * variables: c,i,li,lli and f are variables
 * printf: print a message followed by a expression
 * Return: return 0 when finish
 */
int main(void)
{
char c;
int 1;
long int li;
long long int lli;
float f;

printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
