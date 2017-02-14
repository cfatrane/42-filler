/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 14:37:42 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/14 12:03:39 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printf_putstr(char const *s)
{
	if (s == NULL)
		ft_putstr("(null)");
	if (s)
		ft_putstr(s);
}

void	ft_printf_putwstr(wchar_t const *s)
{
	if (s == NULL)
		ft_putstr("(null)");
	if (s)
		ft_putwstr(s);
}

int		ft_printf_strlen(const char *s)
{
	if (s == NULL)
		return (6);
	if (s)
		return (ft_strlen(s));
	return (0);
}

int		ft_printf_strwlen(const wchar_t *s)
{
	if (s == NULL)
		return (6);
	if (s)
		return (ft_strwlen(s));
	return (0);
}
