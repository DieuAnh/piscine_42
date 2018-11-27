/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thile <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 12:38:05 by thile             #+#    #+#             */
/*   Updated: 2018/07/08 21:18:46 by thile            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_first_line(int x, char a, char b)
{
	int i;

	i = 2;
	ft_putchar(a);
	while (i <= x - 1)
	{
		ft_putchar(b);
		i++;
	}
	if (x >= 2)
	{
		ft_putchar(a);
	}
}

void	print_line_in_between(int x, char c, char d)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
		{
			ft_putchar(c);
		}
		else
		{
			ft_putchar(d);
		}
		i++;
	}
}

void	print_other_line(int x, int y, char b, char d)
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
		print_line_in_between(x, b, d);
		ft_putchar('\n');
		j++;
	}
}

void	print_last_line(int x, int y, char b, char a)
{
	if (y > 1)
	{
		print_first_line(x, b, a);
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	char a;
	char b;
	char c;
	char d;

	a = 'A';
	b = 'B';
	c = 'C';
	d = ' ';
	if (x > 0 && y > 0)
	{
		print_first_line(x, a, b);
		print_other_line(x, y, b, d);
		print_last_line(x, y, c, b);
	}
}
