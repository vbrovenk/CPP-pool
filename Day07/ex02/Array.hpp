#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
private:
	unsigned int _n;
	T *_a;


public:
	Array<T>(void) : _n(0)
	{

	}

	Array<T>(unsigned int n) : _n(n)
	{
		_a = new T[n];

		// for (unsigned int i = 0; i < n; i++)
		// 	_a[i] = 0;
	}

	Array<T>(Array<T> const &other) 
	{
		*this = other;
	}

	~Array<T>(void)
	{
		if (_n > 0)
			delete [] _a;
	}

	unsigned int size() const { return _n; }

	Array<T> & operator =(Array<T> const &other) 
	{
		if (this != &other)
		{
			if (_n > 0)
				delete [] _a;
			_n = other._n;

			_a = new T[_n];
			for (unsigned int i = 0; i < _n; i++)
				_a[i] = other._a[i];
		}

		return *this;
	}

	T &operator [](unsigned int index)
	{
		if (index >= _n)
			throw std::exception();
		return _a[index];
	}
};


#endif