# Name of the program that the library will have.
NAME = libft.a

# All the files of the functions it will host.
SRCS = ft_memset.c ft_strjoin.c ft_strtrim.c ft_isprint.c ft_isdigit.c\
		ft_putchar_fd.c ft_strlcat.c ft_substr.c ft_atoi.c ft_itoa.c ft_putendl_fd.c\
		ft_strlcpy.c ft_tolower.c ft_bzero.c ft_putnbr_fd.c ft_strlen.c\
		ft_toupper.c ft_calloc.c ft_memchr.c ft_putstr_fd.c ft_strmapi.c ft_isalnum.c\
		ft_memcmp.c ft_split.c ft_strncmp.c ft_isalpha.c ft_memcpy.c ft_strchr.c\
		ft_strnstr.c ft_isascii.c ft_memmove.c ft_strdup.c ft_strrchr.c ft_striteri.c\

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstlast.c ft_lstsize.c\
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

# To make the library, convert functions (*.c) to objects (*.o) with the -c flag.
OBJS = ${SRCS:.c=.o}

# To make the library, convert the bonus functions (*.c) to objects (*.o).
OBJSBONUS = ${BONUS:.c=.o}

# Indicates the header of the library.
HEADER = libft.h

# The command compile the functions.
CC		= gcc

# Deletes all *.o files created in the process.
RM		= rm -f

# The flags with which we will compile the functions.
CFLAGS = -Wall -Wextra -Werror

#.c.o:
#		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

# It will compile the functions and create the library with ar.
# (c create, r replace, s make #index).
bonus:	${OBJS} ${OBJSBONUS}
		ar -crs ${NAME} ${OBJS} ${OBJSBONUS}

# When you enter "make" or "make all" it will carry out these instructions.
# all:	${NAME}

# Deletes all *.o files created in the process.
clean:
		${RM} ${OBJS} ${OBJSBONUS}

# It will first delete the *.o and then delete the program.
fclean:	clean
		${RM} ${NAME}

# It will delete the program and the .o and run the process again.
re:		fclean all

# This is to indicate to make that these commands have been given specific instructions.
.PHONY: all clean fclean re bonus
