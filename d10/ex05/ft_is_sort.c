/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thile <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 12:14:28 by thile             #+#    #+#             */
/*   Updated: 2018/07/24 13:59:49 by thile            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < length - 2)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			while (i < length - 2)
			{
				if (f(tab[i + 1], tab[i + 2]) < 0)
					return (0);
				i++;
			}
		else if (f(tab[i], tab[i + 1]) < 0)
			while (i < length - 2)
			{
				if (f(tab[i + 1], tab[i + 2]) > 0)
					return (0);
				i++;
			}
		else
			i++;
	}
	return (1);
}
