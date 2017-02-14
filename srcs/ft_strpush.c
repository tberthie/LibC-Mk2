/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 21:31:18 by tberthie          #+#    #+#             */
/*   Updated: 2017/02/14 21:40:44 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strpush(char *str, char c)
{
	char	*new;
	int		pos;

	pos = 0;
	new = ft_malloc(sizeof(char) * (ft_strlen(str) + 2));
	while (str[pos])
	{
		new[pos] = str[pos];
		pos++;
	}
	free(str);
	new[pos++] = c;
	new[pos] = 0;
	return (new);
}
