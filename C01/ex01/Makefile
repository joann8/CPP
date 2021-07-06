NAME = zombie_horde
SRCS = main.cpp Zombie.cpp ZombieHorde.cpp
OBJS = ${SRCS:.cpp=.o}
CC = clang++
CFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -f

.cpp.o:
	${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}		

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re: fclean all

.PHONY:		all clean fclean re 
