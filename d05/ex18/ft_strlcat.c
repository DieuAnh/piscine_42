/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thile <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 21:11:35 by thile             #+#    #+#             */
/*   Updated: 2018/07/16 19:13:59 by thile            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int result;

	i = 0;
	j = 0;
	result = 0;
	while (dest[i] != 0)
		i++;
	while (src[j] != 0)
		j++;
	if (j > size)
		result = i + size;
	else
		result = i + j;
	j = 0;
	while ((dest[i] = src[j]) != '\0' && j < size - 1)
		j++;
	return (result);
}
