/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_function.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytijani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:06:21 by ytijani           #+#    #+#             */
/*   Updated: 2022/02/16 13:44:32 by ytijani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

int	get_med(int i, int len)
{
	if (i <= len / 2)
		return (i);
	return (i - len);
}

int	max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

int	min(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
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

int	get_min_index(t_list **head)
{
	t_list	*current;
	int		min;
	int		index;

	index = 0;
	min = get_min(head);
	current = *head;
	while (current)
	{
		if (current->data == min)
			return (index);
		current = current->next;
		index++;
	}
	return (0);
}
