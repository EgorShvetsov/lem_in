.PHONY: all clean fclean re directories

DIR_SRC = srcs/
DIR_INC = -I../includes/
DIR_OBJ = ../obj/

SRC = ft_del.c\
      ft_lstadd.c\
      ft_lstdel.c\
      ft_lstdelone.c\
      ft_lstiter.c\
      ft_lstmap.c\
      ft_lstnew.c

HEADERS =	ft_lst.h

FLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:%.c=%.o)
DEP = $(OBJ:%.o=%.d)
SRCS = $(SRC:%.c=$(DIR_SRC)%.c)
OBJS = $(SRC:%.c=$(DIR_OBJ)%.o)
DEPS = $(SRC:%.c=$(DIR_OBJ)%.d)

MKDIR_P = mkdir -p

all: directories $(OBJS)

directories:
	@$(MKDIR_P) $(DIR_OBJ)

$(DIR_OBJ)%.o: $(DIR_SRC)%.c
	gcc $(FLAGS) -MD -o $@ -c $< $(DIR_INC)
include $(wildcard *.d)


clean:
	rm -f $(DIR_OBJ)*.o
	rm -f $(DIR_OBJ)*.d
	rm -rf $(DIR_OBJ)

re: clean all