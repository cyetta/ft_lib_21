NAME = libft.a

SRCN = ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_tolower.c ft_toupper.c ft_isascii.c \
		ft_isprint.c ft_strchr.c ft_strrchr.c ft_strlen.c ft_strncmp.c ft_strlcat.c ft_strlcpy.c \
		ft_memset.c ft_bzero.c ft_memchr.c ft_memcpy.c ft_memcmp.c ft_memmove.c ft_strnstr.c ft_atoi.c \
		ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BSRCN = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
		ft_lstclear.c ft_lstiter.c ft_lstmap.c

SRCPATH = ./
INCPATH = ./

SRCS = ${addprefix ${SRCPATH}, ${SRCN}}

BSRCS = ${addprefix ${SRCPATH}, ${BSRCN}}

OBJ = ${SRCS:.c=.o}

BOBJ = ${BSRCS:.c=.o}

DPDS = ${SRCS:.c=.d} ${BSRCS:.c=.d}

CC = gcc

RM	= rm -f

CFLAG = -Wall -Wextra -Werror

all:	${NAME}

${NAME}:	${OBJ}
	ar rc ${NAME} $?
	ranlib ${NAME}

%.o : %.c
	${CC} ${CFLAG} -MMD -c $< -o $@ -I ${INCPATH}

include ${wildcard ${DPDS}}

bonus: 
	@make  SRCN="${SRCN} ${BSRCN}" all

clean:
	${RM} ${OBJ} ${BOBJ} ${DPDS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY: all bonus clean fclean re
