CC=clang
NAME= ft_malloc.a
FLAG= -Wall -Wextra -Werror
SRCDIR=src
OBJDIR = obj
OBJ = $(addprefix $(OBJDIR)/, $(patsubst $(SRCDIR)/%.c, %.o, $(wildcard $(SRCDIR)/*.c )))

all: $(OBJDIR) $(NAME)

$(OBJDIR):
	mkdir $(OBJDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) -c $< -o $@

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
	rm -rf $(OBJDIR)

re: fclean al