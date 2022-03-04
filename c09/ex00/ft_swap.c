/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 11:09:56 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/12 13:51:58 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int		temp_a;
	int		temp_b;

	temp_a = *a;
	temp_b = *b;
	*a = temp_b;
	*b = temp_a;
}