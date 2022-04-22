#ifndef CONVERTOR_HPP
# define CONVERTOR_HPP
# include <string>
# include <iostream>
# include <sstream>
# include <limits>
# define SUCCESS 1
# define ERROR 0

class	Convertor
{
	private:
		std::string	_type;
		int		_toInt;
		float		_toFloat;
		double		_toDouble;
		char		_toChar;

	public:
		Convertor(void);
		Convertor(std::string, std::string);
		Convertor(const Convertor&);
		~Convertor(void);
		Convertor &operator=(const Convertor&);
		std::string	getType(void) const;
		void		setType(std::string);
		char		getToChar(void) const;
		void		setToChar(char);
		int		getToInt(void) const;
		void		setToInt(int);
		float		getToFloat(void) const;
		void		setToFloat(float);
		double		getToDouble(void) const;
		void		setToDouble(double);
		void		fillToInt(std::string);
		void		fillToChar(std::string);
		void		fillToDouble(std::string);
		void		fillToFloat(std::string);
};

std::ostream& operator<<(std::ostream&, const Convertor&);
#endif
