/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 21:52:13 by tberthie          #+#    #+#             */
/*   Updated: 2017/02/14 22:00:45 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putnbr(int nb)
{
	unsigned int	i;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	i = 1;
	while ((unsigned int)nb / i >= 10)
		i *= 10;
	while (i >= 10)
	{
		ft_putchar((unsigned int)nb / i % 10 + '0');
		i /= 10;
	}
	ft_putchar((unsigned int)nb / i % 10 + '0');
}
