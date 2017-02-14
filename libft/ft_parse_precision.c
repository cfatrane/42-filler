/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_precision.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 17:22:52 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/14 12:57:44 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_take_precision(t_env *arg)
{
	char	*str;
	int		i;

	i = 0;
	while (ft_isdigit(arg->str[i]) && arg->str[i] != '\0')
		i++;
	if (!(str = ft_strnew(i)))
		return ;
	i = 0;
	while (ft_isdigit(arg->str[arg->cur]) && arg->str[i] != '\0')
	{
		str[i] = arg->str[arg->cur];
		arg->cur++;
		i++;
	}
	str[i] = '\0';
	arg->precision = ft_atoi(str);
	free(str);
}

void	ft_parse_precision(t_env *arg)
{
	int		i;

	i = 0;
	arg->dot = 1;
	if (arg->str[arg->cur] == '.')
	{
		arg->dot = 1;
		arg->cur++;
	}
	else
	{
		arg->dot = 0;
		return ;
	}
	if (arg->str[arg->cur] == '-' || !(ft_isdigit(arg->str[arg->cur])))
	{
		arg->precision = 0;
		return ;
	}
	ft_take_precision(arg);
}
