/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_rrr_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytijani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:23:59 by ytijani           #+#    #+#             */
/*   Updated: 2022/02/16 18:24:58 by ytijani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	rr_bonus(t_list **stack_a, t_list **stack_b)
{
	if (!*stack_a || !*stack_b)
		return ;
	rotate_aa(stack_a);
	rotate_bb(stack_b);
}

void	rr_r_bonus(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate_aa(stack_a);
	reverse_rotate_bb(stack_b);
}
