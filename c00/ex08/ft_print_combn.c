/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 10:17:25 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/11 11:39:42 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char ch)
{
	write (1, &ch, 1);
}

void	ft_print_output(int n, int *output, int is_first)
{
	int		i;

	if (is_first == 0)
	{
		ft_putchar (',');
		ft_putchar (' ');
	}
	i = 0;
	while (i < n)
	{
		ft_putchar (output[i] + '0');
		i++;
	}
}

void	ft_update_output(int n, int *output)
{
	int		index;
	int		max;

	index = n - 1;
	max = 9;
	while (output[index] == max)
	{
		index = index - 1;
		max = max - 1;
	}
	output[index] += 1;
	while (index < n)
	{
		output[index + 1] = output[index] + 1;
		index += 1;
	}
}

void	ft_print_combn(int n)
{
	int		output[10];
	int		i;

	i = 0;
	while (i < n)
	{
		output[i] = i;
		i++;
	}
	ft_print_output (n, output, 1);
	while (output[n - 1] != 9 || output[0] != 10 - n)
	{
		if (output[n - 1] == 9)
		{
			ft_update_output (n, output);
		}
		else
		{
			output[n - 1] += 1;
		}
		ft_print_output(n, output, 0);
	}
}
