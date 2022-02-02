CC = gcc
CFLAGS = -Wall -Wextra -Werror
ARFLAGS = rcus
INCLUDES = ./get_next_line.h
MAIN = ./Main/main.c
INC = -I./


TARGET = a.out
FD_TARGET = fd.out
PUSH_DIR = PUSH_VER/
BS = 0
FM = 1024

#-------------------------------

#-------------------------------Mandatory Part
SRCS_FILES = get_next_line.c		\
			 get_next_line_utils.c	\

#-------------------------------Bonus Part
BONUS_SRCS_FILES = get_next_line_bonus.c			\
			 	   get_next_line_utils_bonus.c		\


SRCS = $(SRCS_FILES)

PUSH = $(SRCS) $(BONUS_SRCS_FILES)

exe: $(SRCS) $(MAIN) $(INCLUDES)
	@echo --------------------------------
	@echo $@ Making...
	$(CC) -g $(CFLAGS) -D BUFFER_SIZE=$(BS) $(MAIN) $(SRCS) -I./

push: $(PUSH)
	@echo --------------------------------
	@echo $^ Copying... | tr " " "\n"
	@cp $^ $(PUSH_DIR)

# clean--------------------------------------------

clean:
	@echo
	$(RM) $(SRCS_FILES:.c=.o) $(BONUS_SRCS_FILES:.c=.o)

fclean: clean
	@echo
	$(RM) $(CURRENT_DIR)$(TARGET)

re: fclean exe

bonus:
	@echo Making Bonus!...
	@$(MAKE) "SRCS = $(BONUS_SRCS_FILES)" exe #-p > makefile.txt

.PHONY: all clean fclean re bonus push exe
