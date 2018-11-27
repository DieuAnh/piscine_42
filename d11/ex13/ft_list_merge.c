/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thile <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 16:26:44 by thile             #+#    #+#             */
/*   Updated: 2018/07/26 14:38:20 by thile            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *list1;
	t_list *list2;

	list1 = *begin_list1;
	list2 = begin_list2;
	if (list1 == NULL)
	{
		list1 = list2;
		return ;
	}
	while (list1->next)
	{
		list1 = list1->next;
	}
	list1->next = list2;
}
