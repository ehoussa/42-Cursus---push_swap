/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push2b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebakchic <ebakchic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:12:04 by ebakchic          #+#    #+#             */
/*   Updated: 2023/01/04 00:28:58 by ebakchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push2(int y, int x, int *nums, t_list s)
{
	int	j;
	int	tmp;

	tmp = ft_chrmax(x, s.sa);
	j = ((x - 1) / 2) - 1;
	if (s.sa[0] != tmp && s.sa[0] >= nums[j] && s.sa[0] <= nums[y - 2])
		ft_instructions(3, s);
	else if (s.sa[0] != tmp && s.sa[0] <= nums[j] && s.sa[0] >= nums[0])
	{
		ft_instructions(3, s);
		ft_instructions(5, s);
	}
	else
		ft_instructions(2, s);
}

void	ft_push(int x, int k, int *nums, t_list s)
{
	int	j;
	int	tmp;

	tmp = nums[x - 2];
	j = ((x - 1) / 2) - 1;
	if (s.sa[0] != tmp && s.sa[0] >= nums[j] && s.sa[0] <= nums[j + k])
		ft_instructions(3, s);
	else if (s.sa[0] != tmp && s.sa[0] <= nums[j] && s.sa[0] >= nums[j - k])
	{
		ft_instructions(3, s);
		ft_instructions(5, s);
	}
	else
		ft_instructions(2, s);
}

void	ft_push2b(t_list s, int *nums)
{
	int	k;
	int	i;
	int	x;

	s.y = *(s.ac);
	k = 16;
	x = 32;
	i = ((*(s.ac) - 1) / 2) / 16;
	if (*(s.ac) > 33)
	{
		while (*(s.ac) != 2 && i != 0)
		{
			while (*(s.size) <= x)
				ft_push(s.y, k, nums, s);
			x += 32;
			k += 16;
			i--;
		}
	}
	if (*(s.ac) <= 33)
	{
		x = *(s.ac);
		while (*(s.ac) != 2)
			ft_push2(s.y, x, nums, s);
	}
}
