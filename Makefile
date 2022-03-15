NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC =	ft_putchar.c\
		ft_putstr.c\
		ft_putnbr.c\
		ft_putuns.c\
		ft_puthexa.c\
		ft_pointer.c\
		ft_putheX.c\
		ft_printf.c

OBJECTS = $(SRC:.c=.o)

INCLUDES = ft_printf.h

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o : %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf $(OBJECTS) $(OBJECTS2)

fclean: clean
	rm -rf $(NAME)

re: fclean all

