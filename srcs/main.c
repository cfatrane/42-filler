/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 17:30:18 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/21 17:53:28 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	main(void)
{
	t_env *env;

	env = ft_memalloc(sizeof(t_env));
//	ft_bzero(&env, sizeof(t_env));
	ft_info(env);
	ft_take_map(env);
	ft_take_piece(env);
	ft_search_piece(env);
//	ft_bzero(&env, sizeof(t_env));
	return (0);
}
