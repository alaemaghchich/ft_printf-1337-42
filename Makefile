NAME = libftprintf.a

SRCS = ft_printf.c\
	   ft_puthex.c\
	   ft_putchar.c\
	   ft_putnbr.c\
	   ft_putstr.c\
	   ft_putUnbr.c\
	   ft_nblen.c\
	   ft_putptr.c


OBJS = $(SRCS:.c=.o)

AR = ar rcs

all: $(NAME) clean

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	@cc -Wall -Wextra -Werror -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re