/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:37:54 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/14 18:33:57 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned char	ch1;
	unsigned char	ch2;
	unsigned int	index;

	index = 0;
	if (n == 0)
		return (0);
	while (s1[index] && index < n - 1)
	{
		ch1 = s1[index];
		ch2 = s2[index];
		if (ch1 != ch2)
			return (ch1 - ch2);
		index++;
	}
	return (s1[index] - s2[index]);
}
