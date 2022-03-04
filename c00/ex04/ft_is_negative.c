/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:21:13 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/11 11:36:20 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_is_negative(int n)
{
	char	pt;
	char	ng;

	pt = 'P';
	ng = 'N';
	if (n >= 0)
	{
		write(1, &pt, 1);
	}
	else
	{
		write(1, &ng, 1);
	}
}
