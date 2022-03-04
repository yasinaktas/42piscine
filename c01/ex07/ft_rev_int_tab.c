/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 11:28:28 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/12 13:56:02 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		index;
	int		index2;
	int		temp_num;

	index = 0;
	index2 = size - 1;
	while (index < (size / 2))
	{
		temp_num = tab[index];
		tab[index] = tab[index2];
		tab[index2] = temp_num;
		index++;
		index2--;
	}
}
