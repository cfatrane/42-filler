/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbrlen_uns.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 18:41:27 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/14 12:58:23 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf_nbrlen_uns_uns(t_env *arg, size_t nbr)
{
	if (arg->conv == 'U')
		return (ft_nbrlen_uns((unsigned long int)nbr));
	else if (arg->modif[HH] == 1)
		return (ft_nbrlen_uns((unsigned char)nbr));
	else if (arg->modif[H] == 1)
		return (ft_nbrlen_uns((unsigned short)nbr));
	else if (arg->modif[LL] == 1)
		return (ft_nbrlen_uns((size_t)nbr));
	else if (arg->modif[L] == 1)
		return (ft_nbrlen_uns((unsigned long int)nbr));
	else if (arg->modif[J] == 1)
		return (ft_nbrlen_uns((uintmax_t)nbr));
	else if (arg->modif[Z] == 1)
		return (ft_nbrlen_uns((size_t)nbr));
	else
		return (ft_nbrlen_uns((unsigned int)nbr));
}

int	ft_printf_nbrlen_uns_octal(t_env *arg, size_t nbr)
{
	if (arg->conv == 'O')
		return (ft_nbrlen_octal((unsigned long int)nbr));
	else if (arg->modif[HH] == 1)
		return (ft_nbrlen_octal((unsigned char)nbr));
	else if (arg->modif[H] == 1)
		return (ft_nbrlen_octal((unsigned short)nbr));
	else if (arg->modif[LL] == 1)
		return (ft_nbrlen_octal((size_t)nbr));
	else if (arg->modif[L] == 1)
		return (ft_nbrlen_octal((unsigned long int)nbr));
	else if (arg->modif[J] == 1)
		return (ft_nbrlen_octal((uintmax_t)nbr));
	else if (arg->modif[Z] == 1)
		return (ft_nbrlen_octal((size_t)nbr));
	else
		return (ft_nbrlen_octal((unsigned int)nbr));
	return (0);
}

int	ft_printf_nbrlen_uns_hexa(t_env *arg, size_t nbr)
{
	if (arg->modif[HH] == 1)
		return (ft_nbrlen_hexa((unsigned char)nbr));
	else if (arg->modif[H] == 1)
		return (ft_nbrlen_hexa((unsigned short)nbr));
	else if (arg->modif[LL] == 1)
		return (ft_nbrlen_hexa((size_t)nbr));
	else if (arg->modif[L] == 1)
		return (ft_nbrlen_hexa((unsigned long int)nbr));
	else if (arg->modif[J] == 1)
		return (ft_nbrlen_hexa((uintmax_t)nbr));
	else if (arg->modif[Z] == 1)
		return (ft_nbrlen_hexa((size_t)nbr));
	else
		return (ft_nbrlen_hexa((unsigned int)nbr));
	return (0);
}

int	ft_printf_nbrlen_uns(t_env *arg, size_t nbr)
{
	if (arg->conv == 'o' || arg->conv == 'O')
		return (ft_printf_nbrlen_uns_octal(arg, nbr));
	else if (arg->conv == 'u' || arg->conv == 'U')
		return (ft_printf_nbrlen_uns_uns(arg, nbr));
	else if (arg->conv == 'x' || arg->conv == 'X')
		return (ft_printf_nbrlen_uns_hexa(arg, nbr));
	return (0);
}
