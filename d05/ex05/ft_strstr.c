/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thile <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 02:42:41 by thile             #+#    #+#             */
/*   Updated: 2018/07/16 12:52:54 by thile            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	char *a;
	char *b;

	b = to_find;
	if (*b == 0)
		return (str);
	while (*str != '\0')
	{
		if (*str != *b)
		{
			str++;
			continue;
		}
		a = str;
		while (1)
		{
			if (*b == '\0')
				return (str);
			if (*a++ != *b++)
				break ;
		}
		b = to_find;
		str++;
	}
	return (0);
}
