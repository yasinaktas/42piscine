/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:43:05 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/17 19:03:47 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive(int result, int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (result);
	return (ft_recursive(result * nb, nb, power - 1));
}

int	ft_recursive_power(int nb, int power)
{
	int		result;

	result = 1;
	if (power == 0)
		return (1);
	return (ft_recursive(result, nb, power));
}
