/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_opp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytijani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:12:12 by ytijani           #+#    #+#             */
/*   Updated: 2022/02/19 21:25:55 by ytijani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	sa(t_list **stack_a)
{
	t_list	*temp;

	if (!stack_a || !(*stack_a)->next)
		return ;
	if (stack_a)
	{
		temp = (*stack_a)->next;
		(*stack_a)->next = (*stack_a)->next->next;
		temp->next = *stack_a;
		*stack_a = temp;
	}
	write(1, "sa\n", 3);
}

void	sa_bonus(t_list **stack_a)
{
	t_list	*temp;

	if (!stack_a || !(*stack_a)->next)
		return ;
	if (stack_a)
	{
		temp = (*stack_a)->next;
		(*stack_a)->next = (*stack_a)->next->next;
		temp->next = *stack_a;
		*stack_a = temp;
	}
}

void	sb(t_list **stack_b)
{
	t_list	*temp;

	if (!stack_b ||!(*stack_b)->next)
		return ;
	if (stack_b)
	{
		temp = (*stack_b)->next;
		(*stack_b)->next = (*stack_b)->next->next;
		temp->next = *stack_b;
		*stack_b = temp;
	}
	write(1, "sb\n", 3);
}

void	sb_bonus(t_list **stack_b)
{
	t_list	*temp;

	if (!stack_b ||!(*stack_b)->next)
		return ;
	if (stack_b)
	{
		temp = (*stack_b)->next;
		(*stack_b)->next = (*stack_b)->next->next;
		temp->next = *stack_b;
		*stack_b = temp;
	}
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	sa_bonus(stack_a);
	sb_bonus(stack_b);
	write(1, "ss\n", 3);
}
