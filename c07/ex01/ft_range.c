/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 10:12:37 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/20 11:16:07 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*tab;
	int		index;

	index = 0;
	if (min >= max)
		return (NULL);
	tab = (int *)malloc((max - min) * 4);
	if (tab == NULL)
		return (NULL);
	while (min < max)
	{
		tab[index] = min;
		min++;
		index++;
	}
	return (tab);
}
