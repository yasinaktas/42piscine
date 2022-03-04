/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 13:18:28 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/13 13:54:28 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		index;
	char	ch;
	char	last_ch;

	index = 0;
	last_ch = ' ';
	while (str[index])
	{
		ch = str[index];
		if (last_ch == ' ' && (ch >= 97 && ch <= 122))
			str[index] = ch - 32;
		last_ch = ch;
		index++;
	}
	return (str);
}
