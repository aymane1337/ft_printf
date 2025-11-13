/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_lower_nbr.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:31:49 by ahbich            #+#    #+#             */
/*   Updated: 2025/11/12 13:31:50 by ahbich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa_lower_nbr(unsigned int n)
{
	static char	*hex = "0123456789abcdef";
	int			count;

	count = 0;
	if (n >= 16)
		count += ft_print_hexa_lower_nbr(n / 16);
	write(1, &hex[n % 16], 1);
	count++;
	return (count);
}

// int main()
// {
// 	ft_print_hexa_lower_nbr(-1);
// }