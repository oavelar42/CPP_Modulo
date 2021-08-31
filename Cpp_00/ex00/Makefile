# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/30 16:41:28 by oavelar           #+#    #+#              #
#    Updated: 2021/08/31 17:58:34 by oavelar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

ifeq ($(shell uname), Linux)
CC = g++
else
CC = clang++
endif
FLAGS = -Wall -Wextra -Werror -std=c++98
OBJ = o.
OK			= [\033[32mOK\033[0m]
RED			= \033[1;31m
YEL			= \033[33;1m
OFF			= \033[0m

all: $(NAME)
	@$(CC) $(FLAGS) megaphone.cpp -o $(NAME)
	@echo "Compilation of $(YEL)$(NAME): $(OFF) $(OK)$(OFF)"

clean:
	@rm -f $(OBJ)
	@echo "$(RED)Objects deleted!$(OFF)"

fclean: 
	@rm $(NAME)
	@echo "$(RED)All removed!$(OFF)"

.PHONY: all clean fclean 