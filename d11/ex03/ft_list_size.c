/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thile <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 11:07:53 by thile             #+#    #+#             */
/*   Updated: 2018/07/26 15:39:35 by thile            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		i;
	int		count;
	t_list	*list;

	i = 0;
	count = 0;
	list = begin_list;
	while (list != NULL)
	{
		count++;
		list = list->next;
	}
	return (count);
}
