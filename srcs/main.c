/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 17:30:18 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/22 17:10:30 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	main(void)
{
	t_env *env;

	if (!(env = ft_memalloc(sizeof(t_env))))
		return (-1);
	ft_bzero(env, sizeof(t_env));
	ft_info(env);
	while (1)
	{
		ft_take_map(env);
		ft_take_piece(env);
		ft_search_piece(env);
	}
	ft_bzero(env, sizeof(t_env));
	return (0);
}
