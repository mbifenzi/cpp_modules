# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/15 19:00:30 by mbifenzi          #+#    #+#              #
#    Updated: 2021/12/24 16:43:09 by mbifenzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook

SRC =	main.cpp Contact.cpp Phonebook.cpp

all :	$(NAME)

$(NAME): $(SRC)
		@clang++ -Wall -Wextra -Werror $(SRC) -o $(NAME)

clean:
	@rm -f $(OBJECT)

fclean: clean
	@rm -f $(NAME)

re: fclean all