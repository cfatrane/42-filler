/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 18:32:55 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/14 13:01:20 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_write_size_uns(t_env *arg, size_t nbr)
{
	if (arg->flag[LESS])
	{
		ft_printf_putnbr_uns(arg, nbr);
		ft_write_flag_spaces(arg->size, arg->len);
		return (arg->size);
	}
	if (arg->flag[ZERO] && !arg->dot)
		ft_write_flag_zero(arg->size, arg->len);
	else
		ft_write_flag_spaces(arg->size, arg->len);
	ft_printf_putnbr_uns(arg, nbr);
	return (arg->size);
}

static int	ft_write_justify_prc_uns(t_env *arg, size_t nbr)
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

static int	ft_write_prc_uns(t_env *arg, size_t nbr)
{
	if (arg->size > arg->precision)
	{
		ft_write_flag_spaces(arg->size, arg->precision);
		ft_write_flag_zero(arg->precision, arg->len);
		ft_putnbr_uns(nbr);
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

static int	ft_write_precision_zero_uns(t_env *arg)
{
	if (!arg->size)
		return (0);
	else
	{
		ft_write_flag_spaces(arg->size, arg->precision);
		return (arg->size);
	}
}

int			ft_write_uns(t_env *arg, size_t nbr)
{
	arg->len = ft_printf_nbrlen_uns(arg, nbr);
	if (nbr == 0 && arg->dot == 1)
		return (ft_write_precision_zero_uns(arg));
	if (arg->size > arg->len && arg->precision <= arg->len)
		return (ft_write_size_uns(arg, nbr));
	if (arg->precision >= arg->len && !arg->flag[LESS])
		return (ft_write_prc_uns(arg, nbr));
	if (arg->precision >= arg->len && arg->flag[LESS])
		return (ft_write_justify_prc_uns(arg, nbr));
	ft_printf_putnbr_uns(arg, nbr);
	return (arg->len);
}
