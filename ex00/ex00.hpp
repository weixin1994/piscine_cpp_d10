#ifndef EX00_HPP_
#define EX00_HPP_

template <typename T>
void swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T min(T a, T b)
{
	return a < b ? a : b;
}

template <typename T>
T max(T a, T b)
{
	return a > b ? a : b;
}

template <typename T>
T add(T a, T b)
{
	return a + b;
}

#endif 
