NAME=21sh
CC=clang
FLAG= -Wall -Wextra -Werror
LIB= memory_registration/ft_malloc.a libft/libft.a
SRCDIR=src
PARSDIR=src/parse
OBJDIR = obj
DEBUG=-g
OBJ= $(addprefix $(OBJDIR)/, $(patsubst $(SRCDIR)/%.c, %.o, $(wildcard $(SRCDIR)/*.c $(PARSDIR)/*.c)))
all: $(OBJDIR) $(NAME)

$(OBJDIR):
	mkdir $(OBJDIR)
	mkdir obj/parse
	
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) -c $< -o $@

$(NAME): $(OBJ)
	make all -C memory_registration/ 
	make all -C libft/
	$(CC) $(OBJ) $(DEBUG) $(FLAG) -o $(NAME) $(LIB)

clean:
	rm -f $(OBJ)
	@make clean -C memory_registration/
	@make clean -C libft/
fclean: clean 
	rm -rf $(OBJDIR)
	rm -f $(NAME)
	@make fclean -C memory_registration/
	@make fclean -C libft/

re: fclean all
