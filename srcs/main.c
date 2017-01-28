/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 10:30:11 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/28 20:20:29 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	main(void)
{
	t_filler	*filler;

	filler = ft_memalloc(sizeof(t_filler));
	ft_info_user(filler);
	filler->ok = 1;
	while (filler->ok == 1)
	{
		ft_map(filler);
		ft_token(filler);
		filler->ok = ft_filler(filler);
		free_tab(filler->token.map);
	}
	free_tab(filler->map.map);
	return (0);
}
