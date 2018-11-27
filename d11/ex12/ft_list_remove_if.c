/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thile <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 16:15:59 by thile             #+#    #+#             */
/*   Updated: 2018/07/26 19:59:37 by thile            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *list;
	t_list *prev;
	t_list *next;

	list = *begin_list;
	prev = NULL;
	while (list)
	{
		if ((*cmp)(list->data, data_ref) == 0)
		{
			next = list->next;
			prev->next = next;
			printf ("%d\n", list->data);
			free(list);
			list = next;
		}
		else
		{
			//prev = list;
			list = list->next;
		}
	}
}
