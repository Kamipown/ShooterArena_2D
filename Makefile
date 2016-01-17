NAME =	ShooterArena_2D

FLG =	-Wall -Wextra -Werror

SRC =	src/main.cpp \
		src/class_game.cpp \
		src/class_engine.cpp \
		src/class_engine_event.cpp \
		src/class_gfx_engine.cpp \
		src/class_sfx_engine.cpp

INC =	-I./inc

all: $(NAME)

$(NAME):
	g++ $(FLG) $(SRC) $(INC) -lSDL2 -lSDL_mixer -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all
