# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/05 14:59:37 by oavelar           #+#    #+#              #
#    Updated: 2021/09/05 18:41:21 by oavelar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ufc

ifeq ($(shell uname), Linux)
 CC = g++
else
 CC = clang++
endif
FLAGS = -Wall -Wextra -Werror -std=c++98

FILE = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
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