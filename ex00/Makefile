# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 18:07:58 by pmateo            #+#    #+#              #
#    Updated: 2025/03/29 00:01:25 by pmateo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
FLAGS = -std=c++98 -Wall -Werror -Wextra -g
RM = rm -f 
.DEFAULT_GOAL := all

NAME = ClapTrap

INCFILES = ClapTrap.hpp

SRCS = main.cpp ClapTrap.cpp

OBJ = ${SRCS:.cpp=.o}

${NAME}: ${OBJ} ${INCFILES}
		${CC} ${FLAGS} -o ${NAME} ${OBJ}

all: ${NAME}
				@echo "\033[1;5;32m# CLAPTRAP IS READY ! #\033[0m"

clean:
				@${RM} ${OBJ} ${OBJ_BONUS}
				@echo "\033[1;9;35m# No more object files. #\033[0m"

fclean: clean
				@${RM} ${NAME} ${NAME_BONUS}
				@echo "\033[1;9;35m# No more executable files. #\033[0m"

re: fclean all

.PHONY: all re clean fclean