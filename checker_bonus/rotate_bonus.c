/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytijani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:13:00 by ytijani           #+#    #+#             */
/*   Updated: 2022/02/16 00:41:39 by ytijani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	rotate_a(t_list **head)
{
	t_list	*temp;

	temp = *head;
	if (!(*head) ||!(*head)->next)
		return ;
	*head = (*head)->next;
	temp->next = NULL;
	ft_lstadd_back(head, temp);
	write(1, "ra\n", 3);
}

void	rotate_b(t_list **head)
{
	t_list	*temp;

	temp = *head;
	*head = (*head)->next;
	temp->next = NULL;
	ft_lstadd_back(head, temp);
	write(1, "rb\n", 3);
}

void	rotate_aa(t_list **head)
{
	t_list	*temp;

	temp = *head;
	if (!(*head) ||!(*head)->next)
		return ;
	*head = (*head)->next;
	temp->next = NULL;
	ft_lstadd_back(head, temp);
}

void	rotate_bb(t_list **head)
{
	t_list	*temp;

	temp = *head;
	if (!(*head) ||!(*head)->next)
		return ;
	*head = (*head)->next;
	temp->next = NULL;
	ft_lstadd_back(head, temp);
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	if (!*stack_a || !*stack_b)
		return ;
	rotate_aa(stack_a);
	rotate_bb(stack_b);
	write(1, "rr\n", 3);
}
