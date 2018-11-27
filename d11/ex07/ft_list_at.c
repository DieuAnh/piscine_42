/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thile <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 12:07:10 by thile             #+#    #+#             */
/*   Updated: 2018/07/26 22:36:26 by thile            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	count;
	t_list			*list;

	count = 0;
	list = begin_list;
	while (list)
	{
		if (count == nbr - 1)
			return (list);
		list = list->next;
		count++;
	}
	return (0);
}
