# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rtammi <rtammi@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 14:30:33 by rtammi            #+#    #+#              #
#    Updated: 2024/04/24 12:28:56 by rtammi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		libft.a

SRCS = 		ft_isalpha.c	\
			ft_isdigit.c	\
			ft_isalnum.c	\
			ft_isascii.c	\
			ft_isprint.c	\
			ft_strlen.c		\
			ft_memset.c		\
			ft_bzero.c		\
			ft_memcpy.c		\
			ft_memmove.c	\
			ft_strlcpy.c	\
			ft_strlcat.c	\
			ft_toupper.c	\
			ft_tolower.c	\
			ft_strchr.c		\
			ft_strrchr.c	\
			ft_strncmp.c	\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_strnstr.c	\
			ft_atoi.c		\
			ft_calloc.c		\
			ft_strdup.c		\
			ft_substr.c		\
			ft_strjoin.c	\
			ft_strtrim.c	\
			# ft_split.c		\
			# ft_itoa.c		\
			# ft_strmapi.c	\
			# ft_striteri.c	\
			# ft_putchar_fd.c	\
			# ft_putstr_fd.c	\
			# ft_putendl_fd.c	\
			# ft_putnbr_fd.c	\

# BONUS =		ft_lstnew.c		\
# 			ft_lstadd_front.c	\
# 			ft_lstsize.c		\
# 			ft_lstlast.c		\
# 			ft_lstadd_back.c	\
# 			ft_lstdelone.c		\
# 			ft_lstclear.c		\
# 			ft_lstiter.c		\
# 			ft_lstmap.c		\

# SRCS += $(BONUS)

OBJS = $(SRCS:.c=.o)

CFLAGS := -Wall -Wextra -Werror $(CFLAGS)

.PHONY: all clean fclean re

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

$(NAME): $(OBJS)
	ar rcs $@ $^

%.o : %.c
	cc $(CFLAGS) -c $< -o $@