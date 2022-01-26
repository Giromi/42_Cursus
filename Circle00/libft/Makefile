CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
ARFLAGS = rcus
CURRENT_DIR = ./
INCLUDES = ./libft.h
MAIN = ./Main/main.c
INC = -I./

TARGET = a.out
PUSH_DIR = PUSH_VER/

#-------------------------------

#-------------------------------Part1
SRCS_FILES = ft_isalpha.c		\
			 ft_isdigit.c		\
			 ft_isalnum.c		\
			 ft_isascii.c		\
			 ft_isprint.c		\
			 ft_strlen.c		\
			 ft_memset.c		\
			 ft_bzero.c			\
			 ft_memcpy.c		\
			 ft_memmove.c		\
			 ft_toupper.c		\
			 ft_tolower.c		\
			 ft_strchr.c		\
			 ft_strrchr.c		\
			 ft_memchr.c		\
			 ft_strlcpy.c		\
			 ft_strlcat.c		\
			 ft_strncmp.c		\
			 ft_memcmp.c		\
			 ft_atoi.c			\
			 ft_strnstr.c		\
			 ft_calloc.c		\
			 ft_strdup.c

#-------------------------------Part2
SRCS_FILES += ft_putchar_fd.c		\
			  ft_putstr_fd.c		\
			  ft_putnbr_fd.c		\
			  ft_putendl_fd.c		\
			  ft_substr.c			\
			  ft_strjoin.c		\
			  ft_strtrim.c		\
			  ft_itoa.c			\
			  ft_split.c			\
			  ft_strmapi.c		\
			  ft_striteri.c

#-------------------------------Bonus
BONUS_SRCS_FILES = ft_lstnew.c			\
			 	   ft_lstlast.c			\
			 	   ft_lstsize.c			\
			 	   ft_lstadd_front.c		\
			 	   ft_lstadd_back.c		\
			 	   ft_lstdelone.c			\
			 	   ft_lstclear.c			\
				   ft_lstiter.c			\
			 	   ft_lstmap.c


SRCS = $(SRCS_FILES)
OBJS = $(SRCS:.c=.o)

# FILENAME = $(SRCS:ft_%=%) # 파일 경로 삭제
# MAIN_FILE = $(addprefix main_, $(FILENAME))
#-------------------------------
PUSH = $(SRCS) $(BONUS_SRCS_FILES)
#TMP = $(wildcard $(PUSH_DIR)*.c)
# DONE = $(TMP:$(PUSH_DIR)%=%) # 파일 경로 삭제
# SRCS = $(, $(addsuffix .c, $(FILES)))
#

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
	$(CC) -g $(MAIN) -I./ -L./ -lft

%.out: %.c bonus $(NAME) $(MAIN) $(INCLUDES)
	$(CC) -g $(addprefix $(MAIN:%.c=%)_, $(<:ft_%=%)) -I./ $< -L./ -lft

# main:
#     @echo $(addsuffix

# push---------------------------------------------
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
