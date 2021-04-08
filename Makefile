# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/06 11:07:47 by abel-mak          #+#    #+#              #
#    Updated: 2021/04/07 14:28:06 by abel-mak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libasm.a

SRC= ft_strlen.s \
	 ft_strcpy.s \
	 ft_strcmp.s \
	 ft_write.s \
	 ft_read.s \
	 ft_strdup.s 

OBJ= $(SRC:.s=.o)

all: $(NAME)

$(NAME):$(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.s
	@nasm -f macho64 $<

clean:
	@rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
