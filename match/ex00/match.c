/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thile <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 11:07:36 by thile             #+#    #+#             */
/*   Updated: 2018/07/15 23:42:52 by thile            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*equivalent(char *s2)
{
	int i;
	int size;
	int count;

	i = 0;
	count = 0;
	size = 0;
	while (*s2 != '\0')
		size++;
	while (size > 0)
	{
		if (s2[size - 1] == '*')
			count++;
		else
			break ;
		size--;
	}
	i = size - count + 1;
	while (i < size)
	{
		s2[i] = '\0';
		i++;
	}
	return (s2);
}

int		match(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	if (*s1 == *s2)
		return (match(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (match(s1 + 1, s2) || match(s1, s2 + 1));
	return (0);
}
