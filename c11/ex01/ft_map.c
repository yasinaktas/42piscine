/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:28:03 by yaaktas           #+#    #+#             */
/*   Updated: 2022/03/01 12:32:07 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f) (int))
{
	int		i;
	int		*output_tab;

	output_tab = (int *)malloc(sizeof(int) * length);
	if (output_tab == NULL)
		return (0);
	i = 0;
	while (i < length)
	{
		output_tab[i] = f(tab[i]);
		i++;
	}
	return (output_tab);
}
