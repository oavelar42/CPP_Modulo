# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/30 18:35:16 by oavelar           #+#    #+#              #
#    Updated: 2021/08/30 22:37:29 by oavelar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

ifeq ($(shell uname), Linux)
 CC = g++
else
 CC = clang++
endif
FLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

FILE = main.cpp

OK			= [\033[32mOK\033[0m]
RED			= \033[1;31m
YEL			= \033[33;1m
OFF			= \033[0m

all: $(NAME)

$(NAME):
	@$(CC) $(FILE) $(FLAGS) -o $(NAME)
	@echo "Compilation of $(YEL)$(NAME): $(OFF) $(OK)$(OFF)"

clean:
	@rm -f $(NAME)
	@echo "$(RED)Removed!$(OFF)"

fclean: clean

.PHONY: all clean fclean 