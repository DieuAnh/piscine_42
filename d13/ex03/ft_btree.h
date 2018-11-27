/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thile <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 22:55:41 by thile             #+#    #+#             */
/*   Updated: 2018/07/25 11:38:01 by thile            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef struct			s_btree
{
	struct	s_btree		*left;
	struct	s-btree		*right;
	void				*item;
}						t_btree;

t_btree *btree_create_node(void *item);

#endif
