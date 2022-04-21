#ifndef CONVERTOR_HPP
# define CONVERTOR_HPP
# include <string>
# include <iostream>
# include <sstream>

class	Convertor
{
	private:
		std::string	_type;
		int		_toInt;
		float		_toFloat;
		double		_toDouble;
		char		_toChar;
		bool		_undisplayable = false;

	public:
		Convertor(void);
		Convertor(std::string, std::string);
		Convertor(const Convertor&);
		~Convertor(void);
		Convertor &operator=(const Convertor&);
		std::string	getType(void) const;
		void		setType(std::string);
		int		getToInt(void) const;
		void		setToInt(int);
		float		getToFloat(void) const;
		void		setToFloat(float);
		double		getToDouble(void) const;
		void		setToDouble(double);
		char		getToChar(void) const;
		void		setToChar(double);
		void		fillToInt(std::string);
};
#endif
