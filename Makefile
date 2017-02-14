# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/14 20:57:15 by tberthie          #+#    #+#              #
#    Updated: 2017/02/14 22:11:27 by tberthie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = malloc \
putchar putstr putnbr \
strlen strjoin strpush strcpy strnew

OBJS = $(addprefix objs/ft_, $(addsuffix .o, $(SRCS)))

all: objs libft.a

objs:
	@mkdir objs

libft.a: $(OBJS)
	@echo "[libft.a]"
	@ar rc libft.a $(OBJS)

objs/%.o: srcs/%.c
	@echo "[$<]"
	@gcc -c $< -o $@ -I. -Weverything -O3

clean:
	@echo "[rm objs]"
	@rm -rf objs

fclean: clean
	@echo "[rm libft.a]"
	@rm -rf libft.a

re: fclean all
