/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 10:17:04 by yaaktas           #+#    #+#             */
/*   Updated: 2022/03/03 10:21:21 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FUNCTIONS_H
# define FT_FUNCTIONS_H

# include "ft_square.h"

void			ft_putchar(char ch, int type);
void			ft_putstr(char *str, int type);
int				ft_strlen(char *str);
char			ft_get_char(char *str, int row, int column);
void			get_infos(char *map, char *chars, int *length);
int				ft_cont_sq(char *str, char emp, int *len, struct s_square sq);
void			ft_up_sq(char *str, char emp, int *len, struct s_square *sq);
struct s_square	ft_create_square(char *str, char emp, int *len, int *coord);
struct s_square	*ft_get_squares(char *str, int *len, char emp, char obs);
struct s_square	find_biggest_square(struct s_square *squares);

#endif
