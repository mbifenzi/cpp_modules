# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/15 19:00:30 by mbifenzi          #+#    #+#              #
#    Updated: 2022/01/13 01:12:03 by mbifenzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Open

SRC =	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

all :	$(NAME)

bonus : $(BONUS_NAME)
		
$(NAME): $(SRC)
		@clang++ -Wall -Wextra -Werror $(SRC) -o $(NAME) -fsanitize=address -g

clean:
	@rm -f $(OBJECT)

fclean: clean
	@rm -f $(NAME)

re: fclean all