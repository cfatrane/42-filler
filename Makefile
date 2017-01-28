# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/25 13:44:53 by cfatrane          #+#    #+#              #
#*   Updated: 2017/01/28 20:11:29 by cfatrane         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = cfatrane.filler

# Path

SRC_PATH = ./srcs/

OBJ_PATH = ./objs/

INC_PATH = -I./includes/

# Name

SRC_NAME = 	main.c		\
			ft_map.c	\
			ft_info.c	\
			ft_token.c	\
			ft_check.c	\
			ft_push.c	\
			ft_filler.c	\
			ft_utils.c	\

OBJ_NAME = $(SRC_NAME:.c=.o)

# Files

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))

OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

# Flags

LDFLAGS = -L./libft/

PRINTFFLAG = -L./ft_printf/

LFT = -lft

PRINTF = -lftprintf

CC = gcc $(CFLAGS)

CFLAGS = -Wall -Wextra -Werror

# Rules

all: $(NAME)

$(NAME): $(OBJ)
	@make -C./libft/
	@make -C./ft_printf/
	@echo "\033[34mCreation of $(NAME) ...\033[0m"
	@$(CC) $(LDFLAGS) $(PRINTFFLAG) $(LFT) $(PRINTF) $(OBJ) -o $@
	@echo "\033[32m$(NAME) created\n\033[0m"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) $(INC_PATH) -o $@ -c $<

clean:
	@make clean -C ./libft/
	@make clean -C ./ft_printf/
	@echo "\033[33mRemoval of .o files of $(NAME) ...\033[0m"
	@rm -f $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true
	@echo "\033[31mFiles .o deleted\n\033[0m"

fclean: clean
	@make fclean -C ./libft/
	@make fclean -C ./ft_printf/
	@echo "\033[33mRemoval of $(NAME)...\033[0m"
	@rm -f $(NAME)
	@echo "\033[31mBinary $(NAME) deleted\n\033[0m"

re: fclean all

norme:
	norminette $(SRC)
	norminette $(INC_PATH)*.h

.PHONY: all, clean, fclean, re
