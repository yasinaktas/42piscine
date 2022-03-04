/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:49:10 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/13 12:52:52 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		index;
	char	ch;

	index = 0;
	while (str[index])
	{
		ch = str[index];
		if (ch >= 97 && ch <= 122)
			str[index] = ch - 32;
		index++;
	}
	return (str);
}
