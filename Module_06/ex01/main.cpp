# include "point.h"

uintptr_t	serialize(Data* ptr)
{
	uintptr_t	raw;

	raw = reinterpret_cast<uintptr_t>(ptr);
	return (raw);
};

Data*	deserialize(uintptr_t raw)
{
	Data*	ptr;

	ptr = reinterpret_cast<Data*>(raw);
	return (ptr);
};

int	main(void)
{
	Data*		datata = new Data;
	uintptr_t	intptr;

	datata->_name = "Ratata";
	intptr = serialize(datata);
	std::cout << "uintptr_t : " << (void*)intptr << std::endl;
	datata = deserialize(intptr);
	std::cout << "datata addr : " << datata << " | name : " << datata->_name << std::endl;
	return (0);
}
