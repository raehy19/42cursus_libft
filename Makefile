# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/04 17:19:28 by rjeong            #+#    #+#              #
#    Updated: 2022/07/04 20:47:27 by rjeong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRCS = ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memmove.c ft_strlcat.c ft_strncmp.c ft_tolower.c ft_isalpha.c ft_isprint.c ft_memset.c ft_strlcpy.c ft_strnstr.c ft_toupper.c ft_bzero.c ft_isascii.c ft_memcpy.c ft_strchr.c ft_strlen.c ft_strrchr.c
OBJS = $(SRCS:.c=.o)
INCLUDES = libft.h
RM = rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	ar rs $@ $^

%.o : %.c
	$(CC) $(CFLAGS) -c $^ -o $@ -I $(INCLUDES)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : $(NAME) all clean fclean re