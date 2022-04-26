#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <string>
# include <iostream>
# include <exception>
# include <cstdlib>

template <typename T>
class	Array
{
	T*	_elements;
	unsigned int	_size;

	public:
		Array(void);
		Array(unsigned int);
		Array(const Array&);
		~Array(void);
		Array	&operator=(const Array&);
		T	&operator[](unsigned int) const;
		unsigned int	size(void) const;
};

//--------Implementations--------

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
		_elements[i] = ymir._elements[i];
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
		_elements[i] = ymir._elements[i];
	_size = len;
}

template <typename T>
T&	Array<T>::operator[](unsigned int i) const
{
	if (i < 0 || i >= size())
		throw std::out_of_range("SEGFAULT");
	return (_elements[i]);
}

template <typename T>
unsigned int	Array<T>::size(void) const
{
	return (_size);
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const Array<T>& tab)
{
        unsigned int	size = tab.size();

	os << "Array size : " << size << "\nElements :\n";
       	for(unsigned int i = 0; i < size; i++)
	{
		if (i != size - 1)
			os << tab[i] << "; ";
		else
			os << tab[i];
	}
	return (os);
}
#endif
