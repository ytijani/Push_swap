/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytijani <ytijani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 20:41:20 by ytijani           #+#    #+#             */
/*   Updated: 2022/02/19 21:22:49 by ytijani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_list
{
	int				data;
	int				stay;
	struct s_list	*next;
}				t_list;

typedef struct k_list
{
	int	mov_a;
	int	mov_b;
}				t_index;
/*------------------Count Instruction -----------------*/
void	rotate(t_list **head, t_list **head1, int rot_a, int rot_b);
void	reverse(t_list **head, t_list **head1, int rot_a, int rot_b);
void	reverse_rotate(t_list **head, t_list **head1, int rot_a, int rot_b);

/*------------------Swap-----------------*/
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	sa_bonus(t_list **stack_a);
void	sb_bonus(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);
/*------------------push_opp-----------------*/
void	push(t_list **head, int data);
void	push_ab(t_list **stack_a, t_list **stack_b);
void	push_ba(t_list **stack_b, t_list **stack_a);
void	push_ba_bonus(t_list **stack_b, t_list **stack_a);
void	push_ab_bonus(t_list **stack_a, t_list **stack_b);
/*------------------revers-----------------*/
void	reverse_rotate_a(t_list **head);
void	reverse_rotate_b(t_list **head);
void	rr_r(t_list **stack_a, t_list **stack_b);
void	reverse_rotate_aa(t_list **head);
void	reverse_rotate_bb(t_list **head);
t_list	*find_before_last(t_list **head);
void	rr_bonus(t_list **stack_a, t_list **stack_b);
void	rr_r_bonus(t_list **stack_a, t_list **stack_b);
/*------------------rotate-----------------*/
void	rotate_a(t_list **head);
void	rotate_b(t_list **head);
void	rotate_aa(t_list **head);
void	rotate_bb(t_list **head);
void	rr(t_list **stack_a, t_list **stack_b);
/*------------------Error-------------------*/
void	free_stack(t_list *head);
void	ft_error(char *str);
int		check_num(char *str);
void	check_everting(char **str, int argc);
int		check_duplacate(char **str);
void	cheker(char **str, int argc);
void	check_error(char *buffer);
/*-------------------my_functions-------------*/
int		ft_atoi(char *str);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	push_in_stack(t_list **stack_a, int argc, char **argv);
void	sort_stack(t_list **stack_a, t_list **stack_b, int argc);
void	sort_two(t_list **head);
int		is_sorted(t_list **stack);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_putstr_fd(char *s, int fd);
int		ft_isdigit(int c);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	check_instruction(t_list **stack_a, t_list **stack_b, char *buffer);
size_t	ft_strlen(char *str);
void	checker(t_list **stack_a, t_list **stack_b);
char	*ft_strjoin(char *save, char *buffer);
char	*get_next_line(int fd);
int		ft_strcmp(char *s1, char *s2);
void	push_in_stack(t_list **stack_a, int argc, char **argv);
int		is_sorted(t_list **stack);

#endif
