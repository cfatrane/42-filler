/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 11:37:45 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/14 12:07:15 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_write_size_b(t_env *arg, size_t nbr)
{
	if (arg->flag[LESS])
	{
		arg->len += ft_write_flag_diese(arg);
		ft_putnbr_base(nbr, BINARY);
		ft_write_flag_spaces(arg->size, arg->len);
		return (arg->size);
	}
	if (arg->flag[DIESE])
		arg->len += 2;
	if (arg->flag[ZERO] && !arg->dot)
	{
		ft_write_flag_diese(arg);
		ft_write_flag_zero(arg->size, arg->len);
		ft_putnbr_base(nbr, BINARY);
	}
	else
	{
		ft_write_flag_spaces(arg->size, arg->len);
		ft_write_flag_diese(arg);
		ft_putnbr_base(nbr, BINARY);
	}
	return (ft_nbcmp_max(arg->len, arg->size));
}

static int	ft_write_justify_prc_b(t_env *arg, size_t nbr)
{
	int		lenfin;

	lenfin = 0;
	if (arg->size > arg->precision)
	{
		lenfin += ft_write_flag_diese(arg);
		ft_write_flag_zero(arg->precision, arg->len);
		ft_putnbr_base(nbr, BINARY);
		ft_write_flag_spaces(arg->size, arg->precision + lenfin);
		return (arg->size);
	}
	else
	{
		lenfin += ft_write_flag_diese(arg);
		lenfin += ft_write_flag_zero(arg->precision, arg->len);
		ft_putnbr_base(nbr, BINARY);
		arg->len += lenfin;
		return (ft_nbcmp_max(arg->len, arg->precision));
	}
	return (0);
}

static int	ft_write_prc_b(t_env *arg, size_t nbr)
{
	int		lenfin;

	lenfin = 0;
	if (arg->size > arg->precision)
	{
		if (arg->flag[DIESE])
			lenfin = 2;
		ft_write_flag_spaces(arg->size, arg->precision + lenfin);
		ft_write_flag_diese(arg);
		ft_write_flag_zero(arg->precision, arg->len);
		ft_putnbr_base(nbr, BINARY);
		return (arg->size);
	}
	else
	{
		lenfin += ft_write_flag_diese(arg);
		lenfin += ft_write_flag_zero(arg->precision, arg->len);
		ft_putnbr_base(nbr, BINARY);
		arg->len += lenfin;
		return (ft_nbcmp_max(arg->len, arg->precision));
	}
	return (0);
}

static int	ft_write_prc_zero_b(t_env *arg, size_t nbr)
{
	if (nbr == 0 && !arg->size && arg->dot == 0)
	{
		ft_putchar('0');
		return (1);
	}
	else if (nbr == 0 && arg->dot == 1)
	{
		if (!arg->size)
			return (0);
		else
		{
			ft_write_flag_spaces(arg->size, arg->precision);
			return (arg->size);
		}
	}
	return (0);
}

int			ft_write_b(t_env *arg, size_t nbr)
{
	if (nbr == 0)
		return (ft_write_prc_zero_b(arg, nbr));
	arg->len = ft_nbrlen_binary(nbr);
	if (arg->flag[DIESE] && !arg->size && !arg->dot)
	{
		arg->len += ft_write_flag_diese(arg);
		ft_putnbr_base(nbr, BINARY);
		return (arg->len);
	}
	if (arg->size > arg->len && arg->precision <= arg->len)
		return (ft_write_size_b(arg, nbr));
	if (arg->precision >= arg->len && !arg->flag[LESS])
		return (ft_write_prc_b(arg, nbr));
	else if (arg->precision >= arg->len && arg->flag[LESS])
		return (ft_write_justify_prc_b(arg, nbr));
	ft_putnbr_base(nbr, BINARY);
	return (arg->len);
}
