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

NAME = ft_printf

SRCS = ft_printf.c ft_c.c ft_s.c ft_d_i.c ft_u.c ft_x.c ft_p.c main.c\
       utilities/ft_16hex.c utilities/ft_strcpy.c utilities/ft_strlen.c utilities/ft_atoi.c

#SRCS = ft_printf.c ft_c.c ft_s.c ft_d_i.c ft_u.c ft_x.c ft_p.c \
       utilities/ft_itoa.c utilities/ft_16hex.c \
       utilities/ft_strcpy.c utilities/ft_strlen.c utilities/ft_atoi.c

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re