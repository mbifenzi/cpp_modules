# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/15 19:00:30 by mbifenzi          #+#    #+#              #
#    Updated: 2021/12/24 16:43:31 by mbifenzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC =	megaphone.cpp

all :	$(NAME)
		
$(NAME): $(SRC)
		@clang++ -Wall -Wextra -Werror $(SRC) -o $(NAME)

clean:
	@rm -f $(OBJECT)

fclean: clean
	@rm -f $(NAME)

re: fclean all