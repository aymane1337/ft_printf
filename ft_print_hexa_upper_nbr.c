/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_upper_nbr.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:45:35 by ahbich            #+#    #+#             */
/*   Updated: 2025/11/12 13:45:36 by ahbich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa_upper_nbr(unsigned int n)
{
	int			count;
	static char	*hex = "0123456789ABCDEF";

	count = 0;
	if (n >= 16)
		count += ft_print_hexa_upper_nbr(n / 16);
	write(1, &hex[n % 16], 1);
	count++;
	return (count);
}
