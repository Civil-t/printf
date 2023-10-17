#include "main.h"

/**
 *print__integers -prints integer
 *@args: aruguemnt to print
 *Return num of chars printd
 */

int print_integers(va_list args)
{
    int n = va_arg(args, int);
    int numb, last = n % 10, digit, exp = 1;
    int i = 1;

    n = n / 10;
    numb = n;

    if (last < 0)
    {
        putchar('-');
        numb = -numb;
        n = -n;
        last = -last;
        i++;
        if (numb > 0)
        {
            while (numb / 10 != 0)
            {
                exp = exp * 10;
                numb = numb / 10;
            }
            numb = n;
            while (exp > 0)
            {
                digit = numb / exp;
                putchar(digit + '0');
                numb = numb - (digit * exp);
                exp = exp / 10;
                i++;
            }
        }
        putchar(last + '0');
        return (i);
    }
}

#include "main.h"

/**
 *print_decimal -prints decimal
 *@args: aruguemnt to print
 *Return numb of chars printd
 */

int print_deimal(va_list args)
{
    int n = va_arg(args, int);
    int numb, last = n % 10, digit, exp = 1;
    int i = 1;

    n = n / 10;
    numb = n;

    if (last < 0)
    {
        putchar('-');
        numb = -numb;
        n = -n;
        last = -last;
        i++;
        if (numb > 0)
        {
            while (numb / 10 != 0)
            {
                exp = exp * 10;
                numb = numb / 10;
            }
            numb = n;
            while (exp > 0)
            {
                digit = numb / exp;
                putchar(digit + '0');
                numb = numb - (digit * exp);
                exp = exp / 10;
                i++;
            }
        }
        putchar(last + '0');
        return (i);
    }
}
