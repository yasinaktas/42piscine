/*#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>*/

#include "ft_functions.h"

int	errors(char *map);

/*typedef struct Square
{
	int row;
	int column;
	int length;
	int control_length;
	char	in_loop;
} square;*/

/*void	ft_putchar(char ch)
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
}*/

/*int	ft_control_square(char *str, char empty, int *length, struct Square square)
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
}*/

void	write_map(char *str, char full, struct Square square)
{
	int	index;
	int	row;
	int	column;

	index = 0;
	row = -1;
	column = 0;
	while (str[index])
	{
		if (row >= square.row && row < square.row + square.length)
		{
			if (column >= square.column && column < square.column + square.length)
			ft_putchar(full);
			else
				ft_putchar(str[index]);
		}
		else
			ft_putchar(str[index]);
		column++;
		if (str[index] == '\n')
		{
			row++;
			column = 0;
		}
		index++;
	}
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
	length[0] = 0;
	while (map[index])
	{
		if (map[index] == '\n')
			length[0] += 1;
		index++;
	}
}

void	handle_map(char *map)
{
	int	length[2];
	char	chars[3];
	square	*squares;
	struct Square	square;

	squares = malloc(1024 * 16);
	if (squares == NULL)
	return ;
	get_infos(map, chars, length);
	squares = ft_get_squares(map, length, chars[0], chars[1]);
	square = find_biggest_square(squares);
	write_map(map, chars[2], square);
}

void	handle_file(char *file_name)
{
	int	file_descriptor;
	char	*buffer;

	buffer = (char *)malloc(1024);
	if (buffer == NULL)
		return ;
	file_descriptor = open(file_name, O_RDONLY);
	if (read(file_descriptor, buffer, 1024))
	{
		handle_map(buffer);
		//printf("%d\n", line_lengths(buffer));
		//printf("errors : %d\n", errors(buffer));
		//ft_putstr(buffer);
	}	

	if (close(file_descriptor) < 0)
		exit(1);
}



int	main(int ac, char **av)
{
	/*char *system = "9.ox\n...........................\n....o......................\n............o..............\n...........................\n....o......................\n...............o...........\n...........................\n......o..............o.....\n..o.......o................";

	square  *squares;
	int index = 0;

	squares = malloc(1024 * 16);
	if (squares == NULL)
		return (0);
	int length[2] = {9,27};
	squares = ft_get_squares(system,length,'.','o');*/
	/*while (index < 243)
	{
		printf("%d-%d-%d-%d\n",squares[index].row,squares[index].column,squares[index].length,squares[index].control_length);
		index++;
	}*/
	/*struct Square square = find_biggest_square(squares);
	write_map(system,'x',square);
	ft_putchar('\n');
	handle_file(av[1]);*/
	handle_file(av[1]);
}









