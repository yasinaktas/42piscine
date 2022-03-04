/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:42:12 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/18 10:50:29 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write (1, &ch, 1);
}

void	ft_putstr(char *str)
{
	int		index;

	index = 0;
	while (str[index])
	{
		ft_putchar (str[index]);
		index++;
	}
	ft_putchar('\n');
}

int	main(int arg_count, char *arg_values[])
{
	int		index;

	index = arg_count - 1;
	while (index > 0)
	{
		ft_putstr (arg_values[index]);
		index--;
	}
	return (0);
}
