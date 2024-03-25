CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = srcs
INC_DIR = includes

SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = $(SRCS:.c=.o)

TARGET = libft.a

all : $(TARGET)

$(TARGET) : $(OBJS)
	ar rc $(TARGET) $(SRCS)

$(OBJS) : $(SRCS)
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(TARGET)

re : fclean all
