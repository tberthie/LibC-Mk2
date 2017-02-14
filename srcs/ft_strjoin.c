/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 21:27:09 by tberthie          #+#    #+#             */
/*   Updated: 2017/02/14 22:03:33 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char *str, char *join)
{
	char	*new;
	char	*beg;

	new = ft_malloc(sizeof(char) * (ft_strlen(str) + ft_strlen(join) + 1));
	beg = new;
	while (*str)
		*new++ = *str++;
	while (*join)
		*new++ = *join++;
	*new = 0;
	return (beg);
}
