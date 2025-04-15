NAME = libftprintf.a

SRC = ft_printf.c \
      put_format_char.c \
      put_format_str.c \
      put_format_pointer.c \
      put_format_dec.c \
      put_format_unsigned.c \
      put_format_hex_min.c \
      put_format_hex_maj.c

OBJ = $(SRC:.c=.o)

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJ) $(LIBFT)
    cp $(LIBFT) ./
    ar rcs $(NAME) $(OBJ) libft.a

$(LIBFT):
    make -C $(LIBFT_DIR)

all: $(NAME)

clean:
    rm -rf $(OBJ)
    make clean -C $(LIBFT_DIR)

fclean: clean
    rm -rf $(NAME) libft.a
    make fclean -C $(LIBFT_DIR)

re: fclean all