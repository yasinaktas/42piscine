/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 11:22:49 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/12 13:54:47 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char ch)
{
	write (1, &ch, 1);
}

void	ft_putstr(char *str)
{
	int		index;

	index = 0;
	while (str[index])
	{
		ft_write (str[index]);
		index++;
	}
}
