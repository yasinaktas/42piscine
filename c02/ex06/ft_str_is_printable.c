/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:38:18 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/13 16:31:18 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		result;
	int		index;
	char	ch;

	result = 1;
	index = 0;
	while (str[index])
	{
		ch = str[index];
		if (!(ch >= 32 && ch <= 126))
			result = 0;
		index++;
	}
	return (result);
}
