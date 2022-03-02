#ifndef FT_SQUARE_H
# define FT_SQUARE_H

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
	char	in_loop;
} square;

#endif
