/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:13:49 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/14 17:59:28 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	ch1;
	unsigned char	ch2;
	int				index;

	index = 0;
	while (s1[index])
	{
		ch1 = s1[index];
		ch2 = s2[index];
		if (ch1 != ch2)
			return (ch1 - ch2);
		index++;
	}
	return (s1[index] - s2[index]);
}
