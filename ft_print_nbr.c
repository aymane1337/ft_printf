/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:30:17 by ahbich            #+#    #+#             */
/*   Updated: 2025/11/12 13:30:19 by ahbich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_print_pos_nbr(int n)
{
	int		count;
	char	result;

	count = 0;
	if (n > 9)
		count += ft_print_pos_nbr(n / 10);
	result = n % 10 + '0';
	count += ft_print_char(result);
	return (count);
}

int	ft_print_nbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		count += ft_print_char('-');
		n = -n;
	}
	count += ft_print_pos_nbr(n);
	return (count);
}

	// if (n > 9)
	// {
	// 	count += ft_print_nbr((n / 10));
	// 	count += ft_print_nbr((n % 10));
	// }
	// else
	// {
	// 	result = n + '0';
	// 	write(1, &result, 1);
	// 	count++;
	// }
