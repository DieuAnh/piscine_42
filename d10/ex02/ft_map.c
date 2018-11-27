/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thile <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 11:54:37 by thile             #+#    #+#             */
/*   Updated: 2018/07/24 23:43:11 by thile            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *map;

	i = 0;
	if (!(map = (int *)malloc(sizeof(*map) * length)) || !map)
		return (0);
	while (i < length)
	{
		map[i] = f(tab[i]);
		i++;
	}
	return (map);
}
