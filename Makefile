NAME =	ShooterArena_2D

FLG =	-Wall -Wextra -Werror

SRC =	src/main.cpp \
		src/class_game.cpp \
		src/class_engine.cpp \
		src/class_engine_event.cpp \
		src/game_engine/class_game_engine.cpp \
		src/game_engine/class_game_engine_event.cpp \
		src/gfx_engine/class_gfx_engine.cpp \
		src/gfx_engine/class_gfx_window.cpp \
		src/sfx_engine/class_sfx_engine.cpp \
		src/sfx_engine/class_sfx_engine_event.cpp

INC =	-I./inc \
		-I./inc/game_engine \
		-I./inc/gfx_engine \
		-I./inc/sfx_engine

all: $(NAME)

$(NAME):
	g++ $(FLG) $(SRC) $(INC) -lSDL2 -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all
