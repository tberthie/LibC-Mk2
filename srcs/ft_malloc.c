/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 21:33:40 by tberthie          #+#    #+#             */
/*   Updated: 2017/02/14 21:34:53 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_malloc(unsigned int size)
{
	void		*ptr;

	if (!(ptr = malloc((size_t)size)))
		exit(-1);
	return (ptr);
}
