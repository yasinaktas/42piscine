/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 13:43:37 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/22 18:27:41 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

int	ft_length(char **strs, int size, char *sep)
{
	int		index;
	int		length;

	index = 0;
	length = 0;
	while (index < size)
	{
		length = length + ft_strlen(strs[index]);
		index++;
	}
	length = length + (size - 1) * ft_strlen(sep) + 1;
	return (length);
}

char	*ft_strcat(char *dest, char *src)
{
	int		dest_index;
	int		index;

	dest_index = 0;
	index = 0;
	while (dest[dest_index])
	{
		dest_index++;
	}
	while (src[index])
	{
		dest[dest_index] = src[index];
		dest_index++;
		index++;
	}
	dest[dest_index] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		index;

	index = 0;
	if (size == 0)
	{
		str = (char *)malloc(sizeof(char));
		*str = 0;
		return (str);
	}
	str = (char *)malloc(sizeof(char) * ft_length(strs, size, sep));
	if (!(str))
		return (NULL);
	*str = 0;
	while (index < size)
	{
		ft_strcat(str, strs[index]);
		if (index != size - 1)
			ft_strcat(str, sep);
		index++;
	}
	return (str);
}
