# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jugingas <jugingas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 13:52:59 by jugingas          #+#    #+#              #
#    Updated: 2022/11/17 13:52:12 by jugingas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=	src/*.c

OBJ			=	$(SRC:.c=.o)

CFLAGS		+=	-Wall -Wextra -Werror -I./includes

NAME		=	libftprintf.a

all:	$(NAME)

$(NAME):
	cc -c $(CFLAGS) $(SRC)
	mv *.o ./src/
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ) $(BOBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
