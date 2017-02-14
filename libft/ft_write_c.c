/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 13:36:16 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/14 12:07:13 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_write_justify_size_c(t_env *arg, char c)
{
	ft_putchar(c);
	ft_write_flag_spaces(arg->size, 1);
	return (arg->size);
}

static int	ft_write_size_c(t_env *arg, char c)
{
	if (arg->flag[LESS])
		return (ft_write_justify_size_c(arg, c));
	else
	{
		if (arg->flag[ZERO])
			arg->len += ft_write_flag_zero(arg->size, arg->len);
		else
			ft_write_flag_spaces(arg->size, 1);
		ft_putchar(c);
	}
	return (arg->size);
}

int			ft_write_c(t_env *arg, va_list ap)
{
	unsigned char	c;

	if (arg->modif[L] == 1)
		return (ft_write_wc(arg, ap));
	else
		c = va_arg(ap, int);
	arg->len = 1;
	if (arg->size > arg->len && (!arg->dot || arg->dot))
		return (ft_write_size_c(arg, c));
	ft_putchar(c);
	return (1);
}
