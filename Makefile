NAME =	TankShooter_2D

FLG =	-Wall -Wextra -Werror

SRC =	srcs/main.c

INC =	-I./include

all: $(NAME)

$(NAME):
	gcc $(FLG) $(SRC) $(INC) -lSDL2 -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all
