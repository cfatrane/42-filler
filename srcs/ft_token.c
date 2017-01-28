/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_token.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 11:00:03 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/28 20:19:48 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

void	ft_token(t_filler *filler)
{
	char	*line;
	int		i;

	i = 6;
	get_next_line(0, &line);
	filler->token.y = ft_atoi(&(line[i]));
	while (ft_isdigit(line[i]))
		i++;
	i++;
	filler->token.x = ft_atoi(&(line[i]));
	filler->token.map = (char**)malloc(sizeof(char*)
	* (filler->token.y + 1));
	i = 0;
	free(line);
	while (i < filler->token.y)
	{
		get_next_line(0, &(filler->token.map[i]));
		i++;
	}
	filler->token.map[i] = NULL;
}
