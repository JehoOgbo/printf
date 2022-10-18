#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * itoocta - convert a number to char array
 * @n: number to be converted
 *
 * Return: character array formed
 */
char *itoocta(unsigned int n)
{
  unsigned int i = 0, a;
  char *s, *c;

  a = count_oct(n);
  s = malloc(sizeof(char) * (a + 1));
  if (s == NULL)
    {
      free(s);
      return (NULL);
    }
  do {
    s[i++] = n % 8 + '0';
  } while ((n /= 10) > 0);
  s[i] = '\0';
  c = reverse(s);
  return (c);
}

/**
 * print_oct - converts an int to octal then prints it
 * @arg: integer argument to be converted
 *
 * Return: number of characters printed
 */
int print_oct(va_list arg)
{
  unsigned int a, len;
  char *c;

  a = va_arg(arg, unsigned int);
  c = itoocta(a);
  len = _strlen(c);
  write(1, c, len);
  free(c);
  return (len);
}
