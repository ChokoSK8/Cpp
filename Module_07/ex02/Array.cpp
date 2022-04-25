# include "Array.hpp"

template <typename T>
Array<T>::Array(void) : _elements(0), _size(0)
{
	std::cout << "Array default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : _elements(new T[n]), _size(n)
{
	std::cout << "Array Setparam constructor called" << std::endl;
	for (unsigned int i = 0; i < n; i++)
		_elements[i] = 0;
}

template <typename T>
Array<T>::Array(const Array& ymir)
{
	unsigned int	len = ymir.size();

	std::cout << "Array copy constructor called" << std::endl;
	_elements = new T[len];
	for (unsigned int i = 0; i < len; i++)
		_elements[i] = ymir->_elements[i];
	_size = len;
}

template <typename T>
Array<T>::~Array(void)
{
	if (_size)
		delete [] _elements;
	std::cout << "Array destructor called" << std::endl;
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array<T>& ymir)
{
	unsigned int	len = ymir.size();

	std::cout << "Array copy assignement constructor called" << std::endl;
	_elements = new T[len];
	for (unsigned int i = 0; i < len; i++)
		_elements[i] = ymir->_elements[i];
	_size = len;
}

template <typename T>
unsigned int	Array<T>::size(void) const
{
	return (_size);
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const Array<T>& tab)
{
	os << "Array size : " << tab.size();
	return (os);
}
