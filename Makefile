SRC = ft_printf.c \
	ft_putchar.c \
	ft_putstr.c \
	ft_ptr.c \
	ft_uns.c \
	ft_hexa_lo.c \
	ft_hexa_up.c \
	ft_putnbr.c 

OBJ = $(SRC:.c=.o)
CC = cc
NAME = libftprintf.a
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)
	
%.o:%.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean $(NAME)
.PHONY: all clean fclean re
