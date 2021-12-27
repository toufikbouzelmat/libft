# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbouzalm <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 02:27:43 by tbouzalm          #+#    #+#              #
#    Updated: 2021/11/29 02:34:16 by tbouzalm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_bzero.c ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_memmove.c ft_memcmp.c ft_memcpy.c ft_memchr.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c ft_strtrim.c ft_strjoin.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putchar_fd.c ft_split.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) libft.h
	ar rc $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all
