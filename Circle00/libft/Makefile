# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minsuki2 <minsuki2@student.42seoul.kr      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 13:56:28 by minsuki2          #+#    #+#              #
#    Updated: 2022/01/17 22:51:13 by minsuki2         ###   ########.fr        #
#    Updated: 2022/01/12 20:16:13 by minsuki2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
ARFLAGS = rcus
CURRENT_DIR = ./
INCLUDES = ./libft.h
MAIN = ../Main/main.c
INC = -I./

#Delete-----------------------------------
TARGET = a.out
PUSH_DIR = PUSH_VER/

#-------------------------------

#-------------------------------Part1
SRCS_FILES = ft_isalpha_finish.c	\
			 ft_isdigit_finish.c	\
			 ft_isalnum_finish.c	\
			 ft_isascii_finish.c	\
			 ft_isprint_finish.c	\
			 ft_strlen_finish.c		\
			 ft_memset_finish.c		\
			 ft_bzero_finish.c		\
			 ft_memcpy_finish.c		\
			 ft_memmove_finish.c	\
			 ft_toupper_finish.c	\
			 ft_tolower_finish.c	\
			 ft_strchr_finish.c		\
			 ft_strrchr_finish.c	\
			 ft_memchr_finish.c		\
			 ft_strlcpy_finish.c	\
			 ft_strlcat_finish.c	\
			 ft_strncmp_finish.c	\
			 ft_memcmp_finish.c		\
			 ft_atoi_finish.c		\
			 ft_strnstr_finish.c	\
			 ft_calloc_finish.c		\
			 ft_strdup_finish.c

#-------------------------------Part2
SRCS_FILES += ft_putchar_fd_finish.c	\
			  ft_putstr_fd_finish.c		\
			  ft_putnbr_fd_finish.c		\
			  ft_putendl_fd_finish.c	\
			  ft_substr_finish.c		\
			  ft_strjoin_finish.c		\
			  ft_strtrim_finish.c		\
			  ft_itoa_finish.c			\
			  ft_split_finish.c			\
			  ft_strmapi_finish.c		\
			  ft_striteri_finish.c

#-------------------------------Bonus
BONUS_SRCS_FILES = ft_lstnew_finish.c			\
			 	   ft_lstlast_finish.c			\
			 	   ft_lstsize_finish.c			\
			 	   ft_lstadd_front_finish.c		\
			 	   ft_lstadd_back_finish.c		\
			 	   ft_lstdelone_finish.c		\
			 	   ft_lstclear_finish.c			\
				   ft_lstiter_finish.c			\
			 	   ft_lstmap_finish.c


SRCS ?= $(SRCS_FILES)
OBJS = $(SRCS:.c=.o)

#-------------------------------
PUSH = $(wildcard ft_*_finish.c)
TMP = $(wildcard $(PUSH_DIR)*.c)
DONE = $(TMP:$(PUSH_DIR)%=%)

all: $(NAME)

$(NAME): $(OBJS)
	@echo --------------------------------
	@echo $@ Making...
	$(AR) $(ARFLAGS) $@ $^

%.o: %.c $(CURRENT_DIR)$(INCLUDES)
	$(CC) $(INC) $(CFLAGS) -c $<

# exe---------------------------------------------
exe: bonus $(TARGET)

$(TARGET): $(NAME) $(MAIN) $(INCLUDES)
	@echo --------------------------------
	@echo $@ Making...
	$(CC) -g $(MAIN) -I../libft/ -L./ -lft

%.out: %.c bonus $(NAME) $(MAIN) $(INCLUDES)
	$(CC) -g $(MAIN) -I../libft $< -L./ -lft


# push---------------------------------------------
push: $(PUSH)
	@echo --------------------------------
	@echo $^ Copying... | sed 's/ /\n/g'
	@cp $^ $(PUSH_DIR)
	@rename -f 's/_finish//' $(PUSH_DIR)*
#@rename -f 's/_[2-9](st|nd|rd|th)_finish//' $(PUSH_DIR)*
#@ls -1 $(PUSH_DIR)

# bring:
#     cp $(PUSH_DIR)*.c .

# pclean:
# #@echo $(DONE) | sed 's/ /\n/g'
#     @echo
#     $(RM) $(DONE)

# clean--------------------------------------------

clean:
	@echo
	$(RM) $(SRCS_FILES:.c=.o) $(BONUS_SRCS_FILES:.c=.o)

fclean: clean
	@echo
	$(RM) $(CURRENT_DIR)$(NAME)

re: fclean all exe

bonus:
	@echo Making Bonus!...
	@$(MAKE) "SRCS = $(SRCS_FILES) $(BONUS_SRCS_FILES)" all #-p > makefile.txt

.PHONY: all clean fclean re bonus push exe
