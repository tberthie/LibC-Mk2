/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 21:02:03 by tberthie          #+#    #+#             */
/*   Updated: 2017/02/14 21:52:02 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

void			*ft_malloc(unsigned int size);

void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nbr);

unsigned int	ft_strlen(char *str);
char			*ft_strnew(void);
char			*ft_strpush(char *str, char c);
char			*ft_strjoin(char *str, char *join);
void			ft_strcpy(char *dst, char *str);

#endif
