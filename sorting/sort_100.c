/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytijani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:00:28 by ytijani           #+#    #+#             */
/*   Updated: 2022/02/16 18:25:27 by ytijani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	push_list_a_in_b(t_list **head, t_list **head1)
{
	t_list	*current_node_seq;

	current_node_seq = NULL;
	get_list(head, current_node_seq);
	while (still(head))
	{
		if ((*head)->stay == 0)
			push_ab(head, head1);
		else if ((*head)->stay == 1)
			rotate_a(head);
	}
}

int	calc_move_to_a(t_list **head, t_list **elm)
{
	t_list	*current;
	int		med;
	int		target;
	int		distance;

	distance = 1;
	current = *head;
	target = (*elm)->data;
	med = ft_lstsize(*head) / 2;
	while (current->next)
	{
		if ((target > current->data) && (target < current->next->data))
		{
			return (distance);
		}
		distance++;
		current = current->next;
	}
	if (target > current->data && target < (*head)->data)
		return (0);
	return (INT_MIN);
}

void	get_best_move2(int *rot, t_list **head, int	*total)
{
	if (rot[0] == INT_MIN)
		rot[0] = get_med(get_min_index(head), ft_lstsize(*head));
	if (rot[0] > 0 && rot[1] > 0)
		*total = max(ft_abs(rot[0]), ft_abs(rot[1]));
	else if (rot[0] < 0 && rot[1] < 0)
		*total = max(ft_abs(rot[0]), ft_abs(rot[1]));
	else
		*total = ft_abs(rot[0]) + ft_abs(rot[1]);
}

t_index	get_best_move(t_list **head, t_list **head1, t_list *current)
{
	t_index	best_move;
	int		i;
	int		rot[2];
	int		total_max;
	int		total;

	total_max = INT_MAX;
	current = *head1;
	i = 0;
	while (current)
	{
		rot[0] = get_med(calc_move_to_a(head, &current), ft_lstsize(*head));
		rot[1] = get_med(i, ft_lstsize(*head1));
		get_best_move2(rot, head, &total);
		if (total < total_max)
		{
			best_move.mov_a = rot[0];
			best_move.mov_b = rot[1];
			total_max = total;
		}
		current = current->next;
		i++;
	}
	return (best_move);
}

void	push_list_b_in_a(t_list **head, t_list **head1)
{
	t_index	move;
	t_list	*current;
	int		rot_a;
	int		rot_b;

	current = NULL;
	while (*head1)
	{
		move = get_best_move(head, head1, current);
		rot_a = move.mov_a;
		rot_b = move.mov_b;
		if (rot_a >= 0 && rot_b >= 0)
			rotate(head, head1, rot_a, rot_b);
		else if ((rot_a < 0 && rot_b < 0))
			reverse(head, head1, rot_a, rot_b);
		else if ((rot_a <= 0 && rot_b >= 0) || (rot_a >= 0 && rot_b <= 0))
			reverse_rotate(head, head1, rot_a, rot_b);
	}
}
