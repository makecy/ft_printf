NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -g -I./inc

BINDIR = bin
SRCDIR = src

SRCS = 	ft_printf.c \
		ft_print_character.c \
		ft_print_formats.c \
		ft_print_ptr.c \
		ft_print_str.c \
		ft_print_decimal.c \
		ft_print_percent.c \
		ft_print_unsigneddecimal.c \
		ft_print_hexa.c 

SRC_FILES = $(addprefix $(SRCDIR)/, $(SRCS))
OBJS = $(SRC_FILES:$(SRCDIR)/%.c=$(BINDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo $(GREEN)"Successfully compiled $(NAME)"$(DEFAULT)

$(BINDIR):
	@mkdir -p $(BINDIR)

$(BINDIR)/%.o: $(SRCDIR)/%.c | $(BINDIR)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(BINDIR)
	@echo $(RED)"Removing object files"$(DEFAULT)

fclean: clean
	@rm -f $(NAME)
	@echo $(RED)"Removing $(NAME)"$(DEFAULT)

re: fclean all
	@echo $(GREEN)"Rebuilding everything"$(DEFAULT)

.PHONY: all clean fclean re

DEFAULT = "\033[39m"
GREEN = "\033[32m"
RED = "\033[31m"
