#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * uitoa - convert n to character
 * @n: unsigned int to be converted
 *
 * Return: character array formed
 */
char *uitoa(unsigned int n)
{
  int i = 0, a;
  char *s, *c;

  a = count_char(n);
  s = malloc(sizeof(char) * (a + 1));
  if (s == NULL)
    {
      free(s);
      return (NULL);
    }
  do {
    s[i++] = n % 10 + '0';
  } while ((n /= 10) > 0);
  s[i] = '\0';
  c = reverse(s);
  return (c);
}

/**
 * print_unsigned - print an unsigned int
 * @arg: integer argument to be printed
 *
 * Return: number of chars printed
 */
int print_unsigned(va_list arg)
{
  unsigned int a, len;
  char *c;

  a = va_arg(arg, unsigned int);
  c = itoa(a);
  len = _strlen(c);
  free(c);
  return (len);
}
