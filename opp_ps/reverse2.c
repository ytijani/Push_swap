/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytijani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:56:24 by ytijani           #+#    #+#             */
/*   Updated: 2022/02/16 00:40:35 by ytijani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	reverse_rotate_aa(t_list **head)
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
}

void	reverse_rotate_bb(t_list **head1)
{
	t_list	*last;
	t_list	*prev;

	if (!*head1 || !(*head1)->next)
		return ;
	prev = find_before_last(head1);
	if (!prev)
		return ;
	last = ft_lstlast(*head1);
	prev->next = NULL;
	last->next = *head1;
	*head1 = last;
}
