/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instructions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebakchic <ebakchic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:12:32 by ebakchic          #+#    #+#             */
/*   Updated: 2023/01/03 23:31:35 by ebakchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(int *sa)
{
	int	tmp;

	tmp = sa[0];
	sa[0] = sa[1];
	sa[1] = tmp;
	write(1, "sa\n", 3);
}

void	ft_rra(int *ac, int *sa)
{
	int	tmp;
	int	i;

	tmp = sa[*ac - 2];
	i = *ac - 2;
	while (i > 0)
	{
		sa[i] = sa[i - 1];
		i--;
	}
	sa[0] = tmp;
	write(1, "rra\n", 4);
}

void	ft_ra(int *ac, int *sa)
{
	int	tmp;
	int	i;

	tmp = sa[0];
	i = 0;
	while (i < *ac - 2)
	{
		sa[i] = sa[i + 1];
		i++;
	}
	sa[*ac - 2] = tmp;
	write(1, "ra\n", 3);
}

void	ft_pb(int *size, int *ac, int *sa, int *sb)
{
	int	i;

	i = *size;
	while (i > 0)
	{
		sb[i] = sb[i - 1];
		i--;
	}
	sb[0] = sa[0];
	*size = *size + 1;
	while (i < *ac - 2)
	{
		sa[i] = sa[i + 1];
		i++;
	}
	*ac = *ac - 1;
	write(1, "pb\n", 3);
}

void	ft_instructions(int i, t_list s)
{
	if (i == 0)
		ft_sa(s.sa);
	else if (i == 1)
		ft_rra(s.ac, s.sa);
	else if (i == 2)
		ft_ra(s.ac, s.sa);
	else if (i == 3)
		ft_pb(s.size, s.ac, s.sa, s.sb);
	else
		ft_instructions2(i, s);
}
