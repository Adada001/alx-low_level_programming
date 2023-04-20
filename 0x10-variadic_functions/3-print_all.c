#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints a variable num of arguments according to a format string.
 * @format: A string of format specifiers for the arguments.
 * @...: A variable number of arguments to print.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *str;
	char format_specifiers[] = "cifs";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (format_specifiers[j])
		{
			if (format[i] == format_specifiers[j])
			{
				switch (format[i])
				{
					case 'c':
						printf("%c", va_arg(args, int));
						break;
					case 'i':
						printf("%d", va_arg(args, int));
						break;
					case 'f':
						printf("%f", va_arg(args, double));
						break;
					case 's':
						str = va_arg(args, char *);
						if (str == NULL)
							printf("(nil)");
						else
							printf("%s", str);
						break;
				}

				if (format[i + 1] && j < 3)
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
