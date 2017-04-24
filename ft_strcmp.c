/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 19:50:34 by tberthie          #+#    #+#             */
/*   Updated: 2017/04/24 17:42:56 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned char	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		++s1;
		++s2;
	}
	return (*s1 != *s2);
}
