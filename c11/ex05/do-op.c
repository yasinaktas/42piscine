/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaaktas <yaaktas@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 14:25:24 by yaaktas           #+#    #+#             */
/*   Updated: 2022/02/27 15:19:47 by yaaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int		index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

int	ft_atoi(char *str)
{
	int		index;
	int		multiplier;
	int		number;

	index = 0;
	multiplier = 1;
	number = 0;
	while ((str[index] >= 9 && str[index] <= 13) || str[index] == 32)
		index++;
	while (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			multiplier = -multiplier;
		index++;
	}
	while (str[index] >= 48 && str[index] <= 57)
	{
		number = number * 10 + (str[index] - 48);
		index++;
	}
	return (number * multiplier);
}

void	ft_putnbr(int nbr)
{
	long	nb;
	int		i;
	char	c[10];

	nb = nbr;
	if (nb == 0)
		write(1, "0", 1);
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	i = 0;
	while (nb > 0)
	{
		c[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1, &c[i], 1);
		i--;
	}
}

int	ft_do_op(int num1, int num2, char *op)
{
	if (ft_strlen(op) == 1)
	{
		if (op[0] == '+')
			return (num1 + num2);
		if (op[0] == '-')
			return (num1 - num2);
		if (op[0] == '*')
			return (num1 * num2);
		if (op[0] == '/')
			return (num1 / num2);
		if (op[0] == '%')
			return (num1 % num2);
	}
	return (0);
}

int	main(int ac, char **av)
{
	int		num1;
	int		num2;

	if (ac == 4)
	{
		num1 = ft_atoi(av[1]);
		num2 = ft_atoi(av[3]);
		if (ft_strlen(av[2]) == 1 && av[2][0] == '/' && num2 == 0)
			write(1, "Stop : division by zero\n", 24);
		else if (ft_strlen(av[2]) == 1 && av[2][0] == '%' && num2 == 0)
			write(1, "Stop : modulo by zero\n", 22);
		else
			ft_putnbr(ft_do_op(num1, num2, av[2]));
	}
}
