NAME = libftprintf.a

SRC = ft_printf.c \
	  ft_putnbr_hex.c \
	  put_format_char.c \
	  put_format_str.c \
	  put_format_pointer.c \
	  put_format_dec.c \
	  put_format_unsigned.c \
	  put_format_hex_min.c \
	  put_format_hex_maj.c

OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJ)
	@make bonus -C ./libft/
	cp libft/libft.a $(NAME)
	ar rcs $(NAME) $(OBJ) $(LIBFT)

all: $(NAME)

clean:
	@make clean -C ./libft/
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME) libft.a
	make fclean -C $(LIBFT_DIR)

re: fclean all