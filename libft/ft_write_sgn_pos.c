/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_signed_int_pos.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 19:34:25 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/14 13:00:50 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_write_justify_size_sgn(t_env *arg, ssize_t nbr)
{
	arg->len += ft_write_flag_more(arg);
	arg->len += ft_write_flag_space(arg);
	ft_putnbr_lng(nbr);
	ft_write_flag_spaces(arg->size, arg->len);
	return (arg->size);
}

static int	ft_write_size_sgn(t_env *arg, ssize_t nbr)
{
	if (arg->flag[ZERO] && !arg->dot)
	{
		arg->len += ft_write_flag_more(arg);
		arg->len += ft_write_flag_space(arg);
		arg->len += ft_write_flag_zero(arg->size, arg->len);
	}
	else
	{
		if (arg->flag[MORE])
			arg->len++;
		ft_write_flag_spaces(arg->size, arg->len);
		if (arg->flag[MORE])
			ft_putchar('+');
	}
	ft_putnbr_lng(nbr);
	return (ft_nbcmp_max(arg->len, arg->size));
}

static int	ft_write_justify_prc_sgn(t_env *arg, ssize_t nbr)
{
	int	lenfin;

	lenfin = 0;
	if (arg->size > arg->precision)
	{
		lenfin += ft_write_flag_more(arg);
		lenfin += ft_write_flag_space(arg);
		ft_write_flag_zero(arg->precision, arg->len);
		ft_putnbr_lng(nbr);
		ft_write_flag_spaces(arg->size, arg->precision + lenfin);
		return (arg->size);
	}
	else
	{
		lenfin += ft_write_flag_more(arg);
		lenfin += ft_write_flag_space(arg);
		lenfin += ft_write_flag_zero(arg->precision, arg->len);
		ft_putnbr_lng(nbr);
		arg->len += lenfin;
		return (ft_nbcmp_max(arg->len, arg->precision));
	}
	return (0);
}

static int	ft_write_prc_sgn(t_env *arg, ssize_t nbr)
{
	int		lenfin;

	lenfin = 0;
	if (arg->size > arg->precision)
	{
		if (arg->flag[MORE])
			lenfin = 1;
		ft_write_flag_spaces(arg->size, arg->precision + lenfin);
		if (arg->flag[MORE])
			ft_putchar('+');
		ft_write_flag_zero(arg->precision, arg->len);
		ft_putnbr_lng(nbr);
		return (arg->size);
	}
	else
	{
		lenfin += ft_write_flag_more(arg);
		lenfin += ft_write_flag_space(arg);
		lenfin += ft_write_flag_zero(arg->precision, arg->len);
		ft_putnbr_lng(nbr);
		arg->len += lenfin;
	}
	return (ft_nbcmp_max(arg->len, arg->precision));
}

int			ft_write_sgn_pos(t_env *arg, ssize_t nbr)
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
