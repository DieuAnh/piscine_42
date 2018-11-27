/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thile <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 18:59:57 by thile             #+#    #+#             */
/*   Updated: 2018/07/21 14:39:50 by thile            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		size;
	int		i;
	int		j;
	int		index;
	char	*str;

	i = 1;
	size = 0;
	while (i < argc)
		size += (ft_strlen(argv[i++]) + 1);
	if (!(str = (char *)malloc(sizeof(char) * size)))
		return (0);
	i = 1;
	index = 0;
	while (i < argc)
	{
		j = 0;
		while (j < ft_strlen(argv[i]))
			str[index++] = argv[i][j++];
		if (i != argc - 1)
			str[index++] = '\n';
		i++;
	}
	str[index] = '\0';
	return (str);
}
