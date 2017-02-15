/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 18:29:36 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/15 16:08:44 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	main(void)
{
	t_filler *env;

	if (!(env = ft_memalloc(sizeof(t_filler))))
		return (-1);
	info_user(env);
	while (69)
	{
		filler(env);
		if (env->fin == 1)
			break ;
	}
	return (0);
}
