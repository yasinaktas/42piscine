/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_with_non_printable.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:36:26 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/13 15:03:30 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write (1, &ch, 1);
}

void	ft_write_hexadecimal_code(int decimal_code)
{
	char	*ch_set;

	ch_set = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(ch_set[decimal_code / 16]);
	ft_putchar(ch_set[decimal_code % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int		index;
	char	ch;

	index = 0;
	while (str[index])
	{
		ch = str[index];
		if (!(ch >= 32 && ch <= 126))
			ft_write_hexadecimal_code(ch);
		else
			ft_putchar(ch);
		index++;
	}
}
