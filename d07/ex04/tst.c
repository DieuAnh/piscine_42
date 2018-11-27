/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_copy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thile <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 01:25:51 by thile             #+#    #+#             */
/*   Updated: 2018/07/22 01:35:51 by thile            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	else
		return (0);
}

int		ft_get_nb_words(char *str)
{
	int	nwords;
	int i;

	i = 0;
	nwords = 0;
	while (str[i])
	{
		while (ft_is_space(str[i]))
			i++;
		if (str[i] == '\0')
			return (nwords);
		nwords++;
		while (!ft_is_space(str[i]) && str[i])
			i++;
		if (!str[i])
			return (nwords);
	}
	return (nwords);
}

int		ft_len_word(char *str, int i)
{
	int count;

	count = 0;
	while (!ft_is_space(str[i]) && str[i])
	{
		count++;
		i++;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	if (!(tab = malloc(sizeof(char *) * (ft_get_nb_words(str) + 1))) || !tab)
		return (0);
	i = 0;
	j = 0;
	while (str[i] != 0)
	{
		while (str[i] && ft_is_space(str[i]))
			i++;
		if (str[i])
		{
			k = 0;
			if (!(tab[j] = malloc(sizeof(char) * (ft_len_word(str, i) + 1))))
				return (0);
			while (str[i] && !ft_is_space(str[i]))
				tab[j][k++] = str[i++];
			tab[j++][k] = 0;
		}
	}
	tab[j] = NULL;
	return (tab);
}
int main(int argc, char **argv)
{
//	char str[] = "   jfk wjjk jslss   fkjfsdf jfsdjlfsdf fajhslfs        	 ";
	char **tab;
	argc--;
	argc++;

//	printf("%d\n", ft_get_nb_words(argv[1]));
//	printf("%d\n", ft_len_word(str, 19));
	//	if (argc == 2)
	tab = ft_split_whitespaces(argv[1]);
	for (int i = 0; tab[i] != 0; i++)
		printf("%s\n", tab[i]);
	return 0;
}
