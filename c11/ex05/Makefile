.PHONY: all clean fclean re
CC := gcc
FLAG = -Wall -Wextra -Werror
NAME = do-op
SRCS = do-op.c

all: ${NAME}

${NAME}:
	${CC} ${FLAG} ${SRCS} -o ${NAME}

clean:
	rm -f *.o

fclean:
	rm -f ${NAME}

re:
	fclean all
