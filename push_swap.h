/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebakchic <ebakchic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:10:14 by ebakchic          #+#    #+#             */
/*   Updated: 2023/01/05 22:40:08 by ebakchic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list
{
	int	*sa;
	int	*sb;
	int	*ac;
	int	*size;
	int	y;
}	t_list;

void	*ft_calloc(size_t count, size_t size);
int		ft_atoi(const char *str);
void	ft_putstr(char *str);
void	ft_error(void);
void	ft_check(t_list s);
int		ft_nostr(char *str);
void	ft_sort(t_list s);
void	ft_instructions(int i, t_list s);
void	ft_instructions2(int i, t_list s);
int		ft_chrmin(int *ac, int *sa);
int		ft_chrmax(int ac, int *sa);
void	ft_addnums(int *ac, int *sa, int *nums);
void	ft_sorta(int ac, char **av);
void	ft_push2b(t_list s, int *nums);
void	ft_push2a(t_list s, int *nums);
void	ft_bigsort(t_list s);
char	**ft_split(char const *s, char c);

#endif
