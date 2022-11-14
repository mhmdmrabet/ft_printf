SRC = ft_printf.c \
		ft_strlen.c \
		ft_is_type.c \
		ft_search_params.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putnbr_fd.c \


OBJ = $(SRC:.c=.o)

CFLAGS = -Wextra -Werror -Wall

NAME = libftprintf.a

CC = gcc

$(NAME) : $(OBJ)
	ar crs $(NAME) $(OBJ)

all : $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
