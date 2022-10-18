#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
/**
 * struct printr - holds information on symbol and corresponding function
 * @symbol: symbol standing to perform an operation
 * @print: pointer to function that peforms the printing
 *
 * Description: struct to link symbols and functions
 */
typedef struct printr
{
	char *symbol;
	int (*print)(va_list args);
} printer;

int _strlen(char *);
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_str(va_list arg);
int print_int(va_list arg);
char *reverse(char *s);
char *itoa(int);
int count_char(int n);
int print_binary(va_list arg);
unsigned int count_binary(unsigned int b);
char *int_to_binary(unsigned int n);
int print_unsigned(unsigned int);

#endif /*MAIN_H*/
