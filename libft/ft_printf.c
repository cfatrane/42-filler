/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 13:01:55 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/14 12:01:00 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *format, ...)
{
	size_t	ret;
	t_env	arg;
	va_list	ap;

	if (!format)
		return (-1);
	ft_bzero(&arg, sizeof(t_env));
	arg.str = format;
	va_start(ap, format);
	arg.ret = ft_reader(&arg, ap);
	if (arg.ret == 1)
		ret = -1;
	va_end(ap);
	ret = arg.ret;
	ft_bzero(&arg, sizeof(t_env));
	return (ret);
}
