#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);

/**
 * print_all - Prints anything based on the format string.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0;
    int first = 1;

    va_start(args, format);

    while (format && format[i])
    {
        if (format[i] == 'c')
        {
            if (!first)
                printf(", ");
            print_char(args);
            first = 0;
        }
        else if (format[i] == 'i')
        {
            if (!first)
                printf(", ");
            print_int(args);
            first = 0;
        }
        else if (format[i] == 'f')
        {
            if (!first)
                printf(", ");
            print_float(args);
            first = 0;
        }
        else if (format[i] == 's')
        {
            if (!first)
                printf(", ");
            print_string(args);
            first = 0;
        }

        i++;
    }

    va_end(args);
    printf("\n");
}

/**
 * print_char - Prints a char.
 * @args: The va_list containing the arguments.
 */
void print_char(va_list args)
{
    printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints an int.
 * @args: The va_list containing the arguments.
 */
void print_int(va_list args)
{
    printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float.
 * @args: The va_list containing the arguments.
 */
void print_float(va_list args)
{
    printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string.
 * @args: The va_list containing the arguments.
 */
void print_string(va_list args)
{
    char *str = va_arg(args, char *);

    if (str)
        printf("%s", str);
    else
        printf("(nil)");
}
