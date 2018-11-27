/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thile <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 22:59:14 by thile             #+#    #+#             */
/*   Updated: 2018/07/25 02:53:46 by thile            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree *btree_create_node(void *item)
{
	t_btree *new;

	if (!(new = (t_btree *)malloc(sizeof(t_btree))) || !new)
		return (0);
	new->item = item;
	new->left = 0;
	new->right = 0;
	return (new);
}
