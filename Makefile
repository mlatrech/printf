# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/03 14:34:09 by mlatrech          #+#    #+#              #
#    Updated: 2021/02/01 04:24:05 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


HEADER = libft.h

SRCS =	ft_atoi.c ft_memset.c ft_strlen.c ft_bzero.c ft_putchar_fd.c \
		ft_strmapi.c ft_calloc.c ft_putendl_fd.c ft_strncmp.c ft_isalnum.c \
		ft_putnbr_fd.c ft_strnstr.c ft_isalpha.c ft_putstr_fd.c ft_strrchr.c \
		ft_isascii.c ft_split.c ft_strtrim.c ft_isdigit.c ft_memccpy.c \
		ft_strchr.c ft_substr.c ft_isprint.c ft_memchr.c ft_strdup.c \
		ft_tolower.c ft_itoa.c ft_memcmp.c ft_strjoin.c ft_toupper.c \
		ft_memcpy.c ft_strlcat.c ft_memmove.c ft_strlcpy.c ft_insert_strseg.c \
		ft_strrndup.c ft_strndup.c \

OBJS = ${SRCS:.c=.o}

NAME = libft.a

all: $(NAME)

%.o: %.c $(HEADER)
	gcc -c -Wall -Werror -Wextra -c $< -o $@

$(NAME): $(OBJS) $(HEADER)
	ar rcs $(NAME) $(OBJS)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
