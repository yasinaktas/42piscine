/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:22:03 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/13 16:30:38 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		result;
	int		index;
	char	ch;

	result = 1;
	index = 0;
	while (str[index])
	{
		ch = str[index];
		if (!(ch >= 48 && ch <= 57))
			result = 0;
		index++;
	}
	return (result);
}
