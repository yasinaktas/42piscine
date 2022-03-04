/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:11:46 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/22 18:18:57 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	checkerror(char *str)
{
	int	i;
	int	j;
	int	x;

	x = ft_strlen(str);
	i = 0;
	if (str[0] == '\0' || x == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (j < ft_strlen(str))
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	*ft_putnbr_base(char *output, int nbr, char *base)
{
	long	nb;

	nb = nbr;
	if (checkerror(base) == 1)
	{
		if (nb < 0)
		{
			output[0] = '-';
			nb *= -1;
		}
		if (nb < ft_strlen(base))
		{
			if (output[0])
				output[ft_strlen(output)] = base[nb];
			else
				output[0] = base[nb];
		}
		if (nb >= ft_strlen(base))
		{
			ft_putnbr_base(output, nb / ft_strlen(base), base);
			ft_putnbr_base(output, nb % ft_strlen(base), base);
		}
	}
	return (output);
}
