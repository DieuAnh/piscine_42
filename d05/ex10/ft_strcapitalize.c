/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thile <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 15:32:58 by thile             #+#    #+#             */
/*   Updated: 2018/07/18 18:19:10 by thile            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	i = 0;
	if (str[i] >= 97 && str[i] <= 122)
	{
		str[i] -= 32;
		i++;
	}
	while (str[i] != 0)
	{
		if (str[i] <= 47 || (str[i] >= 91 && str[i] <= 96)
		|| (str[i] >= 123) || (str[i] >= 58 && str[i] <= 64))
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
				str[i + 1] -= 32;
		i++;
	}
	str[i] = '\0';
	return (str);
}
