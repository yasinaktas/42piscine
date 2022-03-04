/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 13:14:49 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/13 13:16:54 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		index;
	char	ch;

	index = 0;
	while (str[index])
	{
		ch = str[index];
		if (ch >= 65 && ch <= 90)
			str[index] = ch + 32;
		index ++;
	}
	return (str);
}
