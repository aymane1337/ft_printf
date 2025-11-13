/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 09:15:43 by ahbich            #+#    #+#             */
/*   Updated: 2025/11/12 17:18:58 by ahbich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>

int	ft_print_str(char *s);
int	ft_printf(const char *format, ...);
int	ft_print_nbr(int n);
int	ft_print_char(char c);
int	ft_print_address(void *p);
int	ft_print_hexa_upper_nbr(unsigned int n);
int	ft_print_hexa_lower_nbr(unsigned int n);
int	ft_print_unsigned_nbr(unsigned int n);
#endif
