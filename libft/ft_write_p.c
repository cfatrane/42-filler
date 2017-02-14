/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_pointor.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 16:26:54 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/14 13:00:19 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_write_size_p(t_env *arg, void *pointor)
{
	if (arg->flag[LESS])
	{
		ft_putstr("0x");
		ft_print_hex((size_t)pointor);
		ft_write_flag_spaces(arg->size, arg->len);
		return (arg->size);
	}
	if (arg->flag[ZERO])
	{
		ft_putstr("0x");
		if (arg->dot)
			return (2);
		ft_write_flag_zero(arg->size, arg->len);
		ft_print_hex((size_t)pointor);
	}
	else
	{
		ft_write_flag_spaces(arg->size, arg->len);
		ft_putstr("0x");
		ft_print_hex((size_t)pointor);
	}
	return (arg->size);
}

static int	ft_write_justify_prc_p(t_env *arg, void *pointor)
{
	if (arg->size > arg->precision)
	{
		ft_putstr("0x");
		ft_write_flag_zero(arg->precision, arg->len - 2);
		ft_print_hex((size_t)pointor);
		ft_write_flag_spaces(arg->size, arg->precision + 2);
		return (arg->size);
	}
	else
	{
		ft_putstr("0x");
		ft_write_flag_zero(arg->precision, arg->len);
		ft_print_hex((size_t)pointor);
		return (arg->precision);
	}
	return (0);
}

static int	ft_write_prc_p(t_env *arg, void *pointor)
{
	if (arg->size > arg->precision)
	{
		ft_write_flag_spaces(arg->size, arg->precision + 2);
		ft_putstr("0x");
		ft_write_flag_zero(arg->precision, arg->len - 2);
		ft_print_hex((size_t)pointor);
		return (arg->size);
	}
	else
	{
		ft_putstr("0x");
		ft_write_flag_zero(arg->precision, arg->len - 2);
		ft_print_hex((size_t)pointor);
		return (arg->precision + 2);
	}
	return (0);
}

static int	ft_write_prc_zero_p(t_env *arg)
{
	if (!arg->size)
	{
		ft_putstr("0x");
		return (2);
	}
	else
	{
		ft_write_flag_spaces(arg->size, arg->precision + 2);
		ft_putstr("0x");
		return (arg->size);
	}
	return (0);
}

int			ft_write_p(t_env *arg, va_list ap)
{
	void	*pointor;

	pointor = va_arg(ap, void *);
	arg->len = ft_nbrlen_hexa((unsigned long long)pointor) + 2;
	if (pointor == 0 && arg->dot == 1 && arg->precision == 0)
		return (ft_write_prc_zero_p(arg));
	if (arg->size > arg->len && arg->precision <= arg->len)
		return (ft_write_size_p(arg, pointor));
	if (arg->precision >= arg->len && !arg->flag[LESS])
		return (ft_write_prc_p(arg, pointor));
	if (arg->precision >= arg->len && arg->flag[LESS])
		return (ft_write_justify_prc_p(arg, pointor));
	ft_putstr("0x");
	ft_print_hex((size_t)pointor);
	return (arg->len);
}
