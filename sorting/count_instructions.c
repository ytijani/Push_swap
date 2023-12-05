/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_instructions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytijani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 02:05:55 by ytijani           #+#    #+#             */
/*   Updated: 2022/02/16 20:21:13 by ytijani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

int	ft_abs(int i)
{
	int	nbr;

	nbr = i;
	if (i < 0)
		nbr = (-1) * i;
	return (nbr);
}

int	still(t_list **head)
{
	t_list	*current;

	current = *head;
	while (current)
	{
		if (current->stay == 0)
			return (1);
		current = current->next;
	}
	return (0);
}

void	rotate(t_list **head, t_list **head1, int rot_a, int rot_b)
{
	while (rot_a > 0 && rot_b > 0)
	{
		rot_a--;
		rot_b--;
		rr(head, head1);
	}
	while (rot_a > 0)
	{
		rotate_a(head);
		rot_a--;
	}
	while (rot_b > 0)
	{
		rotate_b(head1);
		rot_b--;
	}
	push_ba(head, head1);
}

void	reverse(t_list **head, t_list **head1, int rot_a, int rot_b)
{
	while (rot_a < 0 && rot_b < 0)
	{
		rot_a++;
		rot_b++;
		rr_r(head, head1);
	}
	while (rot_a < 0)
	{
		reverse_rotate_a(head);
		rot_a++;
	}
	while (rot_b < 0)
	{
		reverse_rotate_b(head1);
		rot_b++;
	}
	push_ba(head, head1);
}

void	reverse_rotate(t_list **head, t_list **head1, int rot_a, int rot_b)
{
	while (rot_a > 0)
	{
		rotate_a(head);
		rot_a--;
	}
	while (rot_b > 0)
	{
		rotate_b(head1);
		rot_b--;
	}
	while (rot_a < 0)
	{
		reverse_rotate_a(head);
		rot_a++;
	}
	while (rot_b < 0)
	{
		reverse_rotate_b(head1);
		rot_b++;
	}
	push_ba(head, head1);
}
