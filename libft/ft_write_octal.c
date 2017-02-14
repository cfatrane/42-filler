/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_octal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 14:39:41 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/14 12:59:39 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_write_size_octal(t_env *arg, size_t nbr)
{
	if (arg->flag[LESS])
	{
		arg->len += ft_write_flag_diese(arg);
		ft_printf_putnbr_uns(arg, nbr);
		ft_write_flag_spaces(arg->size, arg->len);
		return (arg->size);
	}
	if (arg->flag[DIESE])
		arg->len++;
	if (arg->flag[ZERO] && !arg->dot)
		ft_write_flag_zero(arg->size, arg->len);
	else
		ft_write_flag_spaces(arg->size, arg->len);
	ft_write_flag_diese(arg);
	ft_printf_putnbr_uns(arg, nbr);
	return (arg->size);
}

static int	ft_write_justify_prc_octal(t_env *arg, size_t nbr)
{
	if (arg->size > arg->precision)
	{
		ft_write_flag_zero(arg->precision, arg->len);
		ft_printf_putnbr_uns(arg, nbr);
		ft_write_flag_spaces(arg->size, arg->precision);
		return (arg->size);
	}
	else
	{
		ft_write_flag_zero(arg->precision, arg->len);
		ft_printf_putnbr_uns(arg, nbr);
		return (arg->precision);
	}
	return (0);
}

static int	ft_write_prc_octal(t_env *arg, size_t nbr)
{
	if (arg->size > arg->precision)
	{
		ft_write_flag_spaces(arg->size, arg->precision);
		ft_write_flag_zero(arg->precision, arg->len);
		ft_printf_putnbr_uns(arg, nbr);
		return (arg->size);
	}
	else
	{
		ft_write_flag_zero(arg->precision, arg->len);
		ft_printf_putnbr_uns(arg, nbr);
		return (arg->precision);
	}
	return (0);
}

static int	ft_write_prc_zero_octal(t_env *arg)
{
	if (!arg->flag[DIESE])
	{
		if (!arg->size)
			return (0);
		ft_write_flag_spaces(arg->size, arg->precision);
		return (arg->size);
	}
	else if (arg->flag[DIESE])
	{
		if (!arg->size)
			return (ft_write_flag_diese(arg));
		if (arg->flag[LESS])
		{
			ft_putchar('0');
			ft_write_flag_spaces(arg->size, arg->precision + 1);
		}
		else
		{
			ft_write_flag_spaces(arg->size, arg->precision + 1);
			ft_putchar('0');
		}
		return (arg->size);
	}
	return (0);
}

int			ft_write_octal(t_env *arg, size_t nbr)
{
	arg->len = ft_printf_nbrlen_uns(arg, nbr);
	if (nbr == 0 && arg->dot && arg->precision == 0)
		return (ft_write_prc_zero_octal(arg));
	if (nbr > 0 && arg->flag[DIESE] && !arg->flag[LESS] &&
			arg->size < arg->len && arg->precision == 0)
	{
		arg->len += ft_write_flag_diese(arg);
		ft_printf_putnbr_uns(arg, nbr);
		return (arg->len);
	}
	if (arg->size > arg->len && arg->precision <= arg->len)
		return (ft_write_size_octal(arg, nbr));
	if (arg->precision >= arg->len && !arg->flag[LESS])
		return (ft_write_prc_octal(arg, nbr));
	if (arg->precision >= arg->len && arg->flag[LESS])
		return (ft_write_justify_prc_octal(arg, nbr));
	ft_printf_putnbr_uns(arg, nbr);
	return (arg->len);
}
