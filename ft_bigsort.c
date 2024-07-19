/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bigsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebakchic <ebakchic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:53:41 by ebakchic          #+#    #+#             */
/*   Updated: 2023/01/04 12:55:23 by ebakchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_bigsort(t_list s)
{
	int	*nums;

	nums = malloc(sizeof(int) * (*(s.ac) - 1));
	ft_addnums(s.ac, s.sa, nums);
	ft_push2b(s, nums);
	ft_push2a(s, nums);
	free(nums);
}
