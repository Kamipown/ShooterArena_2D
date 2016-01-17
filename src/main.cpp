#include "defs.h"

int		main(int argc, char *argv[])
{
	if (argc && argv)
		std::cout << "Avoid flags." << std::endl;
	return (EXIT_SUCCESS);
}
