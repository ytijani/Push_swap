/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytijani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:55:36 by ytijani           #+#    #+#             */
/*   Updated: 2022/02/19 21:21:48 by ytijani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc > 1)
	{
		check_everting(&argv[1], argc);
		push_in_stack(&stack_a, argc, argv);
		if (is_sorted(&stack_a))
			exit(0);
		sort_stack(&stack_a, &stack_b, argc);
	}
	return (0);
}
