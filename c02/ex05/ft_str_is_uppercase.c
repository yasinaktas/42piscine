/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:33:58 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/13 16:31:02 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		result;
	int		index;
	char	ch;

	result = 1;
	index = 0;
	while (str[index])
	{
		ch = str[index];
		if (!(ch >= 65 && ch <= 90))
			result = 0;
		index++;
	}
	return (result);
}
