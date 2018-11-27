/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thile <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 12:38:05 by thile             #+#    #+#             */
/*   Updated: 2018/07/08 21:14:39 by thile            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_first_line(int x)
{
	int i;

	i = 2;
	ft_putchar('o');
	while (i <= x - 1)
	{
		ft_putchar('-');
		i++;
	}
	if (x >= 2)
	{
		ft_putchar('o');
	}
}

void	print_other_line(int x, int y)
{
	int	i;
	int j;

	j = 2;
	if (y > 1)
	{
		ft_putchar('\n');
	}
	while (j <= y - 1)
	{
		ft_putchar('|');
		i = 2;
		while (i <= (x - 1))
		{
			ft_putchar(' ');
			i++;
		}
		if (x > 1)
		{
			ft_putchar('|');
		}
		ft_putchar('\n');
		j++;
	}
}

void	print_last_line(int x, int y)
{
	if (y > 1)
	{
		print_first_line(x);
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		print_first_line(x);
		print_other_line(x, y);
		print_last_line(x, y);
	}
}
