# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oargrave <oargrave@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/22 06:33:57 by oargrave          #+#    #+#              #
#    Updated: 2019/10/29 06:01:09 by oargrave         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC=clang
FLAG=-Wall -Werror -Wextra -I includes/ -c
SRCDIR=src
OBJDIR=obj
OBJ=$(addprefix $(OBJDIR)/, $(patsubst $(SRCDIR)/%.c, %.o, $(wildcard $(SRCDIR)/*.c)))
all: $(OBJDIR) $(NAME)

$(OBJDIR):
	mkdir $(OBJDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(FLAG) $< -o $@

$(NAME): $(OBJ)
	ar rc  $(NAME) $(OBJ)
	
clean:
		rm -f $(OBJ)
fclean: clean
		rm -rf $(OBJDIR)
		rm -f $(NAME)
		
re: fclean all
