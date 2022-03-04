/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 19:29:23 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/20 11:09:20 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char **out)
{
	int		index;

	index = 0;
	while (out[index])
		index++;
	return (index);
}

int	ft_is_sprt(char ch, char *charset)
{
	int		index;

	index = 0;
	while (charset[index])
	{
		if (charset[index] == ch)
			return (1);
		index++;
	}
	return (0);
}

void	ft_add_output(char *str, int start, int end, char **out)
{
	char	*temp;
	int		index2;

	index2 = 0;
	temp = (char *)malloc(1024 * 16);
	while (start < end)
	{
		temp[index2] = str[start];
		index2++;
		start++;
	}
	temp[index2] = '\0';
	if (index2 != 0)
		out[ft_strlen(out)] = temp;
}

char	**ft_split(char *str, char *charset)
{
	char	**output;
	int		index;
	int		index_output;
	int		start_index;

	output = (char **)malloc(1024 * 16);
	index = 0;
	index_output = 0;
	start_index = 0;
	while (str[index])
	{
		if (ft_is_sprt(str[index], charset) == 1)
		{
			ft_add_output(str, start_index, index, output);
			index_output++;
			start_index = index + 1;
		}
		index++;
	}
	ft_add_output(str, start_index, index, output);
	output[index_output + 1] = 0;
	return (output);
}
