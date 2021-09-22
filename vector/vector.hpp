#ifndef VECTOR_HPP
# define VECTOR_HPP

#include <memory>

namespace ft
{
	template <class T, class Allocator = std::allocator<T>>
	class Stack
	{
	public:
		typedef T			value_type;
		typedef Allocator	allocator_type;

	};
}
#endif
