#ifndef VECTOR_HPP
# define VECTOR_HPP

#include <memory>
#include <vector>

namespace ft
{
	template <class T, class Allocator = std::allocator<T>>
	class vector
	{
	private:
		typedef T					value_type;
		typedef Allocator			allocator_type;
		typedef std::size_t			size_type;
		typedef value_type&			reference;
		typedef value_type*			pointer;
		typedef const value_type&	const_reference;

	private:
		pointer			_array;
		size_type		_size;
		size_type		_capacity;
		allocator_type	_allocator;	

	public:

		explicit vector(const allocator_type& alloc = allocator_type())
			: _array(nullptr), _size(0), _capacity(0), _allocator(alloc)
		{}

		
	};
}

#endif
