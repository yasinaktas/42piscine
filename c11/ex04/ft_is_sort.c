/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:30:11 by yaaktas           #+#    #+#             */
/*   Updated: 2022/03/01 12:33:54 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_ascending_sorted(int *tab, int length, int (*f) (int, int))
{
	int		i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_descending_sorted(int *tab, int length, int (*f) (int, int))
{
	int		i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f) (int, int))
{
	if (ft_is_ascending_sorted(tab, length, f))
		return (1);
	if (ft_is_descending_sorted(tab, length, f))
		return (1);
	else
		return (0);
}

int	ft_strcmp(int nb1, int nb2)
{
	if (nb1 < nb2)
		return (-1);
	else if (nb1 == nb2)
		return (0);
	else
		return (1);
}
