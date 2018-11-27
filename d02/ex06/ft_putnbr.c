/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thile <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 01:39:51 by thile             #+#    #+#             */
/*   Updated: 2018/07/09 20:16:05 by thile            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_display(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		ft_display();
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		if (nb > 10)
			ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
	else
	{
		if (nb > 10)
			ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
}
