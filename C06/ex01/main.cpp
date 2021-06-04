#include <iostream>
#include <ctime>
#include <cstdlib>

struct Data {std::string s1; int n; std::string s2; };


void * serialize(void)
{
	std::srand(std::time(NULL));
	
	Data* data = new Data;
	data->s1.resize(8);
	data->n = std::rand();
	data->s2.resize(8);
	
	std::string alnum("iabcdefghijklmnopqrstuvwxyz0123456789");
	int i;
	i = 0;
	while (i < 8)
	{
		data->s1[i] = alnum[rand() % alnum.length()];
		data->s2[i] = alnum[rand() % alnum.length()];
		i++;
	}
	std::cout << "1/ Data randomly generate by seralize function (read from  Data * in serialize)" << std::endl;
	std::cout << "s1: " << data->s1 << std::endl;
	std::cout << "random int: " << data->n << std::endl;
	std::cout << "s2: " << data->s2 << std::endl;
	return reinterpret_cast<void*>(data);
}

Data *deserialize(void * raw)
{
	return reinterpret_cast<Data*>(raw);
}

int main()
{
	void* raw = serialize();
	Data* data = deserialize(raw);
	
std::cout << std::endl << "2/ Same data deserialized (Data * --> void * -->Data*): " << std::endl;
	std::cout << "s1: " << data->s1 << std::endl;
	std::cout << "random int: " << data->n << std::endl;
	std::cout << "s2: " << data->s2 << std::endl;
	
	delete data;
	
	return 0;
}
