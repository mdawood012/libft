CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
DEPS = libft.h
NAME = libft.a
LIB = ar rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(LIB) $(NAME) $(OBJS)

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(NAME) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
