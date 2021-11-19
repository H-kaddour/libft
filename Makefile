# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkaddour <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 20:10:00 by hkaddour          #+#    #+#              #
#    Updated: 2021/11/19 10:00:17 by hkaddour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = libft.a
cc = gcc
headers = ./includes
flags = -Wall -Wextra -Werror
srcs = $(wildcard *.c)
objs = $(srcs:.c=.o)

all : $(Name)

%.o: %.c
	$(cc) $(flags) -c $*.c -I libft.h -o $*.o

$(Name): $(objs)
	ar -rc $(Name) $(objs)

clean :
	rm -rf $(objs)

fclean : clean
	rm -rf $(Name)

re: fclean all

.PHONY: all clean fclean re

