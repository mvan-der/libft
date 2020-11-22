# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mvan-der <mvan-der@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/06 13:44:38 by mvan-der      #+#    #+#                  #
#    Updated: 2020/11/22 11:43:44 by mvan-der      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = libft.h

CFLAGS = -Wall -Wextra -Werror -fsanitize=address

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c ft_memchr.c \
ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c \
ft_toupper.c

BONUSSRCS = ft_lstadd_front.c ft_lstadd_back.c ft_lstclear.c ft_lstdelone.c \
ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

SRCOBJ = $(SRCS:.c=.o)

BONUSOBJ = $(BONUSSRCS:.c=.o)

ifdef BONUS
OBJ = $(SRCOBJ) $(BONUSOBJ)
else
OBJ = $(SRCOBJ)
endif

all: $(NAME)

$(NAME): $(OBJ)
	ar crs $(NAME) $(OBJ)

%.o : %.c $(HEADER)
	$(CC) -c $(FLAGS) -o $@ $<

bonus:
	$(MAKE) BONUS=1 all

clean:
	rm -f $(SRCOBJ) $(BONUSOBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
