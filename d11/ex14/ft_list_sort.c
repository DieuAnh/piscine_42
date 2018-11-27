/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thile <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 16:47:32 by thile             #+#    #+#             */
/*   Updated: 2018/07/26 15:41:01 by thile            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_swap(t_list **list1, t_list **list2)
{
	t_list *tmp;

	tmp = *list1;
	*list1 = *list2;
	*list2 = tmp;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *list;
	t_list *start;

	list = *begin_list;
	while (list->next)
	{
		start = list->next;
		while (start)
		{
			if ((*cmp)(list->data, start->data) > 0)
			{
				ft_swap(&list, &start);
			}
			start = start->next;
		}
		list = list->next;
	}
}
