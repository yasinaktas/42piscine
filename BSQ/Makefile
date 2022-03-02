.PHONY: all clean fclean re
CC := gcc
FLAG = -Wall -Wextra -Werror
SRCS = bsq.c errors1.c errors2.c functions.c square_functions.c
NAME = bsq

all: ${NAME}

${NAME}:
	${CC} ${FLAG} ${SRCS} -o ${NAME}

clean:
	rm -f *.o
fclean: clean
	rm -f ${NAME}
re: fclean all
