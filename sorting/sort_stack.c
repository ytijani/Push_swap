/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytijani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 02:13:11 by ytijani           #+#    #+#             */
/*   Updated: 2022/02/15 23:10:40 by ytijani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	push_in_stack(t_list **stack_a, int argc, char **argv)
{
	argc--;
	while (argc >= 1)
	{
		push(stack_a, ft_atoi(argv[argc]));
		argc--;
	}
}

void	get_stack_sort(t_list **head, t_list **head1)
{
	int	min;
	int	index;

	push_list_a_in_b(head, head1);
	push_list_b_in_a(head, head1);
	min = get_min(head);
	index = get_med(get_min_index(head), ft_lstsize(*head));
	while ((*head)->data != min)
	{
		if (index >= 0)
		{
			while (index-- > 0)
				rotate_a(head);
		}
		else
		{	
			while (index++ < 0)
				reverse_rotate_a(head);
		}
	}
}

void	sort_stack(t_list **stack_a, t_list **stack_b, int argc)
{
	argc--;
	if (argc == 2)
		sort_two(stack_a);
	else if (argc == 3)
		sort_three(stack_a);
	else if (argc == 4)
		sort_four(stack_a, stack_b);
	else if (argc == 5)
		sort_five(stack_a, stack_b);
	else
		get_stack_sort(stack_a, stack_b);
}
