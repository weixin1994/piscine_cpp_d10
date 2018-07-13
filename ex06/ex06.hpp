#ifndef EX06_HPP_
#define EX06_HPP_

#include <iostream>
#include <sstream>

template < typename T, typename U >
class Tuple
{
	public:
		T a;
		U b;
		std::string toString();
};

template < typename T >
static void trans(T &param, std::ostringstream &oss)
{
	std::string typeName[3] = {typeid(int).name(), typeid(float).name(), typeid(std::string).name()};
	std::string messageType[3] = {"int:", "float:", "string:\""};
	bool flag = false;
	for (int i = 0; i < 3; ++i) 
	{
		if (typeName[i] == typeid(param).name()) 
		{
			oss << messageType[i] << param;
			if (i == 2)
				oss << "\"";
			if (i == 1)
				oss << "f";
			flag = true;
			break;
		}
	}
	if (!flag)
		oss << "???";
}

template< typename T, typename U >
std::string Tuple< T, U >::toString()
{
	std::ostringstream oss;
	oss << "[TUPLE [";
	trans(this->a, oss);
	oss << "] [";
	trans(this->b, oss);
	oss << "]]";
	return oss.str();
}

#endif 
