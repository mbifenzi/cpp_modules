# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/15 19:00:30 by mbifenzi          #+#    #+#              #
#    Updated: 2022/01/13 19:41:10 by mbifenzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ANIMALS

SRC =	main.cpp Cat.cpp Animal.cpp Dog.cpp WrongAnimal.cpp

all :	$(NAME)

bonus : $(BONUS_NAME)
		
$(NAME): $(SRC)
		@clang++ -Wall -Wextra -Werror $(SRC) -o $(NAME) -fsanitize=address -g

clean:
	@rm -f $(OBJECT)

fclean: clean
	@rm -f $(NAME)

re: fclean all