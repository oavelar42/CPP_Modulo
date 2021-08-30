# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oavelar <oavelar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/30 16:41:28 by oavelar           #+#    #+#              #
#    Updated: 2021/08/30 16:48:43 by oavelar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Megaphone

ifeq ($(shell uname), linux)
	CC = g++
else
	CC = clang++
endif

FLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

all: $(NAME)
	$(CC) megaphone.cpp $(FLAGS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all