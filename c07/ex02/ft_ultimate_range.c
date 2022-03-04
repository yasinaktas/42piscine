/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 10:33:24 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/20 11:16:39 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		index;
	int		*tab;

	index = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc((max - min) * 4);
	if (tab == NULL)
		return (-1);
	while (min < max)
	{
		tab[index] = min;
		min++;
		index++;
	}
	*range = tab;
	return (index);
}
