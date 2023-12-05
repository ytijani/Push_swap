/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_instruction.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytijani <ytijani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 01:08:17 by ytijani           #+#    #+#             */
/*   Updated: 2022/02/19 21:24:01 by ytijani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	check_instruction(t_list **stack_a, t_list **stack_b, char *buffer)
{
	if (ft_strcmp("rra\n", buffer) == 0)
		reverse_rotate_aa(stack_a);
	else if (ft_strcmp("rrb\n", buffer) == 0)
		reverse_rotate_bb(stack_b);
	else if (ft_strcmp("rrr\n", buffer) == 0)
		rr_r_bonus(stack_a, stack_b);
	else if (ft_strcmp("ra\n", buffer) == 0)
		rotate_aa(stack_a);
	else if (ft_strcmp("rb\n", buffer) == 0)
		rotate_bb(stack_b);
	else if (ft_strcmp("rr\n", buffer) == 0)
		rr_bonus(stack_a, stack_b);
	else if (ft_strcmp("sa\n", buffer) == 0)
		sa_bonus(stack_a);
	else if (ft_strcmp("sb\n", buffer) == 0)
		sb_bonus(stack_b);
	else if (ft_strcmp("ss\n", buffer) == 0)
		ss(stack_a, stack_b);
	else if (ft_strcmp("pb\n", buffer) == 0)
		push_ab_bonus(stack_a, stack_b);
	else if (ft_strcmp("pa\n", buffer) == 0)
		push_ba_bonus(stack_a, stack_b);
	else
		ft_error("Error");
}

int	is_sorted(t_list **stack)
{
	t_list	*tmp;
	t_list	*head;

	head = *stack;
	while (head->next)
	{
		tmp = head->next;
		if (head->data > tmp->data)
			return (0);
		head = head->next;
	}
	return (1);
}

void	checker(t_list **stack_a, t_list **stack_b)
{
	char	*buffer;

	buffer = get_next_line(0);
	while (buffer)
	{
		check_instruction(stack_a, stack_b, buffer);
		free(buffer);
		buffer = get_next_line(0);
	}
	if ((is_sorted(stack_a) == 1) && !(*stack_b))
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
}
