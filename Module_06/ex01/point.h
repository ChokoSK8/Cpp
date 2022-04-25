# include <iostream>
# include <sstream>
# include <string>
# include <stdint.h>

struct	Data
{
	std::string	_name;
};

uintptr_t	serialize(Data* ptr)
{
	uintptr_t	raw;

	raw = (uintptr_t)(static_cast<void*>(ptr));
	return (raw);
};

Data*	deserialize(uintptr_t raw)
{
	Data*	ptr;

	ptr = static_cast<Data*>((void*)(raw));
	return (ptr);
};
