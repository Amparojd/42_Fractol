NAME = libft.a
GCC = gcc 
CFLAGS = -Wall -Wextra -Werror
OBJ_DIR		= ./obj/
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_putendl_fd.c \
ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strjoin.c \
ft_strlen.c ft_strncmp.c ft_substr.c ft_strnstr.c ft_striteri.c \
ft_strtrim.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_split.c 


OBJ_FILES = $(SRCS:.c=.o)
OBJS		= $(addprefix $(OBJ_DIR), $(OBJ_FILES))

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJ_DIR)%.o: $(SRCS_DIR)%.c
	@mkdir -p $(@D)
	@$(GCC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re