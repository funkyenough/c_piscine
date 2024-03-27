CC = cc
CFLAGS = -Wall -Werror -Wextra

SRCS = main.c
OBJS = $(SRCS:.c=.o)

TARGET = ft_display_file

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJS) : $(SRCS)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(TARGET)

re: fclean all