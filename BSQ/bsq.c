/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 10:11:35 by yaaktas           #+#    #+#             */
/*   Updated: 2022/03/03 16:26:11 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_functions.h"

int	errors(char *map);

void	write_map(char *str, char full, struct s_square sq, int index)
{
	int	row;
	int	column;

	row = -1;
	column = 0;
	while (str[index])
	{
		if (row >= sq.row && row < sq.row + sq.length)
		{
			if (column >= sq.column && column < sq.column + sq.length)
				ft_putchar(full, 1);
			else
				ft_putchar(str[index], 1);
		}
		else
			ft_putchar(str[index], 1);
		column++;
		if (str[index] == '\n')
		{
			row++;
			column = 0;
		}
		index++;
	}
}

void	handle_map(char *map)
{
	int				length[2];
	char			chars[3];
	t_square		*squares;
	struct s_square	square;

	squares = malloc(1024 * 16);
	if (squares == NULL)
		return ;
	get_infos(map, chars, length);
	squares = ft_get_squares(map, length, chars[0], chars[1]);
	square = find_biggest_square(squares);
	write_map(map, chars[2], square, 0);
}

void	handle_file(char *file_name, int ac)
{
	int		file_descriptor;
	char	*buffer;

	buffer = (char *)malloc(1024);
	if (buffer == NULL)
		return ;
	file_descriptor = open(file_name, O_RDONLY);
	if (file_descriptor < 0)
		return ;
	if (read(file_descriptor, buffer, 1024))
	{
		if (errors(buffer) > 0)
		{
			handle_map(buffer);
			if (ac > 2)
				ft_putstr("\n", 1);
		}
		else
			ft_putstr("map error\n", 2);
	}
	if (close(file_descriptor) < 0)
		exit(1);
}

void	ft_read_stdin(void)
{
	char	*out;
	char	buffer;
	int		index;

	index = 0;
	out = (char *)malloc(1024 * 16);
	if (out == NULL)
		return ;
	while (read(0, &buffer, 1))
	{
		out[index] = buffer;
		index++;
	}
	if (errors(out) > 0)
		handle_map(out);
	else
		ft_putstr("map error\n", 2);
	free (out);
}

int	main(int ac, char **av)
{
	int	index;

	if (ac == 1)
		ft_read_stdin();
	index = 1;
	if (ac > 1)
	{
		while (index < ac)
		{
			handle_file(av[index], ac);
			index++;
		}
	}
}
