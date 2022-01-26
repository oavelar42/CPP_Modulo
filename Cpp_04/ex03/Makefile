# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/29 16:43:49 by oavelar           #+#    #+#              #
#    Updated: 2022/01/24 21:14:32 by oavelar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = materia

ifeq ($(shell uname), Linux)
 CC = g++
else
 CC = clang++
endif
FLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98 -fsanitize=address

FILE = main.cpp Cure.cpp Ice.cpp AMateria.cpp Character.cpp MateriaSource.cpp
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