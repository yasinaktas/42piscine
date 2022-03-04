/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:47:55 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/17 19:04:34 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive(int result, int num1, int num2, int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (result);
	return (ft_recursive(num1 + num2, num2, num1 + num2, index - 1));
}

int	ft_fibonacci(int index)
{
	int		result;
	int		num1;
	int		num2;

	result = 0;
	num1 = 0;
	num2 = 1;
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_recursive(result, num1, num2, index - 1));
}
