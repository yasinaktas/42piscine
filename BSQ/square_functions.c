#include "ft_square.h"

char    ft_get_char(char *str, int row, int column);

int	ft_control_square(char *str, char empty, struct Square square)
{
	int	index;

	index = 0;
	while (index < square.control_length)
	{
		if (ft_get_char(str,square.row, square.column + index) != empty)
			return (0);
		if (ft_get_char(str,square.row + square.length,square.column + index) != empty)
			return (0);
		if (ft_get_char(str,square.row + index, square.column) != empty)
			return (0);
		if (ft_get_char(str,square.row + index, square.column +  square.length) != empty)
			return (0);
		index++;
	}
	return (1);
}

void	ft_update_square(char *str, char empty, int *length, struct Square *square)
{
	int	sq_length;

	sq_length = 0;
	while (square->row + sq_length < length[0] && square->column + sq_length < length[1])
	{
		square->control_length = sq_length;
		if (ft_control_square(str, empty, *square))
			square->length = sq_length;
		sq_length++;
	}
}

struct Square	ft_create_square(char *str, char empty, int *length, int *coord)
{
	struct Square square;

	square.row = coord[0];
	square.column = coord[1];
	square.length = 0;
	square.control_length = 0;
	square.in_loop = 'y';
	ft_update_square(str,empty, length, &square);
	return (square);
}
		

struct	Square	*ft_get_squares(char *str, int *length, char empty)
{
	int	index;
	square	*squares;
	int	coord[2];

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

struct Square	find_biggest_square(struct Square *squares)
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
