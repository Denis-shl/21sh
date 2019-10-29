# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oargrave <oargrave@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/29 19:30:06 by oargrave          #+#    #+#              #
#    Updated: 2019/10/29 19:38:53 by oargrave         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=21sh
CC=clang
FLAG= -Wall -Wextra -Werror
SRCDIR=src
PARSDIR=src/parse
OBJDIR = obj
DEBUG=-g
LIB=libft/libft.a
MEMORY=memory_registration/ft_malloc.a
OBJ= $(addprefix $(OBJDIR)/, $(patsubst $(SRCDIR)/%.c, %.o, $(wildcard $(SRCDIR)/*.c $(PARSDIR)/*.c)))

all: $(OBJDIR) $(NAME)

$(OBJDIR):
	mkdir $(OBJDIR)
	mkdir obj/parse
	
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) -c $< -o $@

$(LIB):
	make all -C libft/

$(MEMORY):
	make all -C memory_registration/

$(NAME): $(LIB) $(MEMORY) $(OBJ)
	$(CC) $(OBJ) $(DEBUG) $(FLAG) -o $(NAME) $(LIB) $(MEMORY)

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
