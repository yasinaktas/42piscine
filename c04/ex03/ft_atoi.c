/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:53:50 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/17 15:10:37 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write (1, &ch, 1);
}

int	ft_is_white_space(char ch)
{
	int		result;

	result = 0;
	if (ch == ' ' || ch == '\t' || ch == '\n')
		result = 1;
	if (ch == '\v' || ch == '\f' || ch == '\r')
		result = 1;
	return (result);
}

int	ft_skip_white_spaces(char *str)
{
	int		index;
	char	ch;

	index = 0;
	ch = str[index];
	while (ft_is_white_space(ch) == 1)
	{
		index++;
		ch = str[index];
	}
	return (index);
}

int	ft_atoi(char *str)
{
	int		index;
	int		multiplier;
	int		number;

	index = 0;
	multiplier = 1;
	number = 0;
	index = ft_skip_white_spaces(str);
	while (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			multiplier = -multiplier;
		index++;
	}
	while (str[index] >= 48 && str[index] <= 57)
	{
		number = number * 10 + (str[index] - 48);
		index++;
	}
	return (number * multiplier);
}
