# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laltarri <laltarri@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 14:10:17 by laltarri          #+#    #+#              #
#    Updated: 2023/11/22 14:11:10 by laltarri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER	=	push_swap.h

NAME	=	push_swap.a

SRCS	=	push_swap.c

OBJS	= 	$(SRCS:.c=.o)

CC	= 	gcc

RM	= 	rm -f

LIBC	= 	ar -rcs

FLAGS	= 	-Wall -Wextra -Werror

.c.o :
	${CC} ${FLAGS} -c $< -o $@

$(NAME): ${OBJS} ${HEADER}
	$(LIBC) $(NAME) $(OBJS)

all: $(NAME)

fclean: clean
	$(RM) $(NAME)

clean:
	$(RM) $(OBJS)

re: fclean all

.PHONY: all clean fclean re
