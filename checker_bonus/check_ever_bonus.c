/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ever_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytijani <ytijani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 03:42:01 by ytijani           #+#    #+#             */
/*   Updated: 2022/02/19 20:44:02 by ytijani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ft_error(char *str)
{
	ft_putstr_fd(str, 1);
	exit (0);
}

int	check_num(char *str)
{
	int	i;

	if (str[0] == '-')
		i = 0;
	else
		i = -1;
	while (str[++i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
	}
	return (1);
}

void	check_everting(char **str, int argc)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc - 1)
		{
			if (ft_atoi(str[i]) == ft_atoi(str[j]) ||!check_num(str[j]))
				ft_error("Error");
			j++;
		}
		i++;
	}
}
