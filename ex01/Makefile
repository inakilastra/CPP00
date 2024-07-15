# VARIABLES
NAME = main
CC = c++
CCFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRCS = main.cpp Contact.cpp PhoneBook.cpp
OBJS = ${SRCS:.cpp=.o}
DEF_COLOR =     \033[0;39m
GREEN =         \033[0;92m
YELLOW =        \033[0;93m
ORANGE =		\033[38;5;209m
# REGLAS
%.o: %.cpp
	@echo "\n${YELLOW} Compilando ✨ $< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) -c $^ -o $@
$(NAME): $(OBJS)
		@${CC} ${CFLAGS} ${SRCS} -o ${NAME}
		@echo "\n${GREEN} ✅ $(NAME) $(DEF_COLOR)\n"
all: $(NAME)
clean:
	@${RM} ${OBJS} ${DEPS}
	@echo "\n${ORANGE} ❌ Todos los objetos eliminados$(DEF_COLOR)\n"
fclean:
	@${RM} ${OBJS} ${DEPS} ${NAME}
	@echo "\n${ORANGE} ❌ Todos los objetos y ejecutables eliminados$(DEF_COLOR)\n"
re: fclean all
# PSEUDO-OBJETIVOS
.PHONY: all clean fclean re
