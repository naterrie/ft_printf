OBJS		= $(SRCS:.c=.o)

%.o: %.c
		cc -I. -o $@ -c $? $(FLAGS)

SRC =	ft_printf.c \
		ft_putnbr.c \
		ft_putchar.c \
		ft_putarg.c \
		ft_putstr.c \
		ft_putpr.c \


FLAGS	= -Wall -Wextra -Werror

HEADER = printf.h

NAME	= libftprintf.a

all:	$(NAME)

$(NAME):	$(OBJS) Makefile $(HEADER)
	ar rcs $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)

fclean:	clean
	@rm -f $(NAME)

re:	fclean $(NAME)

.PHONY:	all clean fclean re
