/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:27:05 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/14 11:30:48 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_index;
	unsigned int	index;

	dest_index = 0;
	index = 0;
	while (dest[dest_index])
	{
		dest_index++;
	}
	while (src[index] && index < nb)
	{
		dest[dest_index] = src[index];
		dest_index++;
		index++;
	}
	dest[dest_index] = '\0';
	return (dest);
}
