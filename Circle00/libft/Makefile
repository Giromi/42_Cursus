# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minsuki2 <minsuki2@student.42seoul.>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#   reated: 2021/11/22 13:56:28 by minsuki2          #+#    #+#              #
#    Updated: 2021/11/29 20:07:37 by minsuki2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
RM = rm -f
ARFLAGS = rcs
INC = -I./

#-------------------------------Part1
FILES =	ft_isalpha		\
		ft_isdigit		\
		ft_isalnum		\
		ft_isascii		\
		ft_isprint		\
		ft_strlen		\
		ft_memset		\
		ft_bzero		\
		ft_memcpy		\
		ft_memmove		\
		ft_strlcpy		\
		ft_strlcat		\
		ft_toupper		\
		ft_tolower		\
		ft_strchr		\
		ft_strrchr		\
		ft_strncmp		\
		ft_memchr		\
		ft_memcmp		\
		ft_strnstr		\
		ft_atoi			\
		ft_calloc		\
		ft_strdup

#-------------------------------Part2
FILES += ft_substr		\
		 ft_strjoin		\
		 ft_strtrim		\
		 ft_split		\
		 ft_strmapi		\
		 ft_itoa		\
		 ft_puhar_fd	\
		 ft_putstr_fd	\
		 ft_putendl_fd	\
		 ft_putnbr_fd

CURRENT_DIR = ./
SRCS = $(addprefix $(CURRENT_DIR), $(addsuffix .c, $(FILES)))
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)

%.a : %.o
	$(AR) $(ARFLAGS)

list:
	@echo $(FILES)
	@echo
	@echo $(SRCS)
	@echo
	@echo $(OBJS)
	@echo

clean:
	$(RM) $(CURRENT_DIR)*.o

fclean: clean
	$(RM) $(CURRENT_DIR)$(NAME)

re: fclean all

$(OBJS): $(SRCS) libft.h
