/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addnums.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebakchic <ebakchic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:13:27 by ebakchic          #+#    #+#             */
/*   Updated: 2023/01/03 22:26:21 by ebakchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rmmin(int x, int *z, int *cp)
{
	int	i;

	i = 0;
	while (cp[i] != x)
		i++;
	while (i < *z - 1)
	{
		cp[i] = cp[i + 1];
		i++;
	}
	*z = *z - 1;
}

void	ft_addnums(int *ac, int *sa, int *nums)
{
	int	i;
	int	z;
	int	*cp;

	z = *ac;
	i = 0;
	cp = malloc(sizeof(int) * (*ac - 1));
	while (i < *ac - 1)
	{
		cp[i] = sa[i];
		i++;
	}
	i = 0;
	while (i < *ac - 1)
	{
		nums[i] = ft_chrmin(&z, cp);
		ft_rmmin(nums[i], &z, cp);
		i++;
	}
	free(cp);
}
