/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_opp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytijani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:04:31 by ytijani           #+#    #+#             */
/*   Updated: 2022/02/16 18:23:52 by ytijani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	push(t_list **head, int data)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	new_node->stay = 0;
	if (!new_node)
		return ;
	new_node->data = data;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
}

void	push_ab(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;
	t_list	*last;

	temp = NULL;
	last = NULL;
	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	else
	{
		temp = *stack_a;
		*stack_a = (*stack_a)->next;
		ft_lstadd_front(stack_b, temp);
	}
	write (1, "pb\n", 3);
}

void	push_ab_bonus(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;
	t_list	*last;

	temp = NULL;
	last = NULL;
	if (*stack_a == NULL)
		return ;
	else
	{
		temp = *stack_a;
		*stack_a = (*stack_a)->next;
		ft_lstadd_front(stack_b, temp);
	}
}

void	push_ba(t_list **stack_b, t_list **stack_a)
{
	t_list	*temp;

	temp = NULL;
	if (*stack_a == NULL)
		return ;
	else
	{
		temp = *stack_a;
		*stack_a = (*stack_a)->next;
		temp->next = *stack_b;
		*stack_b = temp;
	}
	write (1, "pa\n", 3);
}

void	push_ba_bonus(t_list **stack_b, t_list **stack_a)
{
	t_list	*temp;

	temp = NULL;
	if (*stack_a == NULL)
		return ;
	else
	{
		temp = *stack_a;
		*stack_a = (*stack_a)->next;
		temp->next = *stack_b;
		*stack_b = temp;
	}
}
