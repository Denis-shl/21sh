# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oargrave <oargrave@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/29 19:34:49 by oargrave          #+#    #+#              #
#    Updated: 2019/10/29 19:34:50 by oargrave         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= ft_malloc.a
CC=clang
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

re: fclean all