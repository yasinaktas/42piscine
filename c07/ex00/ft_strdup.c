/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 09:54:22 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/20 11:12:33 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int		index;

	index = 0;
	while (src[index])
	{
		index++;
	}
	return (index);
}

char	*ft_strdup(char *src)
{
	int		index;
	char	*new_src;

	index = 0;
	new_src = (char *)malloc(ft_strlen(src) * 16);
	if (new_src == NULL)
		return (0);
	while (src[index])
	{
		new_src[index] = src[index];
		index++;
	}
	new_src[index] = '\0';
	return (new_src);
}
