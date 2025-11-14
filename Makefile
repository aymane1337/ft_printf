CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_print_address.c ft_printf.c ft_print_hexa_upper_nbr.c  ft_print_str.c \
		ft_print_char.c ft_print_hexa_lower_nbr.c ft_print_nbr.c ft_print_unsigned_nbr.c

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a

all : ${NAME}

${NAME} : ${OBJS} ft_printf.h
	ar rcs ${NAME} ${OBJS}

%.o : %.c ft_printf.h
	${CC} ${CFLAGS} -c $< -o $@

clean :
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all