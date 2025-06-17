TARGET = rush-02

CC = gcc

INCLUDE_DIRS = -I libft -I Dictionary -I Parser -I FileProcessor -I Converter

CFLAGS = -Wall -Wextra -g -std=c11 $(INCLUDE_DIRS)

SRCS = 	main.c \
		Converter/converter.c \
		FileProcessor/file_processor.c \
		Parser/parser.c \
		Dictionary/dictionary.c \
		libft/libft.c

OBJS = $(SRCS:.c=.o)

.PHONY: all clean fclean re

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all