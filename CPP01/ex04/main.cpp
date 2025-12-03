#include <string>
#include <iostream>
#include <fstream>

std::string	replace(std::string line, std::string s1, std::string s2) {
	size_t pos = 0;
	while ((pos = line.find(s1, pos)) != std::string::npos) {
		line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
		pos += s2.length();
	}
	return (line);
}

int	main(int argc, char **argv)
{
	if (argc != 4) {
		std::cout << "Input must be: ./program filename s1 s2" << std::endl;
		return 1;
	}
	std::ifstream	input(argv[1]);
	if (!input.is_open()) {
		std::cout << "Error: can not open the file " << argv[1] << std::endl;
		return 1;
	}
	std::string		line;
	std::string		outfile = std::string(argv[1]) + ".replace";
	std::ofstream	output(outfile.c_str());
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	if (s1.empty()) {
    	std::cerr << "Error: s1 no puede estar vacío" << std::endl;
    	return 1;
	}
	while (std::getline(input, line)) {
		line = replace(line, s1, s2);
		output << line << std::endl;
	}
	input.close();
	output.close();
}


/*  */