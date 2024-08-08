# **************************************************************************** #
# VARIABLES                                                                    #
# NAME: Define el nombre de la biblioteca que se creará.                       #
NAME = megaphone
# CC: Especifica el compilador a usar.                                     #
CC = c++
# CCFLAGS: Define las opciones del compilador                                  #
CCFLAGS = -Wall -Wextra -Werror -std=c++98 #-MMD
# RM: Comando para eliminar archivos.                                          #
RM = rm -rf
# SRCS: Lista los archivos fuente que forman parte de la biblioteca.           #
SRCS = megaphone.cpp
# OBJS: Lista de objetos (archivos ".o") generados a partir de la compilación  #
#       de los archivos fuente C++ listados en SRCS.                           #
OBJS = ${SRCS:.cpp=.o}
# DEPS: Lista de archivos de dependencia que son necesarios para compilar      #
#       correctamente los archivos fuente C++ listados en SRCS.                #
DEPS = ${SRCS:.cpp=.d}
# ESTILO FUENTE: Definen secuencias de escape ANSI fuente Italica y Negrita    #
ITALIC = \033[3m
BOLD =	 \033[1m
# COLORS: Definen secuencias de escape ANSI para colores en la terminal        #
DEF_COLOR =     \033[0;39m
GREEN =         \033[0;92m
YELLOW =        \033[0;93m
ORANGE =		\033[38;5;209m
# **************************************************************************** #

# **************************************************************************** #
# REGLAS                                                                       #
# .DEFAULT_GOAL := all
# %.o : %.c: Esta regla indica cómo compilar cada archivo fuente (.c)          #
#            en un archivo objeto (.o).                                        #
#            La acción @$(CC) $(CCFLAGS) -c -o $@ $< utiliza el compilador gcc #
#            con las opciones -Wall -Wextra -Werror para compilar el archivo   #
#            fuente ($<) y generar el archivo objeto ($@).                     #
%.o: %.cpp
	@echo "\n${ORANGE} ◎ Compiling → $(ORANGE)$< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) -c $^ -o $@	
# $(NAME) : $(OBJS): Esta regla indica que para crear la biblioteca            #
#           se necesitan los archivos objeto ($(OBJS) y $(OBJSB).              #
$(NAME): $(OBJS)
		@${CC} ${CFLAGS} ${SRCS} -o ${NAME}
		@echo "\n${YELLOW} ✅ ${GREEN}$(NAME) $(DEF_COLOR)\n"
		@echo "\nTests -- Pruebas\n"
		@echo "\n${GREEN} ./megaphone \"shhhhh... I think the students are asleep...\" | cat -e"
		@echo "${YELLOW} SHHHHH... I THINK THE STUDENTS ARE ASLEEP...\n"
		@echo "${GREEN}$> ./megaphone Damnit \" ! \" \"Sorry students, I thought this thing was off.\" | cat -e"
		@echo "${YELLOW} DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.\n"
		@echo "${GREEN}$> ./megaphone | cat -e"
		@echo "${YELLOW} * LOUD AND UNBEARABLE FEEDBACK NOISE *$(DEF_COLOR)\n"
# all: Esta regla es un alias para la regla $(NAME).                           #
#      Cuando se ejecuta make all, se crea la biblioteca.                      #
all: $(NAME)
# archivos de dependencia necesarios                                           #
-include ${DEPS}
# clean: Esta regla elimina los archivos objeto (.o)                           #
#        generados durante la compilación.                                     #
clean:
	@${RM} ${OBJS} ${DEPS}
	@echo "\n${ORANGE} ❌ Todos los objetos eliminados$(DEF_COLOR)\n"

# fclean: Esta regla elimina la biblioteca (libft.a)                           #
#         y los archivos objeto (.o).                                          #
fclean:
	@${RM} ${OBJS} ${DEPS} ${NAME}
	@echo "\n${ORANGE} ❌ Todos los objetos y ejecutables eliminados$(DEF_COLOR)\n"
# re: Esta regla es un alias para la secuencia fclean all.                     #
#     Cuando se ejecuta make re, se limpia la compilación anterior             #
#     y se crea la biblioteca nuevamente.                                      #
re: fclean all
# **************************************************************************** #

# **************************************************************************** #
# PSEUDO-OBJETIVOS                                                             #
# PHONY: Indica que all, clean, fclean y re son pseudo-objetivos,              #
#        no archivos reales.                                                   #
.PHONY: all clean fclean re
# **************************************************************************** #
