#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <map>

class class_file_ini
{
	private:
		std::map <std::string, std::string> file_data;

	public:
		class_file_ini(void);
		class_file_ini(const std::string &filename);

		void		read_file(const std::string &filename);
		void		write_file(const std::string &filename);

		int			get_int_value(const std::string &name);
		std::string	get_string_value(const std::string &name);

		void		set_value(const std::string name, const int &value);
		void		set_value(const std::string name, const std::string &value);

		void		print_data(void);
};