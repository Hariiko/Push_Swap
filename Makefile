# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laltarri <laltarri@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 14:10:17 by laltarri          #+#    #+#              #
#    Updated: 2023/11/25 12:30:13 by laltarri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER	=	push_swap.h

NAME	=	tt

SRCS	=	push_swap.c \
			utils.c

OBJS	= 	$(SRCS:.c=.o)

CC	= 	gcc

RM	= 	rm -f

FLAGS	= 	-Wall -Wextra -Werror

.c.o :
	${CC} ${FLAGS} -c $< -o $@

$(NAME): ${OBJS} ${HEADER}
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

fclean: clean
	$(RM) $(NAME)

clean:
	$(RM) $(OBJS)

re: fclean all

.PHONY: all clean fclean re
