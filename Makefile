NAME		=	push_swap
CC			=	gcc -g
FLAGS		=	-Wall -Wextra -Werror
LFT			=	libft/libft.a
INC			=	-I ./libft
LIB			=	-L ./libft -lft
OBJ			=	$(patsubst src%, obj%, $(SRC:.c=.o))
SRC			=	src/main.c \
				src/parse_single_str.c \
				src/utils.c \

all:		$(LFT) obj $(NAME)

$(NAME):	$(OBJ)
			$(CC) $(FLAGS) -fsanitize=address -o $@ $^ $(LIB)

$(LFT):
			@echo " [ .. ] | Compiling libft.."
			@make -s -C libft
			@echo " [ OK ] | libft ready!"

obj:
			@mkdir -p obj

obj/%.o:	src/%.c
			$(CC) $(FLAGS) $(INC) -o $@ -c $<

clean:
			@make -s $@ -C libft
			@rm -rf $(OBJ) obj
			@echo "Objects Files has been removed."

fclean:		clean
			@make -s $@ -C libft
			@rm -rf $(NAME)
			@echo "Binary file has been removed."

re:			fclean all

.PHONY:		all clean fclean r