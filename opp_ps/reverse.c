/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytijani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:08:25 by ytijani           #+#    #+#             */
/*   Updated: 2022/02/15 22:10:56 by ytijani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

t_list	*find_before_last(t_list **head)
{
	t_list	*node;

	if (!*head || !(*head)->next)
		return (NULL);
	node = *head;
	while (node->next->next)
		node = node->next;
	return (node);
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	if (lst)
	{
		while (lst->next)
			lst = lst->next;
	}
	return (lst);
}

void	reverse_rotate_a(t_list **head)
{
	t_list	*last;
	t_list	*prev;

	if (!*head || !(*head)->next)
		return ;
	prev = find_before_last(head);
	if (!prev)
		return ;
	last = ft_lstlast(*head);
	prev->next = NULL;
	last->next = *head;
	*head = last;
	write(1, "rra\n", 4);
}

void	reverse_rotate_b(t_list **head)
{
	t_list	*last;
	t_list	*prev;

	if (!*head || !(*head)->next)
		return ;
	prev = find_before_last(head);
	if (!prev)
		return ;
	last = ft_lstlast(*head);
	prev->next = NULL;
	last->next = *head;
	*head = last;
	write(1, "rrb\n", 4);
}

void	rr_r(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate_aa(stack_a);
	reverse_rotate_bb(stack_b);
	write (1, "rrr\n", 4);
}
