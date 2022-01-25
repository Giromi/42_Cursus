CC = gcc
CFLAGS = -Wall -Wextra -Werror
ARFLAGS = rcus
CURRENT_DIR = ./
INCLUDES = ./libft.h
MAIN = ../Main/main.c
INC = -I./


TARGET = a.out
PUSH_DIR = PUSH_VER/
BUFFER_SIZE ?= 1;

#-------------------------------

#-------------------------------Mandatory Part
SRCS_FILES = get_next_line.c		\
			 get_next_line_utils.c	\

#-------------------------------Bonus Part
BONUS_SRCS_FILES = get_next_line_bonus.c			\
			 	   get_next_line_utils_bonus.c		\


SRCS ?= $(SRCS_FILES)
OBJS = $(SRCS:.c=.o)

# FILENAME = $(SRCS:ft_%=%) # 파일 경로 삭제
# MAIN_FILE = $(addprefix main_, $(FILENAME))
#-------------------------------
PUSH = $(SRCS) $(BONUS_SRCS_FILES)
#TMP = $(wildcard $(PUSH_DIR)*.c)
# DONE = $(TMP:$(PUSH_DIR)%=%) # 파일 경로 삭제
# SRCS = $(, $(addsuffix .c, $(FILES)))
#

%.o: %.c $(CURRENT_DIR)$(INCLUDES)
	$(CC) $(INC) $(CFLAGS) -c $<

# exe---------------------------------------------
exe: bonus $(TARGET)

$(TARGET): $(NAME) $(MAIN) $(INCLUDES)
	@echo --------------------------------
	@echo $@ Making...
	$(CC) -D BUFFER_SIZE=$(BUFFER_SIZE) $(MAIN) -I../libft/

%.out: %.c bonus $(NAME) $(MAIN) $(INCLUDES)
	$(CC) -g $(addprefix $(MAIN:%.c=%)_, $(<:ft_%=%)) -I../gnl $< -L./ -lft

push: $(PUSH)
	@echo --------------------------------
	@echo $^ Copying... | tr " " "\n"
	@cp $^ $(PUSH_DIR)
#@rename -f 's///' $(PUSH_DIR)*
#@rename -f 's/_[2-9](st|nd|rd|th)//' $(PUSH_DIR)*
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
