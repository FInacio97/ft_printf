NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

FILE = ft_param.c ft_printf.c ft_putchar.c\
		ft_putnbr.c ft_putnbrhexa.c ft_putstr.c\
		ft_putunsigned.c ft_adress.c

FILE_O = $(FILE:.c=.o)

RMOV = rm -f

STAT = ar -rcs

$(NAME):	$(FILE_O)
			$(STAT) $(NAME) $(FILE_O)

all:	$(NAME)

clean:
	$(RMOV) $(FILE_O)
	
fclean:	clean
		$(RMOV) $(NAME)
		
re: fclean all

.PHONY: all  clean fclean re