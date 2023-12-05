/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytijani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 02:21:45 by ytijani           #+#    #+#             */
/*   Updated: 2022/02/16 20:25:49 by ytijani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	separate(t_list **head, t_list *seq)
{
	t_list	*current_node;
	int		prev;

	seq->stay = 1;
	prev = seq->data;
	current_node = seq->next;
	if (!current_node)
		current_node = *head;
	while (current_node != seq)
	{
		if (current_node->data > prev)
		{
			current_node->stay = 1;
			prev = current_node->data;
		}
		current_node = current_node->next;
		if (!current_node)
			current_node = *head;
	}
}

void	ft_set_n(t_list *current, int *longest, int *count, int *prev)
{
	*prev = current->data;
	*longest = 1;
	*count = 1;
}

int	get_count(t_list *current_node, int prev, int count)
{
	if (current_node->data > prev)
	{
		prev = current_node->data;
		count++;
	}
	return (count);
}

t_list	*get_loop(t_list **head, t_list *current_node_seq, int count, int prev)
{
	t_list	*current_node;
	t_list	*seq;
	int		longest_count;

	ft_set_n(current_node_seq, &longest_count, &count, &prev);
	current_node = current_node_seq->next;
	seq = *head;
	if (!current_node)
		current_node = *head;
	while (current_node != current_node_seq)
	{
		count = get_count(current_node, prev, count);
		current_node = current_node->next;
		if (!current_node)
			current_node = *head;
	}
	if (longest_count < count)
	{
		longest_count = count;
		seq = current_node_seq;
	}
	return (seq);
}

void	get_list(t_list **head, t_list *current_node_seq)
{
	t_list	*current_node;
	t_list	*seq;
	int		prev;
	int		count;
	int		longest_count;

	current_node_seq = *head;
	longest_count = 1;
	seq = *head;
	prev = 0;
	count = 0;
	current_node = NULL;
	while (current_node_seq)
	{
		seq = get_loop(head, current_node_seq, count, prev);
		current_node_seq = current_node_seq->next;
	}
	separate(head, seq);
}

// void	get_list(t_list **head, t_list *current_node_seq)
// {
// 	t_list	*current_node;
// 	t_list	*seq;
// 	int		prev;
// 	int		count;
// 	int		longest_count;

// 	current_node_seq = *head;
// 	longest_count = 1;
// 	seq = *head;
// 	while (current_node_seq)
// 	{
// 		prev = current_node_seq->data;
// 		current_node = current_node_seq->next;
// 		count = 1;
// 		if (!current_node)
// 			current_node = *head;
// 		while (current_node != current_node_seq)
// 		{
// 			if (current_node->data > prev)
// 			{
// 				prev = current_node->data;
// 				count++;
// 			}
// 			current_node = current_node->next;
// 			if (!current_node)
// 				current_node = *head;
// 		}
// 		if (longest_count < count)
// 		{
// 			longest_count = count;
// 			seq = current_node_seq;
// 		}
// 		current_node_seq = current_node_seq->next;
// 	}
// 	separate(head, seq);
// }
