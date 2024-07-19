/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chrmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebakchic <ebakchic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:13:04 by ebakchic          #+#    #+#             */
/*   Updated: 2023/01/03 22:11:57 by ebakchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_chrmax(int ac, int *sa)
{
	int	i;
	int	tmp;

	tmp = sa[0];
	i = 0;
	while (i < ac - 1)
	{
		if (tmp < sa[i])
			tmp = sa[i];
		i++;
	}
	return (tmp);
}
