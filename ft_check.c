/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebakchic <ebakchic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:13:19 by ebakchic          #+#    #+#             */
/*   Updated: 2023/01/05 23:01:04 by ebakchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_nosort(t_list s)
{
	int	i;
	int	j;

	i = 0;
	while (i < *(s.ac) - 1)
	{
		j = i + 1;
		while (j < *(s.ac) - 1)
		{
			if (s.sa[i] > s.sa[j])
				return ;
			j++;
		}
		i++;
	}
	exit(EXIT_FAILURE);
}

void	ft_checkdup(t_list s)
{
	int	i;
	int	j;

	i = 0;
	while (i < *(s.ac) - 1)
	{
		j = i + 1;
		while (j < *(s.ac) - 1)
		{
			if (s.sa[i] == s.sa[j])
				ft_error();
			j++;
		}
		i++;
	}
}

void	ft_check(t_list s)
{
	ft_checkdup(s);
	ft_nosort(s);
}
