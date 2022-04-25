#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <string>
# include <iostream>
# include <exception>

template <typename T>
class	Array
{
	private:
		T*	_elements;
		unsigned int	_size;

	public:
		Array(void);
		Array(unsigned int);
		Array(const Array&);
		~Array(void);
		Array &operator=(const Array&);
		unsigned int	size(void) const;
};

template <typename T>
std::ostream& operator<<(std::ostream&, const Array<T>& tab);
#endif
