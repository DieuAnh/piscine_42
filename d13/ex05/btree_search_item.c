/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thile <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 12:29:46 by thile             #+#    #+#             */
/*   Updated: 2018/07/25 15:10:50 by thile            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *))
{
	if (root == NULL || root->item == data_ref)
		return (root);
	if (cmpf(item, root->item) < 0)
		btree_search_item(root->left, item, cmpf);
	else
		btree_search_item(root->right, item, cmpf);
}
