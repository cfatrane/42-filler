/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_non_valid.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 17:26:48 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/14 12:08:07 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_write_justify_size_non_valid(t_env *arg, char c)
{
	ft_putchar(c);
	ft_write_flag_spaces(arg->size, arg->len);
	return (arg->size);
}

static int	ft_write_size_non_valid(t_env *arg, char c)
{
	if (arg->flag[LESS])
		return (ft_write_justify_size_non_valid(arg, c));
	else
	{
		if (arg->flag[ZERO])
			ft_write_flag_zero(arg->size, arg->len);
		else
			ft_write_flag_spaces(arg->size, arg->len);
		ft_putchar(c);
	}
	return (arg->size);
}

int			ft_write_non_valid(t_env *arg)
{
	unsigned char	c;

	c = arg->conv;
	arg->len = 1;
	if (arg->size > 1 && (!arg->dot || arg->dot))
		return (ft_write_size_non_valid(arg, c));
	ft_putchar(c);
	return (1);
}
