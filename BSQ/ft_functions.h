#ifndef FT_FUNCTIONS_H
# define FT_FUNCTIONS_H

# include "ft_square.h"

void	ft_putchar(char ch);
void	ft_putstr(char *str);
int	ft_strlen(char *str);
char	ft_get_char(char *str, int row, int column);
int     ft_control_square(char *str, char empty, int *length, struct Square square);
void    ft_update_square(char *str, char empty, int *length, struct Square *square);
struct Square   ft_create_square(char *str, char empty, int *length, int *coord);
struct  Square  *ft_get_squares(char *str, int *length, char empty, char obstacle);
struct Square   find_biggest_square(struct Square *squares);

#endif
