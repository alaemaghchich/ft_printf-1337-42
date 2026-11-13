NAME = libftprintf.a

SRCS = ft_printf.c\
	   ft_printhex.c\
	   ft_putchar.c\
	   ft_putnbr.c\
	   ft_putstr.c\
	   ft_putUnbr.c

OBJS = $(SRCS:.c=.o)

AR = ar rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	@cc -Wall -Wextra -Werror -c $< -o $@

clean:
	@rm -f $(OBJS)
	@clear

fclean: clean
	@rm -f $(NAME)
	@clear

re: fclean all

.PHONY: all clean fclean re