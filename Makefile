# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 20:10:00 by hkaddour          #+#    #+#              #
#    Updated: 2021/12/01 13:38:55 by hkaddour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
cc = gcc
headers = ./includes
flags = -Wall -Wextra -Werror
srcs =	ft_atoi.c \
		ft_lstadd_front.c \
		ft_putnbr_fd.c \
		ft_strlen.c \
		ft_bzero.c \
		ft_lstnew.c \
 		ft_putstr_fd.c \
		ft_strmapi.c \
		ft_calloc.c \
		ft_memchr.c \
		ft_split.c \
		ft_strncmp.c \
		ft_isalnum.c \
		ft_memcmp.c \
		ft_strchr.c \
		ft_strnstr.c \
		ft_isalpha.c \
		ft_memcpy.c \
		ft_strdup.c \
		ft_strrchr.c \
		ft_isascii.c \
		ft_memmove.c \
		ft_striteri.c \
		ft_strtrim.c \
		ft_isdigit.c \
		ft_memset.c \
		ft_strjoin.c \
		ft_substr.c \
		ft_isprint.c \
		ft_putchar_fd.c \
		ft_strlcat.c \
		ft_tolower.c \
		ft_itoa.c \
		ft_putendl_fd.c \
		ft_strlcpy.c \
		ft_toupper.c

objs = $(srcs:.c=.o)

all : $(NAME)

%.o: %.c
	$(cc) $(flags) -c $(srcs) -I libft.h

$(NAME): $(objs)
	ar -rc $(NAME) $(objs)

clean :
	rm -rf $(objs)

fclean : clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
