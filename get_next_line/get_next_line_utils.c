/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytijani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:30:50 by ytijani           #+#    #+#             */
/*   Updated: 2022/02/19 23:30:54 by ytijani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *save, char *buffer)
{
	int		i;
	int		j;
	char	*strbuffer;
	int		len;

	i = 0;
	j = 0;
	if (!buffer)
		return (NULL);
	len = ft_strlen(save) + ft_strlen(buffer);
	strbuffer = (char *)malloc(sizeof(char) * (len + 1));
	if (strbuffer == 0)
		return (NULL);
	if (save)
	{
		while (save[j] && i < len)
			strbuffer[i++] = save[j++];
	}
	j = 0;
	while (buffer[j] && i < len)
		strbuffer[i++] = buffer[j++];
	strbuffer[i] = '\0';
	free(save);
	return (strbuffer);
}
