/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 11:23:13 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/13 16:29:51 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		result;
	int		index;
	int		ch;

	result = 1;
	index = 0;
	while (str[index])
	{
		ch = str[index];
		if (!((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)))
				result = 0;
		index++;
	}
	return (result);
}
