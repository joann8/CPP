NAME = materia
SRCS = main.cpp AMateria.cpp MateriaSource.cpp  Character.cpp Cure.cpp Ice.cpp 
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
