/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 17:30:18 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/23 18:38:08 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	main(void)
{
	t_env *env;

	if (!(env = ft_memalloc(sizeof(t_env))))
		return (-1);
	ft_info(env);
	while (69)
	{
		ft_filler(env);
	}
	return (0);
}
