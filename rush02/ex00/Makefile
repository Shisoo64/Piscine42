# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssubielo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/30 18:36:20 by ssubielo          #+#    #+#              #
#    Updated: 2022/01/30 19:51:35 by ssubielo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRC = check_0_to_4.c check_5_to_9.c check_args.c dizainze.c error_func.c \
      parser.c read_file.c search.c search_convert_print.c split.c \
      tools.c main.c

all: $(NAME)

$(NAME):
	@gcc -o $(NAME) $(SRC)

clean:
	@rm -f *.o

fclean:
	@rm -f $(NAME)

