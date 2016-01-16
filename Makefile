NAME =	TankShooter_2D

FLG =	-Wall -Wextra -Werror

SRC =	src/main.cpp src/class_game.cpp src/class_engine.cpp

INC =	-I./inc

all: $(NAME)

$(NAME):
	g++ $(FLG) $(SRC) $(INC) -lSDL2 -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all
