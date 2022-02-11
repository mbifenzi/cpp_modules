# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/06 17:40:00 by mbifenzi          #+#    #+#              #
#    Updated: 2022/02/11 19:43:39 by mbifenzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Template

SRC =	main.cpp

all :	$(NAME)

bonus : $(BONUS_NAME)

$(NAME): $(SRC)
		@c++ -Wall -Wextra -Werror $(SRC) -o $(NAME) -fsanitize=address -g

clean:
	@rm -f $(OBJECT)

fclean: clean
	@rm -f $(NAME)

re: fclean all