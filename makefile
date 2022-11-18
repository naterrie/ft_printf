OBJS		= $(SRCS:.c=.o)

%.o: %.c
		cc -I. -o $@ -c $? $(FLAGS)

SRC =	ft_printf.c \
		ft_putnbr.c \
		ft_putchar.c \


FLAGS	= -Wall -Wextra -Werror -I.

NAME	= libftprintf.a

all:	$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)

fclean:	clean
	@rm -f $(NAME)

re:	fclean $(NAME)

.PHONY:	all clean fclean re
