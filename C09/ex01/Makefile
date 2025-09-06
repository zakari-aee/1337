SRCS = ./srcs/
INCLUDES = ./includes/
CFILES = ${SRCS}ft_putchar.c ${SRCS}ft_putstr.c ${SRCS}ft_strcmp.c ${SRCS}ft_strlen.c ${SRCS}ft_swap.c

CC = gcc
CFLAGS = -Wall -Wextra -Werror
OFILES = $(CFILES:.c=.o)
LIBFT = libft.a

all: $(LIBFT)

$(LIBFT): $(OFILES)
	ar -rsc $(LIBFT) $(OFILES)

${SRCS}%.o: ${SRCS}%.c
	${CC} ${CFLAGS} -c -I ${INCLUDES} $< -o $@

clean:
	rm -f ${OFILES}

fclean: clean
	rm -f libft.a

re: fclean all
