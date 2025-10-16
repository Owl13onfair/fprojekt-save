# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmantz <mmantz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/11 16:17:42 by mmantz            #+#    #+#              #
#    Updated: 2025/10/16 17:18:06 by mmantz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = cc
# CFLAGS = -Wall -Wextra -Werror


# conmand to cpmpile
# clean (generated Objekts)
# objekts
# bundel up into lib
# fclean (cleanup everything)
CFILES = ft_isdigit.c \
	ft_calloc.c \
	ft_isascii.c \
	ft_isprint.c  \
	ft_memchr.o \
	ft_memmove.c  \
	ft_putendl_fd.c \
	ft_strdup.c \
	ft_strlcpy.c \
	ft_strmapi.c  \
	ft_strrchr.c \
	ft_toupper.c \
	ft_isalnum.c  \
	ft_isascii.o  \
	ft_isprint.o  \
	ft_memcmp.c  \
	ft_memmove.o     \
	ft_putnbr_fd.c   \
	ft_strjoin.c  \
	ft_strlcpy.o  \
	ft_strncmp.c  \
	ft_strtrim.c  \
	ft_atoi.c  \
	ft_isalnum.o  \
	ft_isdigit.c  \
	ft_itoa.c    \
	ft_memcmp.o  \
	ft_memset.c   \
	ft_putstr_fd.c   \
	ft_strlcat.c \
	ft_strlen.c  \
	ft_strncmp.o \
	ft_substr.c  \
	ft_bzero.c \
	ft_isalpha.c\
	ft_isdigit.o\
	ft_memchr.c \
	ft_memcpy.c \
	ft_putcahr_fd.c\
	ft_split.c\
	ft_strlcat.o\
	ft_strlen.o\
	ft_strnstr.c\
	ft_tolower.c\
	ft_strchr.c\
	

BONUS = ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c


# ft_atoi.c   ft_calloc.c   ft_isalpha.c  ft_isdigit.c  ft_itoa.c    ft_memcmp.c  ft_memmove.c  ft_putchar_fd.c  ft_putnbr_fd.c  ft_split.c   ft_strjoin.c  ft_strlcpy.c  ft_strmapi.c  ft_strnstr.c  ft_strtrim.c  ft_tolower.c   libft.h
# ft_bzero.c  ft_isalnum.c  ft_isascii.c  ft_isprint.c  ft_memchr.c  ft_memcpy.c  ft_memset.c   ft_putendl_fd.c  ft_putstr_fd.c  ft_strdup.c  ft_strlcat.c  ft_strlen.c   ft_strncmp.c  ft_strrchr.c  ft_substr.c   ft_troupper.c alphabetikal

# MAKE bonus

bonus: all
OFILES += $(BONUS:.c=.o)



OFILES = $(CFILES:.c=.o)

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME) clean

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY:  all clean fclean re
