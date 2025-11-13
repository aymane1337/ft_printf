/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 23:31:11 by ahbich            #+#    #+#             */
/*   Updated: 2025/11/11 15:15:33 by ahbich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

static int	ft_handle_format(va_list args, char spec)
{
	if (spec == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (spec == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (spec == 'p')
		return (ft_print_address(va_arg(args, void *)));
	else if (spec == 'd' || spec == 'i')
		return (ft_print_nbr(va_arg(args, int)));
	else if (spec == 'u')
		return (ft_print_unsigned_nbr(va_arg(args, unsigned int)));
	else if (spec == 'x')
		return (ft_print_hexa_lower_nbr(va_arg(args, unsigned int)));
	else if (spec == 'X')
		return (ft_print_hexa_upper_nbr(va_arg(args, unsigned int)));
	else if (spec == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	else
		return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		total;

	if (!format)
		return (-1);
	va_start(args, format);
	total = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] != '%')
			total += write(1, &format[i], 1);
		else
		{
			i++;
			if (format[i])
				total += ft_handle_format(args, format[i]);
			return (-1);
		}
		i++;
	}
	va_end(args);
	return (total);
}
