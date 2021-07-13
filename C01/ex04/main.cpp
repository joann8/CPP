#include <iostream>
#include <istream>
#include <ostream>
#include <streambuf>
#include <string>
#include <fstream>

static int	manage_file(std::string file_name, std::string s1, std::string s2 )
{
	std::ifstream  ifs(file_name.c_str());
	
	if (!ifs.is_open())
	{
		std::cerr << "Error while opening the file." << std::endl;
		return (1);
	}

	std::string new_file = file_name + ".replace";
	std::ofstream ofs(new_file.c_str());
	if (!ofs)
	{
		ifs.close();
		std::cerr << "Error while creating the new file." << std::endl;
		return (1);
	}

	size_t pos;
	std::string buf;

	while (!ifs.bad() && !ifs.eof())
	{
		std::getline(ifs, buf);
		while ((pos = buf.find(s1)) != std::string::npos)
			buf.replace(pos, s1.size(), s2);
		ofs << buf;
		if (!ifs.eof())
			ofs << std::endl;
	}
	ofs.close();
	ifs.close();
	return (0);
}


int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Replace pgm requires the following arg structure: ./replace filename s1 s2." << std::endl;
		return (1);
	}
	if (!*av[1] || !*av[2] || !*av[3])
	{
		std::cerr << "Parameters cannot be empty." << std::endl; 
		return (1);
	}
	return (manage_file(av[1], av[2], av[3]));
}
