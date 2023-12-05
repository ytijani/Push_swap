/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytijani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 02:08:15 by ytijani           #+#    #+#             */
/*   Updated: 2022/02/13 02:12:52 by ytijani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

int	get_min(t_list **head)
{
	t_list	*ptr;
	int		min;

	ptr = *head;
	min = ptr->data;
	while (ptr)
	{
		if (min > ptr->data)
			min = ptr->data;
		ptr = ptr->next;
	}
	return (min);
}

void	sort_four(t_list **head, t_list **head1)
{
	int	min;

	min = get_min(head);
	while ((*head)->data != min)
		reverse_rotate_a(head);
	push_ab(head, head1);
	sort_three (head);
	push_ba(head, head1);
}

void	sort_five(t_list **head, t_list **head1)
{
	int	min;

	min = get_min(head);
	while ((*head)->data != min)
	{
		if ((*head)->next->data == min)
			sa(head);
		else
			reverse_rotate_a(head);
	}
	push_ab(head, head1);
	sort_four(head, head1);
	push_ba(head, head1);
}
