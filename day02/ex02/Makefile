# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/15 19:00:30 by mbifenzi          #+#    #+#              #
#    Updated: 2022/02/12 19:06:57 by mbifenzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed1

SRC =	main.cpp Fixed.cpp

all :	$(NAME)

bonus : $(BONUS_NAME)
		
$(NAME): $(SRC)
		@c++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME) -fsanitize=address -g

clean:
	@rm -f $(OBJECT)

fclean: clean
	@rm -f $(NAME)

re: fclean all