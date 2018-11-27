/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thile <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 07:55:18 by thile             #+#    #+#             */
/*   Updated: 2018/07/12 00:18:37 by thile            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_iterative_factorial(int nb)
{
	int	i;
	int fac;

	i = nb;
	fac = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 1)
	{
		return (1);
	}
	if (nb == 2)
	{
		return (2);
	}
	while (i > 1)
	{
		fac = fac * i * (i - 1);
		i -= 2;
	}
	return (fac);
}
