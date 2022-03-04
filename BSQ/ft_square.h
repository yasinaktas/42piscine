/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 10:22:54 by yaaktas           #+#    #+#             */
/*   Updated: 2022/03/03 10:23:11 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SQUARE_H
# define FT_SQUARE_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_square
{
	int		row;
	int		column;
	int		length;
	int		control_length;
	char	in_loop;
}			t_square;

#endif
