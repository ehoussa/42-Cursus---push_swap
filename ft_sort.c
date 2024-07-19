/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebakchic <ebakchic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:11:28 by ebakchic          #+#    #+#             */
/*   Updated: 2023/01/05 22:21:38 by ebakchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort3(t_list s)
{
	if (*(s.ac) - 1 == 2)
		ft_instructions(0, s);
	else if (*(s.ac) - 1 == 3)
	{
		if (s.sa[1] < s.sa[0] && s.sa[1] < s.sa[2] && s.sa[0] < s.sa[2])
			ft_instructions(0, s);
		else if (s.sa[0] > s.sa[1] && s.sa[0] > s.sa[2] && s.sa[1] > s.sa[2])
		{
			ft_instructions(0, s);
			ft_instructions(1, s);
		}
		else if (s.sa[1] < s.sa[0] && s.sa[1] < s.sa[2] && s.sa[0] > s.sa[2])
			ft_instructions(2, s);
		else if (s.sa[1] > s.sa[0] && s.sa[1] > s.sa[2] && s.sa[0] < s.sa[2])
		{
			ft_instructions(0, s);
			ft_instructions(2, s);
		}
		else if (s.sa[1] > s.sa[0] && s.sa[1] > s.sa[2] && s.sa[0] > s.sa[2])
			ft_instructions(1, s);
	}
}

void	ft_sort5_2(int i, int tmp, t_list s)
{
	if (s.sa[i] == tmp && i == 1)
	{
		ft_instructions(2, s);
		ft_instructions(3, s);
	}
	else if (s.sa[i] == tmp && i == 2)
	{
		ft_instructions(2, s);
		ft_instructions(2, s);
		ft_instructions(3, s);
	}
	else if (s.sa[i] == tmp && i == 3)
	{
		ft_instructions(1, s);
		ft_instructions(1, s);
		ft_instructions(3, s);
	}
	else if (s.sa[i] == tmp && i == 4)
	{
		ft_instructions(1, s);
		ft_instructions(3, s);
	}
}

void	ft_sort5_3(int i, int tmp, t_list s)
{
	while (i < *(s.ac) - 1 && *(s.ac) > 4)
	{
		if (s.sa[i] == tmp && i == 0)
			ft_instructions(3, s);
		else if (s.sa[i] == tmp && i == 1)
		{
			ft_instructions(2, s);
			ft_instructions(3, s);
		}
		else if (s.sa[i] == tmp && i == 2)
		{
			ft_instructions(1, s);
			ft_instructions(1, s);
			ft_instructions(3, s);
		}
		else if (s.sa[i] == tmp && i == 3)
		{
			ft_instructions(1, s);
			ft_instructions(3, s);
		}
		i++;
	}
}

void	ft_sort5(t_list s)
{
	int	tmp;
	int	i;
	int	ac2;

	ac2 = *(s.ac);
	tmp = ft_chrmin(s.ac, s.sa);
	i = 0;
	while (i < *(s.ac) - 1 && ac2 == 6)
	{
		if (s.sa[i] == tmp && i == 0)
			ft_instructions(3, s);
		ft_sort5_2(i, tmp, s);
	i++;
	}
	i = 0;
	tmp = ft_chrmin(s.ac, s.sa);
	ft_sort5_3(i, tmp, s);
	ft_sort3(s);
	if (ac2 == 6)
		ft_instructions(4, s);
	ft_instructions(4, s);
}

void	ft_sort(t_list s)
{
	int	x;

	x = 0;
	s.size = &x;
	if (*(s.ac) - 1 <= 3)
		ft_sort3(s);
	else if (*(s.ac) - 1 <= 5)
		ft_sort5(s);
	else
		ft_bigsort(s);
}
