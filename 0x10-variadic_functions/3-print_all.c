#include "variadic_functions.h"
ii#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...);

/**
 * print_c - Prints a char argument
 * @args: Argument list
 */
void print_c(va_list args)
{
    char c = va_arg(args, int);

    printf("%c", c);
}

/**
 * print_i - Prints an integer argument
 * @args: Argument list
 */
void print_i(va_list args)
{
    int num = va_arg(args, int);

    printf("%d", num);
}

/**
 * print_f - Prints a float argument
 * @args: Argument list
 */
void print_f(va_list args)
{
    float f = va_arg(args, double);

    printf("%f", f);
}

/**
 * print_s - Prints a string argument
 * @args: Argument list
 */
void print_s(va_list args)
{
    char *str = va_arg(args, char *);

    if (str == NULL)
        printf("(nil)");
    else
        printf("%s", str);
}

/**
 * print_all - Prints arguments based on format string
 * @format: Format string containing types of arguments
 * @...: Variable number of arguments to print
 */
void print_all(const char * const format, ...)
{
    va_list args;
    char *separator = "";
    int i = 0, j;

    /* Array of structs to map format characters to print functions */
    format_map mapping[] = {
        {'c', print_c},
        {'i', print_i},
        {'f', print_f},
        {'s', print_s},
        {'\0', NULL}
    };

    va_start(args, format);

    while (format && format[i])
    {
        j = 0;

        while (mapping[j].format)
        {
            if (format[i] == mapping[j].format)
            {
                printf("%s", separator);
                mapping[j].func(args);
                separator = ", ";
                break;
            }
            j++;
        }
        i++;
    }

    printf("\n");
    va_end(args);
}

int main(void)
{
    print_all("cifs", 'H', 42, 3.14, "Hello");
    return (0);
}

