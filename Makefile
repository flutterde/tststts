CC = cc 
CFLAGS = -Wall -Wextra -Werror 
SRCS = ft_lstdelone.c ft_lstnew.c ft_lstadd_back.c ft_lstiter.c \
ft_lstsize.c ft_lstadd_front.c  ft_lstlast.c  ft_lstclear.c  ft_lstmap.c \
ft_itoi.c

OBJ = $(SRCS:.c=.o)


AR = ar crs

RM = rm -rf

NAME = lib.a


all : $(NAME)


$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)


clean : 
	$(RM) *.o


fclean : clean
	$(RM) $(NAME)

re : fclean all
