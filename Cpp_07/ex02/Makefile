# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/24 19:06:49 by oavelar           #+#    #+#              #
#    Updated: 2022/02/23 15:48:43 by oavelar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKEFLAGS		+= --quiet

NAME = array

ifeq ($(shell uname), Linux)
 CC = g++
else
 CC = clang++
endif
FLAGS = -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

FILE = main.cpp

OBJ		:= $(FILE:%.cpp=%.o)

OK			= [\033[32mOK\033[0m]
RED			= \033[1;31m
MAG			= \033[33;95m
OFF			= \033[0m

all: $(NAME)

%.o: %.cpp
			$(CC) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJ) 
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