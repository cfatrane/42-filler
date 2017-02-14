/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_modif.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 13:56:35 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/14 12:57:31 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_parse_modif(t_env *arg)
{
	if (arg->str[arg->cur] == 'h' && arg->str[arg->cur + 1] == 'h')
	{
		arg->modif[HH] = 1;
		arg->cur++;
	}
	else if (arg->str[arg->cur] == 'h')
		arg->modif[H] = 1;
	else if (arg->str[arg->cur] == 'l' && arg->str[arg->cur + 1] == 'l')
	{
		arg->modif[LL] = 1L;
		arg->cur++;
	}
	else if (arg->str[arg->cur] == 'l')
		arg->modif[L] = 1;
	else if (arg->str[arg->cur] == 'j')
		arg->modif[J] = 1;
	else if (arg->str[arg->cur] == 'z')
		arg->modif[Z] = 1;
	arg->cur++;
}
