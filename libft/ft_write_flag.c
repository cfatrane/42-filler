/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 14:05:09 by cfatrane          #+#    #+#             */
/*   Updated: 2017/02/14 12:07:12 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_write_flag_diese(t_env *arg)
{
	if (arg->flag[DIESE])
	{
		if (arg->conv == 'x')
		{
			ft_putstr("0x");
			return (2);
		}
		else if (arg->conv == 'X')
		{
			ft_putstr("0X");
			return (2);
		}
		else if (arg->conv == 'o' || arg->conv == 'O')
		{
			ft_putchar('0');
			return (1);
		}
		else if (arg->conv == 'b')
		{
			ft_putstr("0x");
			return (2);
		}
	}
	return (0);
}

int	ft_write_flag_more(t_env *arg)
{
	if (arg->flag[MORE])
	{
		ft_putchar('+');
		return (1);
	}
	return (0);
}

int	ft_write_flag_space(t_env *arg)
{
	if (arg->flag[SPACE] == 1 && arg->flag[MORE] != 1)
	{
		ft_putchar(' ');
		return (1);
	}
	return (0);
}

int	ft_write_flag_zero(int start, int end)
{
	int i;

	i = 0;
	while (i < start - end)
	{
		ft_putchar('0');
		i++;
	}
	return (i);
}

int	ft_write_flag_spaces(int start, int end)
{
	int i;

	i = 0;
	while (i < start - end)
	{
		ft_putchar(' ');
		i++;
	}
	return (i);
}
