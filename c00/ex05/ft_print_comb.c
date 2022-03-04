/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:26:54 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/11 11:36:54 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_write_numbers(char num1, char num2, char num3)
{
	write (1, &num1, 1);
	write (1, &num2, 1);
	write (1, &num3, 1);
}

void	ft_print_comb(void)
{
	char	first_num;
	char	second_num;
	char	third_num;

	first_num = '0';
	second_num = '0';
	third_num = '0';
	while (first_num <= '7')
	{
		second_num = first_num + 1;
		while (second_num <= '8')
		{
			third_num = second_num + 1;
			while (third_num <= '9')
			{
				ft_write_numbers (first_num, second_num, third_num);
				if (first_num != '7')
					write (1, ", ", 1);
				third_num++;
			}
			second_num++;
		}
		first_num++;
	}
}
