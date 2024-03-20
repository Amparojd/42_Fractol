# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/17 17:39:40 by ampjimen          #+#    #+#              #
#    Updated: 2024/03/17 17:39:40 by ampjimen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program name
NAME    = fractol

# Sources
SRC_PATH    = src/
SRC         = main.c mandelbrot.c utils.c help.c \
              burning_ship.c julia.c checks.c hooks.c
SRCS        = $(addprefix $(SRC_PATH), $(SRC))

# Compiler
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror -fsanitize=address -g
MFLAGS  = -L ${MLX_PATH} -lmlx -lXext -lX11 -lm -lbsd

# Minilibx
MLX_PATH    = minilibx-linux/
MLX_NAME    = libmlx.a
MLX         = $(MLX_PATH)$(MLX_NAME)

# Includes
INC         = -I./includes/ -I./minilibx-linux/

# Libft
LIBFT_DIR   = ./libft/
LIBFT_A     = libft.a
LIBFT       = $(LIBFT_DIR)$(LIBFT_A)

# Objects
OBJ_PATH    = obj/
OBJ         = $(SRC:.c=.o)
OBJS        = $(addprefix $(OBJ_PATH), $(OBJ))

all: $(MLX) $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	@$(CC) $(CFLAGS) $(INC) -c $< -o $@
	@clear

$(MLX):
	@make -C $(MLX_PATH)
	@clear

$(NAME): $(OBJS)
	@clear
	@make -C $(LIBFT_DIR)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(MLX) $(LIBFT) $(MFLAGS)
	@clear
	@echo "\033[1;32m🌀 All fractals are ready to be visualized! 🖼️🌀\033[0m"

clean:
	@clear
	@rm -rf $(OBJ_PATH)
	@make -C $(MLX_PATH) clean
	@make -C $(LIBFT_DIR) clean
	@clear
	@echo "\033[1;33m✨ Object files have been successfully cleaned! ✨\033[0m"

fclean: clean
	@rm -f $(NAME)
	@make -C $(LIBFT_DIR) fclean
	@clear
	@echo "\033[1;33m✨ Executable and object files have been successfully cleaned! ✨\033[0m"

re: fclean all

.PHONY: all clean fclean re
