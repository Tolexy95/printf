#include "main.h"

/**
<<<<<<< HEAD
 * _printf - prints and input into the standard output 
 * @format: the format string
 *
 * Return: number of bytes printed
=======
 * _printf - printf
 * @format: const char pointer
 * Description: this functions implement some functions of printf
 * Return: num of characteres printed
>>>>>>> 579afa28c7cff3cbeb683ea4c5e014dc40a3142c
 */
int _printf(const char *format, ...)
{
	int sum = 0;
	va_list ap;
	char *p, *start;
	params_t params = PARAMS_INIT;

<<<<<<< HEAD
	va_start(ap, format);
=======
	cont = loop_format(arg, string);

	va_end(arg);
	return (cont);
}
/**
 * loop_format - loop format
 * @arg: va_list arg
 * @string: pointer from format
 * Description: This function make loop tp string pointer
 * Return: num of characteres printed
 */
int loop_format(va_list arg, const char *string)
{
	int i = 0, flag = 0, cont_fm = 0, cont = 0, check_per = 0;
>>>>>>> 579afa28c7cff3cbeb683ea4c5e014dc40a3142c

	if (!format || (format[0] == '%' && !format[1]))/* checking for NULL character*/
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = (char *)format; *p; p++)
	{
		init_params(&params, ap);
		if (*p != '%')/*checking for the % specifier*/
		{
			sum += _putchar(*p);
			continue;
		}
<<<<<<< HEAD
		start = p;
		p++;
		while (get_flag(p, &params)) /* while char at p is flag char */
		{
			p++; /* next char */
		}
		p = get_width(p, &params, ap);
		p = get_precision(p, &params, ap);
		if (get_modifier(p, &params))
			p++;
		if (!get_specifier(p))
			sum += print_from_to(start, p,
				params.l_modifier || params.h_modifier ? p - 1 : 0);
		else
			sum += get_print_func(p, ap, &params);
	}
	_putchar(BUF_FLUSH);
	va_end(ap);
	return (sum);
=======
		check_per = check_percent(&flag, aux);
		cont += check_per;
		if (check_per == 0 && aux != '\0' && aux != '%')
			cont += _putchar(aux), i++;
		check_per = 0;
	}
	return (cont);
}
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
>>>>>>> 579afa28c7cff3cbeb683ea4c5e014dc40a3142c
}
