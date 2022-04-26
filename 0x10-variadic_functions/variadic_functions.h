#ifndef VARIADIC_FUNCTIONS_H

#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
  * struct fmt - A format structure.
  * @s: The Format specifier.
  * @f: Pointer to a matching function.
  */
typedef struct fmt{
	char * s;
	void (*f)(va_list argptr);
} fmt;

void print_all(const char * const format, ...);
void print_char(va_list argptr);
void print_int(va_list argptr);
void print_float(va_list argptr);
void print_string(va_list argptr);

#endif /* ifndef VARIADIC_FUNCTIONS_H*/
