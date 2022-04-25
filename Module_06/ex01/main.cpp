# include "point.h"

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
