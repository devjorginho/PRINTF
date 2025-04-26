NAME = libftprintf.a

SOURCES = 	ft_printf.c \
			allformats.c

OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)
	
$(NAME): $(OBJECTS)
	@$(AR) rcs $(NAME) $(OBJECTS)

%.o: %.c
	@$(CC) -c $(CFLAGS) $< -o $@

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

test: re
	@cc test.c libftprintf.a
	@./a.out
	@rm -f a.out

.PHONY: all clean fclean re