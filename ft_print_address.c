/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 20:51:56 by ahbich            #+#    #+#             */
/*   Updated: 2025/11/11 20:52:03 by ahbich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	tohex(unsigned long num)
{
	static char	*hex = "0123456789abcdef";
	int			count;

	count = 0;
	if (num >= 16)
	{
		count += tohex(num / 16);
	}
	count++;
	write(1, &hex[num % 16], 1);
	return (count);
}

int	ft_print_address(void *p)
{
	int				count;
	unsigned long	num;

	if (!p)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	count = 0;
	num = (unsigned long)p;
	write(1, "0x", 2);
	count += 2;
	count += tohex(num);
	return (count);
}
