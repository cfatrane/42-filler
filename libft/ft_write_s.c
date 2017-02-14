/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 13:36:35 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/14 13:00:30 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_write_size_s(t_env *arg, char *str)
{
	if (arg->flag[LESS])
	{
		ft_printf_putstr(str);
		ft_write_flag_spaces(arg->size, arg->len);
		return (arg->size);
	}
	if (arg->flag[ZERO])
		ft_write_flag_zero(arg->size, arg->len);
	else
		ft_write_flag_spaces(arg->size, arg->len);
	ft_printf_putstr(str);
	return (arg->size);
}

static int	ft_write_justify_prc_s(t_env *arg, char *str)
{
	if (arg->size > arg->precision && arg->precision < arg->len)
	{
		ft_putstr_n(str, arg->precision);
		ft_write_flag_spaces(arg->size, arg->precision);
		return (arg->size);
	}
	else
	{
		ft_putstr_n(str, arg->precision);
		return (ft_nbcmp_min(arg->precision, arg->len));
	}
	return (0);
}

static int	ft_write_prc_s(t_env *arg, char *str)
{
	if (arg->size > arg->precision && arg->precision)
	{
		if (arg->flag[ZERO])
			ft_write_flag_zero(arg->size, arg->precision);
		else
			ft_write_flag_spaces(arg->size, arg->precision);
		ft_putstr_n(str, arg->precision);
		return (arg->size);
	}
	else if (arg->precision < arg->len)
		ft_putstr_n(str, arg->precision);
	return (ft_nbcmp_min(arg->precision, arg->len));
}

static int	ft_write_prc_zero_s(t_env *arg)
{
	if (!arg->size)
		return (0);
	else
	{
		if (arg->flag[ZERO])
			ft_write_flag_zero(arg->size, 0);
		else
			ft_write_flag_spaces(arg->size, 0);
		return (arg->size);
	}
}

int			ft_write_s(t_env *arg, va_list ap)
{
	char	*str;

	if (arg->modif[L] == 1)
		return (ft_write_ws(arg, ap));
	else
		str = va_arg(ap, char *);
	arg->len = ft_printf_strlen(str);
	if (arg->dot == 1 && arg->precision == 0)
		return (ft_write_prc_zero_s(arg));
	if (arg->size > arg->len &&
			(arg->precision >= arg->len || !arg->dot))
		return (ft_write_size_s(arg, str));
	if (arg->dot && (arg->size > arg->len
				|| arg->precision < arg->len) && !arg->flag[LESS])
		return (ft_write_prc_s(arg, str));
	if (arg->dot && (arg->size > arg->len
				|| arg->precision < arg->len) && arg->flag[LESS])
		return (ft_write_justify_prc_s(arg, str));
	ft_printf_putstr(str);
	return (arg->len);
}
