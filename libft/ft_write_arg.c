/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 13:36:40 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/14 12:07:17 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_write_arg_sgn(t_env *arg, va_list ap)
{
	if (arg->conv == 'S')
		return (ft_write_ws(arg, ap));
	else if (arg->conv == 's')
		return (ft_write_s(arg, ap));
	else if (arg->conv == 'D' || arg->conv == 'd' || arg->conv == 'i')
		return (ft_caste_sgn(arg, ap));
	else if (arg->conv == 'C')
		return (ft_write_wc(arg, ap));
	else if (arg->conv == 'c')
		return (ft_write_c(arg, ap));
	return (0);
}

int	ft_write_arg_uns(t_env *arg, va_list ap)
{
	if (arg->conv == 'p')
		return (ft_write_p(arg, ap));
	else if (arg->conv == 'O' || arg->conv == 'o' ||
			arg->conv == 'U' || arg->conv == 'u' ||
			arg->conv == 'X' || arg->conv == 'x' || arg->conv == 'b')
		return (ft_caste_uns(arg, ap));
	return (0);
}

int	ft_write_arg(t_env *arg, va_list ap)
{
	if (arg->conv == 's' || arg->conv == 'S' || arg->conv == 'D' ||
			arg->conv == 'd' || arg->conv == 'i' || arg->conv == 'C' ||
			arg->conv == 'c')
		return (ft_write_arg_sgn(arg, ap));
	else if (arg->conv == 'p' || arg->conv == 'O' || arg->conv == 'o' ||
			arg->conv == 'U' || arg->conv == 'u' || arg->conv == 'X' ||
			arg->conv == 'x' || arg->conv == 'b')
		return (ft_write_arg_uns(arg, ap));
	else
		return (ft_write_non_valid(arg));
	return (0);
}
