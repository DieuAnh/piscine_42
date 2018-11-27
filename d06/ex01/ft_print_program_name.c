/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thile <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 14:33:58 by thile             #+#    #+#             */
/*   Updated: 2018/07/23 01:22:28 by thile            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int i;

	i = 0;
	argc = 0;
	while (argv[argc][i] != '\0')
	{
		ft_putchar(argv[argc][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
