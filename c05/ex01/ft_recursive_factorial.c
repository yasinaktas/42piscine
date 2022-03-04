/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:25:34 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/17 19:01:14 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive(int result, int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (result);
	return (ft_recursive(result * nb, nb - 1));
}

int	ft_recursive_factorial(int nb)
{
	int		result;

	result = 1;
	result = ft_recursive(result, nb);
	return (result);
}
