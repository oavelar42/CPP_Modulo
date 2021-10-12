# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 21:09:47 by oavelar           #+#    #+#              #
#    Updated: 2021/10/12 21:23:47 by oavelar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

ifeq ($(shell uname), Linux)
 CC = g++
else
 CC = clang++
endif
FLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

FILE = main.cpp Conversion.cpp Char.cpp

OBJ = .o

OK			= [\033[32mOK\033[0m]
RED			= \033[1;31m
MAG			= \033[33;95m
OFF			= \033[0m

all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS) $(FILE) -o $(NAME)
	@echo "Compilation of $(MAG)$(NAME): $(OFF) $(OK)$(OFF)"

clean:
	@rm -f $(OBJ)
	@echo "$(RED)Objects deleted!$(OFF)"

fclean: 
	@rm $(NAME) 
	@echo "$(RED)All removed!$(OFF)"

re: fclean all 

.PHONY: all clean fclean re