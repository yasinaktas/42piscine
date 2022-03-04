/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 11:34:03 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/12 13:56:46 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_highest(int *tab, int last_index)
{
	int		index;
	int		return_index;
	int		max_num;

	return_index = 0;
	index = 1;
	max_num = tab[0];
	while (index <= last_index)
	{
		if (tab[index] > max_num)
		{
			max_num = tab[index];
			return_index = index;
		}
		index++;
	}
	return (return_index);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		index;
	int		control_size;
	int		temp_num;

	index = 0;
	control_size = size - 1;
	while (index < size)
	{
		temp_num = tab[control_size];
		tab[control_size] = tab[ft_find_highest(tab, control_size)];
		tab[ft_find_highest(tab, control_size)] = temp_num;
		control_size--;
		index++;
	}
}
