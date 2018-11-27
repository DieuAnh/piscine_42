/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thile <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 11:39:51 by thile             #+#    #+#             */
/*   Updated: 2018/07/24 14:08:03 by thile            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# define MSG_DIV_BY_ZERO "Stop : division by zero\n"
# define MSG_MOD_BY_ZERO "Stop : modulo by zero\n"

void	ft_putchar(char c);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_calculate(int value1, char op, int value2);

#endif
