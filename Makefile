OC = $(addprefix srcs/ft_,$(addsuffix .o,\
	atoi atoip itoa itoabase utoabase abs\
	freeret freeswap ptrswap free\
	gnl rfc gdc\
	isdir\
	putchar putnchar putnbr\
	strrchr strstr strncmp stricmp strndup strjoin strcjoin strsjoin strsplit\
	strrem strfrmchr strcount\
	strnew strpush strspush strins strsins strrem\
	strarrdup strarrstr strarrstrn strarrrem strarrstrlen strarrstrstrr\
	parrnew parrfree parrelmfree parrpush parrprem parrrem parrlen parrdup parrndup parrjoin\
	intlen\
	print\
	))

OA = $(addprefix asm/ft_,$(addsuffix .o,\
	bzero m memalloc memset memcpy memcmp \
	strcat strlen strdup strcpy strcmp strchr puts\
	cat\
	))

PRF=$(addprefix printf/ft_,$(addsuffix .o,\
	printf con format cast utl wchar wutl color))

NAME=libft.a

all: $(NAME)

$(NAME): $(OC) $(OA) $(PRF)
	ar rcs $(NAME) $(OC) $(OA) $(PRF)

srcs/%.o: srcs/%.c
	gcc -c $< -o $@ -Wall -Wextra -Werror -O3 -I.

asm/%.o: asm/%.s
	nasm $< -o $@ -f macho64 -I.

printf/%.o: printf/%.c
	gcc -c $< -o $@ -Wall -Wextra -Werror -O3 -I.

clean:
	rm -f $(OC)
	rm -f $(OA)
	rm -f $(PRF)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
