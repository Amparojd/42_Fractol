# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/13 17:59:12 by ampjimen          #+#    #+#              #
#    Updated: 2023/12/13 18:13:09 by ampjimen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C = clang

NAME = fractol

CFLAGS = -Wall -Wextra -Werror -03

LIBFT = libft 

DIR_S = src

DIR_O = obj

DIR_MLX = minilibx

HEADERS = includes

SOURCES = \

SRCS = $(addprefix $(DIR_S)/,$(SOURCES))

OBJS = $(addprefix $(DIR_O)/,$(sources:.c=.o))

all : obj $(NAME)

$(NAME): %(OBJS)
	@make -C $(LIBFT)
	@make -C $(DIR_MLX)
	@$(CC) $(FLAGS) -L $(LIBFT) -lft -o $@ $^ -framework OpenGL -framework AppKit -L $(DIR_MLX) -lmlx
#   @echo "\033[32mFract-ol: OK!"

obj:
	@mkdir -p obj

$(DIR_O)/%.o: $(DIR_S)/%.c $(HEADERS)/$(NAME).h 
	@$(CC) $(FLAGS) -I $(HEADERS) -c -o $@ $<

clean:
	@rm -f $(OBJS)
	@make clean -C $(LIBFT)
	@make clean -C $(DIR_MLX)
	@rm -rf $(DIR_O)

fclean: clean
	@rm -f $(NAME)
	@make fclean -C $(LIBFT)
	@make fclean -C $(DIR_MLX)

re: fclean all

.PHONY: all, temporary, norme, clean, fclean, re
	