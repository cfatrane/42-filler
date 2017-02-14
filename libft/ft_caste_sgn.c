/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_caste.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 15:07:15 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/14 12:05:50 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_caste_sgn(t_env *arg, va_list ap)
{
	ssize_t cast;

	cast = 0;
	if (arg->conv == 'D')
		return (ft_write_sgn(arg, va_arg(ap, signed long int)));
	if (arg->modif[Z] == 1)
		return (ft_write_sgn(arg, va_arg(ap, size_t)));
	if (arg->modif[LL] == 1)
		return (ft_write_sgn(arg, va_arg(ap, signed long long int)));
	if (arg->modif[J] == 1)
		return (ft_write_sgn(arg, va_arg(ap, intmax_t)));
	if (arg->modif[L] == 1)
		return (ft_write_sgn(arg, va_arg(ap, signed long int)));
	if (arg->modif[H] == 1)
	{
		cast = va_arg(ap, signed int);
		return (ft_write_sgn(arg, (short int)cast));
	}
	if (arg->modif[HH] == 1)
	{
		cast = va_arg(ap, signed int);
		return (ft_write_sgn(arg, (signed char)cast));
	}
	else
		return (ft_write_sgn(arg, va_arg(ap, signed int)));
}
