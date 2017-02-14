/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 15:20:36 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/14 12:58:05 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_parse_size(t_env *arg)
{
	char	*str;
	int		i;

	i = 0;
	while (ft_isdigit(arg->str[i]))
		i++;
	if (!(str = ft_strnew(i)))
		return ;
	i = 0;
	while (ft_isdigit(arg->str[arg->cur]))
	{
		str[i] = arg->str[arg->cur];
		arg->cur++;
		i++;
	}
	str[i] = '\0';
	arg->size = ft_atoi(str);
	free(str);
}
