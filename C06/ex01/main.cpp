#include "struct.hpp"

uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int main()
{
	//CREATE A RANDOM DATA
	Data* data = new Data;
	data->s.resize(8);
	data->n = std::rand();
	std::srand(std::time(NULL));
	std::string alnum("iabcdefghijklmnopqrstuvwxyz0123456789");
	for(int i = 0; i < 8; i++)
		data->s[i] = alnum[rand() % alnum.length()];
	std::cout << "1/ Data randomly generate in the main" << std::endl;
	std::cout << "data->s: " << data->s << std::endl;
	std::cout << "data->int: " << data->n << std::endl;
	std::cout << "data add: " << data << std::endl;
	
	
	//SERIALIZE
	uintptr_t raw = serialize(data);
	
	std::cout << std::endl << "2/ Data serialized (Data * data --> uintptr_t raw )" << std::endl;
	std::cout << "return value for serialized raw: " << raw << std::endl;

	//DESERIALIZED
	Data* data2 = deserialize(raw);
std::cout << std::endl << "3/ Same data deserialized (uintptr_t raw --> Data* data2): " << std::endl;
	std::cout << "data2->s: " << data2->s << std::endl;
	std::cout << "data2->int: " << data2->n << std::endl;
	std::cout << "data2 add: " << data2 << std::endl;
	
	delete data;
	
	return 0;
}
