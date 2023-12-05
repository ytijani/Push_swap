/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcions.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytijani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:03:20 by ytijani           #+#    #+#             */
/*   Updated: 2022/02/15 22:01:33 by ytijani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	free_stack(t_list *head)
{
	t_list	*temp;

	temp = NULL;
	if (!head)
		return ;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
