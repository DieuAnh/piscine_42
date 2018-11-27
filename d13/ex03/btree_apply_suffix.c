/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thile <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 11:39:51 by thile             #+#    #+#             */
/*   Updated: 2018/07/25 12:25:08 by thile            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root != NULL)
	{
		btree_apply_prefix(root->left, applyf(root->left->data));
		btree_apply_prefix(root->right, applyf(root->right->data));
		btree_apply_prefix(toot->item, applyf(root->data));
	}
}
