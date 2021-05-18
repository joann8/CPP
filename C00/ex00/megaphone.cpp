#include <iostream>

int main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac < 2)
		std::cout << "*LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		i = 1;
		while (i < ac)
		{
			j = 0;
			while (av[i][j])
			{
				av[i][j] = std::toupper(av[i][j]);
				j++;
			}
			std::cout << av[i];
			i++;
		}
	}
	std::cout << std::endl;
	return (0);
}
