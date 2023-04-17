# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/12 13:54:54 by vstockma          #+#    #+#              #
#    Updated: 2023/04/14 14:10:33 by vstockma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = mybook.cpp

OBJ = $(SRC:.cpp=.o)

CC = g++

RM = rm -f

FLAGS = -g -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
