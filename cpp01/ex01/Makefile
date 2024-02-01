# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flafi <flafi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/31 03:06:44 by flafi             #+#    #+#              #
#    Updated: 2024/01/31 03:06:44 by flafi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DEF_COLOR = \033[0;39m
RED = \033[0;91m
GREEN = \033[0;32m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = ./main.cpp ./newZombie.cpp ./randomChump.cpp ./Zombie.cpp \
./ZombieHorde.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = zombies

.SILENT:

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	echo "$(GREEN)ex00 Compiled$(DEF_COLOR)"

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re