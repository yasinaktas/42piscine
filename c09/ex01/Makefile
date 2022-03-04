.PHONY: all clean fclean re
CC := gcc
FLAG = -Wall -Wextra -Werror
SRCS = ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c
HEADER = ./includes/
LIB = libft.a
BIN = ${SRCS:.c=.o}

all: ${LIB}

.c.o:
	${CC} ${FLAG} -c -I${HEADER} $< -o ${<:.c=.o}

${LIB}: ${BIN}
	ar rc ${LIB} ${BIN}
	ranlib ${LIB}

clean:
	rm -f ${BIN}

fclean: clean
	rm -f ${LIB}

re: fclean all
