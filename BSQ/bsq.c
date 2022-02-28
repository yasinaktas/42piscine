#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct Square
{
	int row;
	int column;
	int length;
	int control_length;
} square;

void	ft_putchar(char ch)
{
	write (1, &ch, 1);
}

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		ft_putchar(str[index]);
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

int	ft_control_square(char *str, char empty, int *length, struct Square square)
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
		if (ft_control_square(str, empty, length, *square))
			square->length = sq_length;
		/*else
			break;*/
		sq_length++;
	}
}

struct Square	ft_create_square(char *str, char empty, int *length, int *coord)
{
	struct Square square;

	//square = *(struct Square *)malloc(sizeof(struct Square) * 4);
	/*if (square == NULL)
		return (NULL);*/
	square.row = coord[0];
	square.column = coord[1];
	square.length = 0;
	square.control_length = 0;
	ft_update_square(str,empty, length, &square);
	return (square);
}
		

struct	Square	*ft_get_squares(char *str, int *length, char empty, char obstacle)
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

#include <stdio.h>
int	main(void)
{
	char *system = "9.ox\n...........................\n....o......................\n............o..............\n...........................\n....o......................\n...............o...........\n...........................\n......o..............o.....\n..o.......o................";

	square  *squares;
	int index = 0;

	squares = malloc(1024 * 16);
	if (squares == NULL)
		return (0);
	int length[2] = {9,27};
	squares = ft_get_squares(system,length,'.','o');
	while (index < 243)
	{
		printf("%d-%d-%d-%d\n",squares[index].row,squares[index].column,squares[index].length,squares[index].control_length);
		index++;
	}
}









