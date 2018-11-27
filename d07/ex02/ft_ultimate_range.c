/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thile <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 18:43:08 by thile             #+#    #+#             */
/*   Updated: 2018/07/19 11:16:45 by thile            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int index;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	if (!(tab = (int *)malloc(sizeof(*tab) * (max - min))) || !tab)
		return (0);
	index = 0;
	while (min < max)
	{
		tab[index] = min;
		min++;
		index++;
	}
	*range = tab;
	return (index);
}
