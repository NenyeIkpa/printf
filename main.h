#ifndef MAIN_H_
#define MAIN_H_

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct prints - user defined type which
 * contains a char pointer and a function pointer.
 *
 * @symbol: a character string
 * @type: a function pointer
 */

typedef struct prints
{
	char *symbol;
	int (*type)(va_list ap);
} print_op;

int _printf(const char *format, ...);
int _putchar(char c);
int _putc(va_list ap);
int _puts(va_list ap);

#endif
