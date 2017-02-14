/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_conv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 13:36:08 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/14 12:06:23 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_parse_conv(t_env *arg)
{
	char	*tmp;
	char	*non_val;
	int		i;

	i = 0;
	tmp = CONVERSION;
	non_val = NON_VALID;
	while (tmp[i] != '\0')
	{
		if (tmp[i] == arg->str[arg->cur])
			arg->conv = tmp[i];
		i++;
	}
	i = 0;
	while (non_val[i] != '\0')
	{
		if (non_val[i] == arg->str[arg->cur])
			arg->conv = non_val[i];
		i++;
	}
	arg->cur++;
}
