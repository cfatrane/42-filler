/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_signed_int_neg.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 19:40:56 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/14 13:00:40 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_write_justify_size_sgn(t_env *arg, ssize_t nbr)
{
	ft_putnbr_lng(nbr);
	arg->len += ft_write_flag_spaces(arg->size, arg->len);
	return (arg->size);
}

static int	ft_write_size_sgn(t_env *arg, ssize_t nbr)
{
	if (arg->flag[ZERO])
	{
		ft_putchar('-');
		arg->len += ft_write_flag_zero(arg->size, arg->len);
	}
	else
		ft_write_flag_spaces(arg->size, arg->len);
	if (arg->flag[ZERO])
		ft_putnbr_lng(ft_abs(nbr));
	else
		ft_putnbr_lng(nbr);
	return (ft_nbcmp_max(arg->len, arg->size));
}

static int	ft_write_justify_prc_sgn(t_env *arg, ssize_t nbr)
{
	ft_putchar('-');
	ft_write_flag_zero(arg->precision, arg->len + 1);
	ft_putnbr_lng(ft_abs(nbr));
	return (ft_nbcmp_max(arg->precision, arg->len));
}

static int	ft_write_prc_sgn(t_env *arg, ssize_t nbr)
{
	if (arg->size > arg->precision)
	{
		ft_write_flag_spaces(arg->size, arg->precision + 1);
		ft_putchar('-');
		ft_write_flag_zero(arg->precision, arg->len - 1);
		ft_putnbr_lng(ft_abs(nbr));
		return (arg->size);
	}
	else
	{
		ft_putchar('-');
		arg->len += ft_write_flag_zero(arg->precision, arg->len - 1);
		ft_putnbr_lng(ft_abs(nbr));
		return (ft_nbcmp_max(arg->len, arg->precision));
	}
	return (0);
}

int			ft_write_sgn_neg(t_env *arg, ssize_t nbr)
{
	if (arg->size > arg->len && arg->precision <= arg->len &&
			!arg->flag[LESS])
		return (ft_write_size_sgn(arg, nbr));
	if (arg->size > arg->len && arg->precision <= arg->len &&
			arg->flag[LESS])
		return (ft_write_justify_size_sgn(arg, nbr));
	if (arg->precision >= arg->len && !arg->flag[LESS])
		return (ft_write_prc_sgn(arg, nbr));
	else if (arg->precision >= arg->len && arg->flag[LESS])
		return (ft_write_justify_prc_sgn(arg, nbr));
	ft_putnbr_lng(nbr);
	return (arg->len);
}
