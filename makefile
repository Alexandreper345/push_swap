NAME = push_swap
CC = cc
FLAGS = -Wall -Wextra -Werror
PRINTF = libftprintf.a
SRC_FILE = main.c
RM = rm -rf
SRCC_MOVIES = pa.c\
			pb.c\
			ra.c\
			rb.c\
			rr.c\
			rra.c\
			rrb.c\
			rrr.c\
			sa.c\
			sb.c\
			ss.c
SRCC_HANDLING = function_handling.c
SRCC_EXTERNAL_FUNCTION = ft_atol.c\
						ft_isdigit.c\
						ft_list_size.c\
						ft_lsadd_back.c\
						ft_lstlast.c\
						ft_lstnew.c\
						ft_putchar_fd.c\
						ft_putstr_fd.c\
						ft_split.c\
						ft_strdup.c\
						ft_strjoin.c\
						ft_strlen.c
SRCC_CREAT_NODE = create_node.c
SRCC_ALGORITHM = algorithm_array.c\
				algorithm_safe_node.c\
				algorithm.c
SRCC_ALGORITHM_ERROR = algorithm_ERROR.c\
					algorithm_frees.c\
					node_array_ERROR.c

SRCC_DIR_MOVIES = functions_movies/
SRCC_DIR_HANDLING = functions_is_handling/
SRCC_DIR_EXTERNAL = external_functions/
SRCC_DIR_CREAT_NODE = Create_node/
SRCC_DIR_ALGORITHM = create_algorithm/
SRCC_DIR_ALGORITHM_ERROR = algorithm_ERROR/

SRC_MOVIES = $(addprefix $(SRCC_DIR_MOVIES), $(SRCC_MOVIES))
SRC_HANDLING = $(SRCC_DIR_HANDLING)$(SRCC_HANDLING)
SRC_EXTERNAL_FUNCTION = $(addprefix $(SRCC_DIR_EXTERNAL), $(SRCC_EXTERNAL_FUNCTION))
SRC_CREAT_NODE = $(SRCC_DIR_CREAT_NODE)$(SRCC_CREAT_NODE)
SRC_ALGORITHM = $(addprefix $(SRCC_DIR_ALGORITHM), $(SRCC_ALGORITHM))
SRC_ALGORITHM_ERROR = $(addprefix $(SRCC_DIR_ALGORITHM_ERROR), $(SRCC_ALGORITHM_ERROR))

OBJS_MAIN = ${SRC_FILE:.c=.o}
OBJS_MOVIES = ${SRC_MOVIES:.c=.o}
OBJS_HANDLING = ${SRC_HANDLING:.c=.o}
OBJS_EXTERNAL = ${SRC_EXTERNAL_FUNCTION:.c=.o}
OBJS_NODE = ${SRC_CREAT_NODE:.c=.o}
OBJS_ALGORITHM = ${SRC_ALGORITHM:.c=.o}
OBJS_ALGORITHM_ERROR = ${SRC_ALGORITHM_ERROR:.c=.o}

all: $(NAME)

${NAME}: ${OBJS_MAIN} ${OBJS_MOVIES} ${OBJS_HANDLING} ${OBJS_EXTERNAL} ${OBJS_NODE} ${OBJS_ALGORITHM} ${OBJS_ALGORITHM_ERROR}
	@make -C Printf
	$(CC) $(FLAGS) ${OBJS_MAIN} ${OBJS_MOVIES} ${OBJS_HANDLING} ${OBJS_EXTERNAL} ${OBJS_NODE} ${OBJS_ALGORITHM} ${OBJS_ALGORITHM_ERROR} Printf/$(PRINTF) -o $(NAME)

clean:
	@make clean -C Printf
	${RM} ${OBJS_MAIN}
	${RM} ${OBJS_MOVIES}
	${RM} ${OBJS_HANDLING}
	${RM} ${OBJS_EXTERNAL}
	${RM} ${OBJS_NODE}
	${RM} ${OBJS_ALGORITHM}
	${RM} ${OBJS_ALGORITHM_ERROR}

fclean: clean
	@make clean -C Printf
	${RM} ${NAME}
	${RM} Printf/${PRINTF}

re: fclean all

.PHONEY: all clean fclean re

