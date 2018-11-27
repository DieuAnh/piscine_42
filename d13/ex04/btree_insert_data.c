/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thile <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 12:29:46 by thile             #+#    #+#             */
/*   Updated: 2018/07/25 15:12:01 by thile            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	if (*root == NULL)
	{
		btree_create_node(item);
		return ;
	}
	if (cmpf(item, *root->item) < 0)
		btree_insert_data(*root->left, item, cmpf);
	else if (cmpf(item, *root->item) > 0)
		btree_insert_data(*root->right, item, cmpf);
}
