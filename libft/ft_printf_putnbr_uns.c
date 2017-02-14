/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putnbr_uns.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 10:40:57 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/14 12:58:39 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printf_putnbr_uns_octal(t_env *arg, size_t nbr)
{
	if (arg->modif[HH] == 1 && arg->conv != 'O')
		ft_putnbr_base((unsigned char)nbr, OCTAL);
	else if (arg->modif[H] == 1 && arg->conv != 'O')
		ft_putnbr_base((unsigned short int)nbr, OCTAL);
	else if (arg->modif[LL] == 1)
		ft_putnbr_base(nbr, OCTAL);
	else if (arg->modif[L] == 1 || arg->conv == 'O')
		ft_putnbr_base((size_t)nbr, OCTAL);
	else if (arg->modif[J] == 1)
		ft_putnbr_base((uintmax_t)nbr, OCTAL);
	else if (arg->modif[Z] == 1)
		ft_putnbr_base((size_t)nbr, OCTAL);
	else
		ft_putnbr_base(nbr, OCTAL);
}

void	ft_printf_putnbr_uns_uns(t_env *arg, size_t nbr)
{
	if (arg->modif[HH] == 1 && arg->conv != 'U')
		ft_putnbr((unsigned char)nbr);
	else if (arg->modif[H] == 1 && arg->conv != 'U')
		ft_putnbr((unsigned short int)nbr);
	else if (arg->modif[LL] == 1)
		ft_putnbr_uns(nbr);
	else if (arg->modif[L] == 1 || arg->conv == 'U')
		ft_putnbr_uns((size_t)nbr);
	else if (arg->modif[J] == 1)
		ft_putnbr_uns((uintmax_t)nbr);
	else if (arg->modif[Z] == 1)
		ft_putnbr_uns((size_t)nbr);
	else
		ft_putnbr_uns(nbr);
}

void	ft_printf_putnbr_uns_hexa_maj(t_env *arg, size_t nbr)
{
	if (arg->modif[HH] == 1)
		ft_putnbr_base((unsigned char)nbr, MAJ_HEXA);
	else if (arg->modif[H] == 1)
		ft_putnbr_base((unsigned short)nbr, MAJ_HEXA);
	else if (arg->modif[LL] == 1)
		ft_putnbr_base(nbr, MAJ_HEXA);
	else if (arg->modif[L] == 1)
		ft_putnbr_base((unsigned long int)nbr, MAJ_HEXA);
	else if (arg->modif[J] == 1)
		ft_putnbr_base((uintmax_t)nbr, MAJ_HEXA);
	else if (arg->modif[Z] == 1)
		ft_putnbr_base((size_t)nbr, MAJ_HEXA);
	else
		ft_putnbr_base(nbr, MAJ_HEXA);
}

void	ft_printf_putnbr_uns_hexa_min(t_env *arg, size_t nbr)
{
	if (arg->modif[HH] == 1)
		ft_putnbr_base((unsigned char)nbr, MIN_HEXA);
	else if (arg->modif[H] == 1)
		ft_putnbr_base((unsigned short)nbr, MIN_HEXA);
	else if (arg->modif[LL] == 1)
		ft_putnbr_base(nbr, MIN_HEXA);
	else if (arg->modif[L] == 1)
		ft_putnbr_base((unsigned long int)nbr, MIN_HEXA);
	else if (arg->modif[J] == 1)
		ft_putnbr_base((uintmax_t)nbr, MIN_HEXA);
	else if (arg->modif[Z] == 1)
		ft_putnbr_base((size_t)nbr, MIN_HEXA);
	else
		ft_putnbr_base(nbr, MIN_HEXA);
}

void	ft_printf_putnbr_uns(t_env *arg, size_t nbr)
{
	if (arg->conv == 'O' || arg->conv == 'o')
		return (ft_printf_putnbr_uns_octal(arg, nbr));
	if (arg->conv == 'U' || arg->conv == 'u')
		return (ft_printf_putnbr_uns_uns(arg, nbr));
	if (arg->conv == 'X')
		return (ft_printf_putnbr_uns_hexa_maj(arg, nbr));
	if (arg->conv == 'x')
		return (ft_printf_putnbr_uns_hexa_min(arg, nbr));
}
