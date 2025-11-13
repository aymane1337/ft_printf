/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_nbr.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:53:39 by ahbich            #+#    #+#             */
/*   Updated: 2025/11/12 13:53:51 by ahbich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned_nbr(unsigned int n)
{
	int		count;
	char	result;

	count = 0;
	if (n > 9)
	{
		count += ft_print_unsigned_nbr(n / 10);
		count += ft_print_unsigned_nbr(n % 10);
	}
	else
	{
		result = n + '0';
		write(1, &result, 1);
		count++;
	}
	return (count);
}
// int main()
// {
//     // printf("%u\n", -40);
//     int n = ft_print_unsigned_nbr(-40);
//     write(1, "\n", 1);
//     printf("%d\n", n);
// }
