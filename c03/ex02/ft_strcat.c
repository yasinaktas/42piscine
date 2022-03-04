/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:16:27 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/14 11:24:24 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
