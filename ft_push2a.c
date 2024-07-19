/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push2a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebakchic <ebakchic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:08:27 by ebakchic          #+#    #+#             */
/*   Updated: 2022/08/30 16:24:21 by ebakchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_chrmax2(t_list s)
{
	int	i;
	int	j;
	int	tmp;

	tmp = s.sb[0];
	j = 0;
	i = 0;
	while (i < *(s.size))
	{
		if (tmp < s.sb[i])
		{
			tmp = s.sb[i];
			j = i;
		}
		i++;
	}
	return (j);
}

void	ft_push2a(t_list s, int *nums)
{
	int	x;

	while (*(s.size) != 0)
	{
		x = ft_chrmax2(s);
		if (x < 16)
		{
			while (x != 0)
			{
				ft_instructions(5, s);
				x--;
			}
			ft_instructions(4, s);
		}
		else
		{
			while (x < *(s.size))
			{
				ft_instructions(6, s);
				x++;
			}
			ft_instructions(4, s);
		}
	}
}
