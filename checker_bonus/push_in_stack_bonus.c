/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_in_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytijani <ytijani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 20:57:24 by ytijani           #+#    #+#             */
/*   Updated: 2022/02/19 21:25:08 by ytijani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	push_in_stack(t_list **stack_a, int argc, char **argv)
{
	argc--;
	while (argc >= 1)
	{
		push(stack_a, ft_atoi(argv[argc]));
		argc--;
	}
}
