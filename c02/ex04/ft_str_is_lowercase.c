/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:27:40 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/13 16:30:50 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		result;
	int		index;
	char	ch;

	result = 1;
	index = 0;
	while (str[index])
	{
		ch = str[index];
		if (!(ch >= 97 && ch <= 122))
			result = 0;
		index++;
	}
	return (result);
}
