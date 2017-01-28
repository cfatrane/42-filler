/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 10:30:11 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/26 12:42:11 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	main(void)
{
	t_env	*env;

	env = ft_memalloc(sizeof(t_env));
	ft_info_user(env);
	env->ok = 1;
	while (env->ok == 1)
	{
		ft_map(env);
		ft_token(env);
		env->ok = ft_filler(env);
		free_tab(env->token.map);
	}
	free_tab(env->map.map);
	return (0);
}
