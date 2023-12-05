# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytijani <ytijani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/13 00:36:24 by ytijani           #+#    #+#              #
#    Updated: 2022/02/19 23:31:46 by ytijani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CHECKER = checker

SRC = sorting/count_instructions.c \
	  sorting/helper_function.c \
	  sorting/sort_100.c \
	  sorting/sort_five.c \
	  sorting/sort_stack.c \
	  sorting/sort_three.c \
	  sorting/sorting_algo.c \
	  opp_ps/push_opp.c \
	  opp_ps/reverse.c \
	  opp_ps/rotate.c \
	  opp_ps/swap_opp.c \
	  opp_ps/reverse2.c \
	  function/ft_atoi.c \
	  function/ft_lstadd_front.c \
	  function/ft_lstadd_back.c \
	  function/ft_lstsize.c \
	  function/ft_putstr_fd.c \
	  function/ft_isdigit.c \
	  function/ft_strcmp.c \
	  error/check_ever.c \
	  error/funcions.c \
	  push_swap.c

SRC_Bonus = checker_bonus/check_instruction.c \
		checker_bonus/checker.c \
		checker_bonus/reverse2_bonus.c \
		checker_bonus/rotate_bonus.c \
		checker_bonus/rr_rrr_bonus.c \
		checker_bonus/swap_opp_bonus.c \
		checker_bonus/ft_atoi_bonus.c \
		checker_bonus/ft_lstadd_front_bonus.c \
		checker_bonus/ft_lstadd_back_bonus.c \
		checker_bonus/ft_putstr_fd_bonus.c \
		checker_bonus/funcions_bonus.c \
		checker_bonus/check_ever_bonus.c \
		checker_bonus/push_opp_bonus.c \
		checker_bonus/ft_strcmp_bonus.c \
		checker_bonus/ft_isdigit_bonus.c \
		checker_bonus/reverse_bonus.c \
		checker_bonus/push_in_stack_bonus.c \
		get_next_line/get_next_line.c \
	  	get_next_line/get_next_line_utils.c 
	
CC = cc

CFLAGS = -Wall -Werror -Wextra

OBJCT = ${SRC:.c=.o}

BNS_OBJ = ${SRC_Bonus:.c=.o}

all : $(NAME)
$(NAME) : $(OBJCT)
	@$(CC) $(CFLAGS) $(OBJCT) -o $(NAME)

bonus : $(CHECKER)
$(CHECKER) : $(BNS_OBJ)
	@$(CC) $(CFLAGS) $(BNS_OBJ) -o $(CHECKER)

clean :
	@rm -f $(OBJCT)
	@rm -f $(BNS_OBJ)

fclean : clean
	@rm -f $(NAME) $(CHECKER)

re : fclean all
