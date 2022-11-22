OBJS	= $(SRC:.c=.o)

HEADER = ft_printf.h

%.o: %.c
		cc $(FLAGS) -c $< -o $@

SRC =	ft_printf.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putptr.c \
		ft_putstr.c \

FLAGS	= -Wall -Wextra -Werror


NAME	= libftprintf.a

all:	$(NAME)

$(NAME):	$(OBJS) $(HEADER) Makefile
	ar -rcs $(NAME) $(OBJS)

norm:
	@norminette *.c

clean:
	@rm -f $(OBJS)

fclean:	clean
	@rm -f $(NAME)

re:	fclean $(NAME)

.PHONY:	all clean fclean re norm
