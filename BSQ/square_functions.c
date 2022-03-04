/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 10:33:46 by yaaktas           #+#    #+#             */
/*   Updated: 2022/03/03 11:26:34 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_square.h"

char	ft_get_char(char *str, int row, int column);

int	ft_cont_sq(char *str, char empty, struct s_square sq)
{
	int	index;

	index = 0;
	while (index < sq.control_length)
	{
		if (ft_get_char(str, sq.row, sq.column + index) != empty)
			return (0);
		if (ft_get_char(str, sq.row + sq.length, sq.column + index) != empty)
			return (0);
		if (ft_get_char(str, sq.row + index, sq.column) != empty)
			return (0);
		if (ft_get_char(str, sq.row + index, sq.column + sq.length) != empty)
			return (0);
		index++;
	}
	return (1);
}

void	ft_up_sq(char *str, char empty, int *length, struct s_square *sq)
{
	int	sq_len;

	sq_len = 0;
	while (sq->row + sq_len <= length[0] && sq->column + sq_len <= length[1])
	{
		sq->control_length = sq_len;
		if (ft_cont_sq(str, empty, *sq))
			sq->length = sq_len;
		sq_len++;
	}
}

struct s_square	ft_create_square(char *str, char empty, int *length, int *coord)
{
	struct s_square	square;

	square.row = coord[0];
	square.column = coord[1];
	square.length = 0;
	square.control_length = 0;
	square.in_loop = 'y';
	ft_up_sq(str, empty, length, &square);
	return (square);
}	

struct	s_square	*ft_get_squares(char *str, int *length, char empty)
{
	int			index;
	t_square	*squares;
	int			coord[2];

	index = 0;
	squares = malloc(1024 * 16);
	if (squares == NULL)
		return (NULL);
	coord[0] = 0;
	while (coord[0] < length[0])
	{
		coord[1] = 0;
		while (coord[1] < length[1])
		{
			squares[index] = ft_create_square(str, empty, length, coord);
			coord[1] += 1;
			index++;
		}
		coord[0] += 1;
	}
	return (squares);
}

struct s_square	find_biggest_square(struct s_square *squares)
{
	int	max;
	int	index;

	max = 0;
	index = 0;
	while (squares[index].in_loop)
	{
		if (squares[index].length > max)
			max = squares[index].length;
		index++;
	}
	index = 0;
	while (squares[index].in_loop)
	{
		if (squares[index].length == max)
			return (squares[index]);
		index++;
	}
	return (squares[0]);
}
