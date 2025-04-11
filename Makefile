# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kuyamagi < kuyamagi@student.42tokyo.jp>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/07 15:02:05 by kuyamagi          #+#    #+#              #
#    Updated: 2024/12/07 15:02:06 by kuyamagi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#NAME = ft_printf
NAME = libftprintf.a


SRCS    = ft_printf.c ft_c.c ft_s.c ft_d_i.c ft_u.c ft_x.c ft_p.c\
          utilities/ft_16hex.c utilities/ft_strcpy.c utilities/ft_strlen.c \
          utilities/ft_atoi.c utilities/ft_putchar.c\

OBJS    = $(SRCS:.c=.o)

CC      = gcc
CFLAGS  = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
