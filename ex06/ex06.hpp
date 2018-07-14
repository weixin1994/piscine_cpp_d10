#ifndef EX06_HPP_
#define EX06_HPP_

#include <string>
#include <sstream>
#include <typeinfo>

template < typename T >
static std::string toString(T const &value __attribute__((unused)))
{
	std::ostringstream os;
	os << "[???]";
	return os.str();
}

static std::string toString(int const &value) __attribute__((unused));
static std::string toString(float const &value) __attribute__((unused));
static std::string toString(std::string const &value) __attribute__((unused));

static std::string toString(int const &param)
{
	std::ostringstream os;
	os << "[int:" << param << "]";
	return os.str();
}

static std::string toString(float const &param)
{
	std::ostringstream os;
	os << "[float:" << param << "f]";
	return os.str();
}

static std::string toString(std::string const &param)
{
	std::ostringstream os;
	os << "[string:\"" << param << "\"]";
	return os.str();
}

template < typename T, typename U = T >
struct Tuple 
{
	T a;
	U b;

	std::string toString() const
	{
		std::ostringstream os;
		os << "[TUPLE " << ::toString(a) << " " << ::toString(b) << "]";
		return os.str();
	}
};

#endif 
