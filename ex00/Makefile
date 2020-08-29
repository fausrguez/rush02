# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: farodrig <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/29 18:29:39 by farodrig      #+#    #+#                  #
#    Updated: 2020/08/29 19:05:49 by farodrig      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
MAIN_DICTIONARY = numbers.dict

$(NAME):
	@gcc main.c -o $(NAME)

clean:
	@find . -name $(NAME) -delete

fclean: clean
	@find data -name *.dict -not -name $(MAIN_DICTIONARY) -delete
	