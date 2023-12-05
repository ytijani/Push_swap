/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytijani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:15:18 by ytijani           #+#    #+#             */
/*   Updated: 2022/02/15 23:16:08 by ytijani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	ft_set(int *i, long long *nbr, int *n)
{
	*i = 0;
	*nbr = 0;
	*n = 1;
}

int	ft_atoi(char *str)
{
	int			i;
	long long	nbr;
	int			n;

	ft_set(&i, &nbr, &n);
	if (str[i] == '-')
	{
		n = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		if ((n == -1 && (nbr * -1) < INT_MIN) || ((n == 1) && nbr > INT_MAX))
			ft_error("Error");
		i++;
	}
	if (str[i] || !i)
		ft_error("Error");
	return (nbr * n);
}
