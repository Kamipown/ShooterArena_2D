#include "defs.h"

int		main(int argc, char *argv[])
{
	if (argc && argv)
		std::cout << "Avoid flags." << std::endl;
	class_game game;
    game.game_run();
	return (EXIT_SUCCESS);
}
