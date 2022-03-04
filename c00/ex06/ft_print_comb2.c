/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:23:09 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/11 11:38:41 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb2(void)
{
	char	first_num;
	char	second_num;

	first_num = '0';
	second_num = '0';
	while (first_num <= '9')
	{
		second_num = '0';
		while (second_num <= '9')
		{
			write (1, &first_num, 1);
			write (1, &second_num, 1);
			if (first_num == '9' && second_num == '9')
			{
			}
			else
			{
				write (1, ", ", 2);
			}
			second_num++;
		}
		first_num++;
	}
}
