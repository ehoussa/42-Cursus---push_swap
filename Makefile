# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebakchic <ebakchic@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/27 18:11:10 by ebakchic          #+#    #+#              #
#    Updated: 2023/01/05 22:09:23 by ebakchic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS    = push_swap.c ft_error.c ft_check.c ft_nostr.c ft_sort.c ft_instructions.c ft_instructions2.c ft_chrmin.c ft_addnums.c ft_push2b.c ft_push2a.c ft_chrmax.c ft_bigsort.c
NAME    = push_swap
OBJS 	= ${SRCS:.c=.o}
AR		= libftt/libft.a
CC		= cc
GFLAGS  = -Wall -Wextra -Werror
MAKEC	= make clean
MAKEF	= make fclean
MAKER	= make re

all: $(NAME)

$(NAME):
	@$(MAKE) -C libftt
	@$(CC) $(CFLAGS) -c $(SRCS)
	@$(CC) -o ${NAME} ${AR} ${OBJS}

clean:
	@$(MAKEC) -C libftt
	@${RM} ${OBJS}

fclean: clean
	@$(MAKEF) -C libftt
	@${RM} ${NAME}

re: fclean all
	@$(MAKER) -C libftt

.PHONY: all clean fclean re
