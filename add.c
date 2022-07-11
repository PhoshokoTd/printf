#include "main.h"
#include <stdarg.h>

/**
 * check_percent - call function manager
 * @flag: value by reference
 * @aux: character
 * Description: This function print % pear
 * Return: 1 if % is printed
 */
int check_percent(int *flag, char aux)
{
	int tmp_flag;
	int cont = 0;

	tmp_flag = *flag;
	if (tmp_flag == 2 && aux == '%')
	{
		_putchar('%');
		tmp_flag = 0;
		cont = 1;
	}
	return (cont);
}

/**
 * call_function_manager - call function manager
 * @aux: character parameter
 * @arg: va_list arg
 * Description: This function call function manager
 * Return: num of characteres printed
 */

int call_function_manager(char aux, va_list arg)
{
	int cont = 0;

	cont = function_manager(aux, arg);
	return (cont);
}
