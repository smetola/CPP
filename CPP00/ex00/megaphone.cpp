#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int		i = 1;
	int		j;

	if(argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
				std::cout << (char)std::toupper((unsigned char)argv[i][j++]);
			i++;
		}
	}
	std::cout << std::endl;
}