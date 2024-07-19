/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebakchic <ebakchic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:10:33 by ebakchic          #+#    #+#             */
/*   Updated: 2023/01/05 23:56:29 by ebakchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**fill_arg(int ac, char **av)
{
	char	**str;

	if (ac == 2)
	{
		str = ft_split(av[1], ' ');
		return (str);
	}
	else
		return (av + 1);
}

int	str_len(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	i++;
	return (i);
}

int	main(int ac, char **av)
{
	int		i;
	t_list	s;
	char	**str;

	if (ac == 1)
		return (0);
	str = fill_arg(ac, av);
	ac = str_len(str);
	s.ac = &ac;
	s.sa = malloc(sizeof(int) * (ac - 1));
	s.sb = malloc(sizeof(int) * (ac - 1));
	i = -1;
	while (++i < (ac - 1))
		s.sa[i] = ft_nostr(str[i]);
	ft_check(s);
	ft_sort(s);
	return (0);
}
