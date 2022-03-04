/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 10:24:03 by yaaktas           #+#    #+#             */
/*   Updated: 2022/03/03 10:51:36 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_square.h"

void	ft_putchar(char ch, int type)
{
	write (type, &ch, 1);
}

void	ft_putstr(char *str, int type)
{
	int	index;

	index = 0;
	while (str[index])
	{
		ft_putchar(str[index], type);
		index++;
	}
}

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	ft_get_char(char *str, int row, int column)
{
	int	index;
	int	current_row;
	int	current_column;

	index = 0;
	current_row = -1;
	current_column = 0;
	while (str[index])
	{
		if (current_row == row && current_column == column)
			return (str[index]);
		current_column++;
		if (str[index] == '\n')
		{
			current_row++;
			current_column = 0;
		}
		index++;
	}
	return ('\0');
}

void	get_infos(char *map, char *chars, int *length)
{
	int	index;

	index = 0;
	while (map[index] != '\n')
		index++;
	chars[2] = map[index - 1];
	chars[1] = map[index - 2];
	chars[0] = map[index - 3];
	index++;
	length[1] = 0;
	while (map[index] != '\n')
	{
		length[1] += 1;
		index++;
	}
	index++;
	length[0] = 1;
	while (map[index])
	{
		if (map[index] == '\n')
			length[0] += 1;
		index++;
	}
}
