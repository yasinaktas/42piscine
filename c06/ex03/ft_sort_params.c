/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 10:16:58 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/18 10:50:50 by yaaktas          ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	ch1;
	unsigned char	ch2;
	int				index;

	index = 0;
	while (s1[index])
	{
		ch1 = s1[index];
		ch2 = s2[index];
		if (ch1 != ch2)
			return (ch1 - ch2);
		index++;
	}
	return (s1[index] - s2[index]);
}

void	ft_print_args(int arg_count, char *arg_values[])
{
	int		index;

	index = 1;
	while (index < arg_count)
	{
		ft_putstr (arg_values[index]);
		index++;
	}
}

int	main(int arg_count, char *arg_values[])
{
	int		index1;
	int		index2;
	char	*temp;

	index1 = 0;
	temp = NULL;
	while (index1 < arg_count - 2)
	{
		index2 = 1;
		while (index2 < arg_count - index1 - 1)
		{
			if (ft_strcmp(arg_values[index2], arg_values[index2 + 1]) > 0)
			{
				temp = arg_values[index2];
				arg_values[index2] = arg_values[index2 + 1];
				arg_values[index2 + 1] = temp;
			}
			index2++;
		}
		index1++;
	}
	ft_print_args(arg_count, arg_values);
	return (0);
}
