/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytijani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:55:27 by ytijani           #+#    #+#             */
/*   Updated: 2022/02/16 00:38:25 by ytijani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	sort_two(t_list **head)
{
	if ((*head)->data > (*head)->next->data)
		sa(head);
}

void	sort_three(t_list **head)
{
	int	a;
	int	b;
	int	c;

	a = (*head)->data;
	b = (*head)->next->data;
	c = (*head)->next->next->data;
	if ((a < b) && (b > c) && (c > a))
	{
		sa(head);
		rotate_a(head);
	}
	else if ((a > b) && (b > c) && (c < a))
	{
		rotate_a(head);
		sa(head);
	}
	else if (a < b && c < b)
		reverse_rotate_a(head);
	else if (a > c && a > b)
		rotate_a(head);
	else if ((a > b) && (a < c))
		sa(head);
}
