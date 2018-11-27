/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thile <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 14:54:32 by thile             #+#    #+#             */
/*   Updated: 2018/07/24 14:07:33 by thile            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb = -147483648;
		}
		ft_putnbr(-nb);
	}
	else
	{
		if (nb >= 10)
			ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_calculate(int value1, char op, int value2)
{
	if (op == '+')
		return (value1 + value2);
	if (op == '-')
		return (value1 - value2);
	if (op == '*')
		return (value1 * value2);
	if (op == '/')
		return (value1 / value2);
	if (op == '%')
		return (value1 % value2);
	return (0);
}

int		main(int argc, char **argv)
{
	int		value1;
	int		value2;
	char	op;
	int		result;

	if (argc != 4)
		return (0);
	value1 = ft_atoi(argv[1]);
	value2 = ft_atoi(argv[3]);
	op = argv[2][0];
	if (value2 == 0 && op == '/')
	{
		ft_putstr(MSG_DIV_BY_ZERO);
		return (0);
	}
	if (value2 == 0 && op == '%')
	{
		ft_putstr(MSG_MOD_BY_ZERO);
		return (0);
	}
	result = ft_calculate(value1, op, value2);
	ft_putnbr(result);
	ft_putchar('\n');
	return (0);
}
