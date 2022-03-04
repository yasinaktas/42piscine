/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:20:20 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/17 19:02:33 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int		index;

	index = 2;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (index <= nb / 2)
	{
		if (nb % index == 0)
			return (0);
		index++;
	}
	return (1);
}
