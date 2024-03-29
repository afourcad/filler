# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afourcad <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 20:03:40 by afourcad          #+#    #+#              #
#    Updated: 2017/08/22 17:42:08 by afourcad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= afourcad.filler

SRCDIR	= srcs
OBJDIR	= objs
INCDIR	= includes

SRCNAM	= filler.c ft_get_player.c ft_parsing.c\

SRC		= $(SRCNAM:%=$(SRCDIR)/%)
OBJ		= $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

CC		= gcc
CFLAGS	= -g -Wall -Wextra -Werror -I$(INCDIR) -I$(LIBINCDIR)
LDFLAGS	= -L $(LIBFTDIR) -lft

LIBFTNAM	= libft.a
LIBFTDIR	= ./libft/
LIBINCDIR	= ./libft/includes/
LIBFT		= $(LIBFTNAM:%=$(LIBFTDIR)/%)

INCNAM = filler.h
INC = $(INCNAM:%=$(INCDIR)/%)

GIT	= README.md

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS) -g

$(LIBFT):
	$(MAKE) -C $(LIBFTDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.c $(INC) $(LIBFT)
	mkdir -p $(OBJDIR)
	$(CC) -o $@ -c $< $(CFLAGS)

.PHONY: all git no printf check clean fclean re $(LIBFT)

git:
	git add $(SRC) $(INC) $(GIT)

no:
	@echo "Passage de la norminette :"
	@norminette $(SRC) $(INC)

printf:
	@echo "Detection des printf :\033[1;31m"
	@grep printf -r $(SRCDIR) $(INCDIR) | cat
	@printf "\033[0m"

check: no printf

clean:
	rm -rf $(OBJDIR)
	$(MAKE) -C $(LIBFTDIR) clean

fclean: clean
	rm -rf $(NAME)
	$(MAKE) -C $(LIBFTDIR) fclean

# $(MAKE) needed so that the cleaning is done before starting to create again \
	# 	# cf make -j 
re: fclean
	$(MAKE) all
