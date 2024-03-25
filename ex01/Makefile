CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR := ./srcs
INC_DIR := ./include

SRCS = $(addprefix $(SRC_DIR)/,ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c)
OBJS = $(SRCS:.c=.o)

TARGET = libft.a

all : $(TARGET)

$(TARGET) : $(OBJS)
	ar rc $(TARGET) $(SRCS)

$(OBJS) : $(SRCS)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(TARGET)

re : fclean all
