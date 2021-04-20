SOURCES = ft_atoi.c		ft_bzero.c 		ft_isalnum.c \
		  ft_isalpha.c 	ft_isascii.c 	ft_isdigit.c \
		  ft_isprint.c 	ft_itoa.c 		ft_memccpy.c \
		  ft_memchr.c 	ft_memcmp.c 	ft_memmove.c \
		  ft_memset.c 	ft_putchar_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c	ft_putstr_fd.c 	ft_split.c \
		  ft_strchr.c 	ft_strjoin.c 	ft_strlcat.c \
		  ft_strlcpy.c 	ft_strlen.c 	ft_strmapi.c \
		  ft_strncmp.c 	ft_strnstr.c 	ft_strrchr.c \
		  ft_strtrim.c 	ft_substr.c 	ft_tolower.c \
		  ft_toupper.c	ft_strdup.c 	ft_calloc.c \
		  ft_memcpy.c \

BONUS = ft_lstadd_back.c	ft_lstadd_front.c	ft_lstclear.c \
		ft_lstdelone.c		ft_lstiter.c		ft_lstlast.c \
		ft_lstmap.c			ft_lstnew.c			ft_lstsize.c \

FLAGS = -Wall -Wextra -Werror
NAME = libft.a

OBJECT = $(patsubst %.c,%.o,$(SOURCES))
OBJECT2 = $(patsubst %.c,%.o,$(BONUS))

all: $(NAME)
$(NAME) : $(OBJECT)
	ar rcs $(NAME) $?
%.o : %.c
	gcc $(FLAGS) -c $< -o $@ -MD
bonus: $(OBJECT2)
	ar rcs $(NAME) $?
clean:
	rm -f $(NAME) $(OBJECT) $(OBJECT2) *.d
del:
	rm -f $(OBJECT) $(OBJECT2) *.d
fclean: clean
	@rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re del 