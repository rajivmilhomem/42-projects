# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rtavares <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/25 12:52:16 by rtavares          #+#    #+#              #
#    Updated: 2020/01/25 12:52:30 by rtavares         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c
HEAD	= libft.h
OBJ		= $(SRCS:.c=.o)
FLAGS	= -Wall -Wextra -Werror
RM		= rm -f
CC		= gcc
AR		= ar -rc

all:		$(NAME)

$(NAME):	$(OBJ) $(HEAD)
			$(CC) $(FLAGS) -I $(HEAD) -c $(SRCS)
			$(AR) $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: 	all clean fclean re