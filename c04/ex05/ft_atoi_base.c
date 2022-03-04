/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 09:59:57 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/22 10:11:10 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

int	ft_isspace(char ch)
{
	if (ch == ' ' || ch == '\n' || ch == '\t')
		return (1);
	if (ch == '\f' || ch == '\r' || ch == '\v')
		return (1);
	return (0);
}

int	ft_check_base(char *base)
{
	int		index;
	int		index2;
	char	ch;

	index = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[index])
	{
		ch = base[index];
		if (ch == '+' || ch == '-' || ft_isspace(ch) == 1)
			return (0);
		index2 = index + 1;
		while (base[index2])
		{
			if (base[index] == base[index2])
				return (0);
			index2++;
		}
		index++;
	}
	return (1);
}

int	ft_base_index(char ch, char *base)
{
	int	index;

	index = 0;
	while (base[index])
	{
		if (base[index] == ch)
			return (index);
		index++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	index;
	int	multiplier;
	int	number;

	index = 0;
	multiplier = 1;
	number = 0;
	if (ft_check_base(base) == 0)
		return (0);
	while (ft_isspace(str[index]))
		index++;
	while (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			multiplier *= -1;
		index++;
	}
	while (ft_base_index(str[index], base) != -1)
	{
		number = number * ft_strlen(base);
		number = number + ft_base_index(str[index], base);
		index++;
	}
	return (number * multiplier);
}
