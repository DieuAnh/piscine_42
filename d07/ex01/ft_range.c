/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thile <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 18:37:42 by thile             #+#    #+#             */
/*   Updated: 2018/07/19 10:35:00 by thile            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *range;
	int index;

	if (min >= max)
	{
		return (0);
	}
	range = (int *)malloc(sizeof(*range) * (max - min));
	if (!range)
	{
		return (0);
	}
	index = min;
	while (min < max)
	{
		range[min - index] = min;
		min++;
	}
	return (range);
}
