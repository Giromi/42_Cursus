#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minsuki2 <minsuki2@student.42seoul.>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 12:15:15 by minsuki2          #+#    #+#              #
#    Updated: 2021/11/29 20:11:07 by minsuki2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = diary_exe
AR = ar rcs
RM = rm -f
INC = -I.
FILES = memo \
		calendar \
		main
CURRENT_DIR = ./

all : $(NAME)

.SUFFIXES : .c .o #old fashion

OBJECTS = $(addprefix $(CURRENT_DIR), $(addsuffix .o, $(FILES)))
SOURES = $(addprefix $(CURRENT_DIR), $(addsuffix .c, $(FILES)))


$(NAME) : $(OBJECTS)
	$(CC) $(INC) $^ -o $@

clean :
	$(RM) *.o

fclean : clean
	$(RM) $(NAME)

re : fclean all

$(OBJECTS): $(SOURES) diary.h
.PHONY : clean fclean re all

