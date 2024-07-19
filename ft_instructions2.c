/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instructions2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebakchic <ebakchic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 23:21:32 by ebakchic          #+#    #+#             */
/*   Updated: 2023/01/04 00:13:29 by ebakchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(int *size, int *ac, int *sa, int *sb)
{
	int	i;

	i = *ac - 1;
	while (i > 0)
	{
		sa[i] = sa[i - 1];
		i--;
	}
	sa[0] = sb[0];
	*ac = *ac + 1;
	while (i < *size)
	{
		sb[i] = sb[i + 1];
		i++;
	}
	*size = *size - 1;
	write(1, "pa\n", 3);
}

void	ft_rb(int *size, int *sb)
{
	int	tmp;
	int	i;

	tmp = sb[0];
	i = 0;
	while (i < *size - 1)
	{
		sb[i] = sb[i + 1];
		i++;
	}
	sb[*size - 1] = tmp;
	write(1, "rb\n", 3);
}

void	ft_rrb(int *size, int *sb)
{
	int	tmp;
	int	i;

	tmp = sb[*size - 1];
	i = *size - 1;
	while (i > 0)
	{
		sb[i] = sb[i - 1];
		i--;
	}
	sb[0] = tmp;
	write(1, "rrb\n", 4);
}

void	ft_instructions2(int i, t_list s)
{
	if (i == 4)
		ft_pa(s.size, s.ac, s.sa, s.sb);
	else if (i == 5)
		ft_rb(s.size, s.sb);
	else if (i == 6)
		ft_rrb(s.size, s.sb);
}
