#pragma once

#include<iostream>
using namespace std;

template<class T>
class Vector {
public:
	typedef T* Iterator;//迭代器
	Vector()
		:_start(0)
		, _finish(0)
		, _endofstorge(0)
	{}
	~Vector()
	{
		delete[] _start;
		_start = _finish = _endofstorge = 0;
	}
	size_t Capacity()
	{
		return _endofstorge - _start;
	}
	size_t Size()
	{
		return _finish - _start;
	}
	void Expand(size_t n)
	{
		if (n > Capacity())
		{
			size_t size = Size();
			T* tmp = new T[n];
			for (int i = 0; i < size; i++)
				tmp[i] = _start[i];
			delete[] _start;
			_start = tmp;
			_finish = _start + size;
			_endofstorge = _start + n;
		}
	}
	void PushBack(const T& x)
	{
		if (_finish == _endofstorge)
		{
			size_t capacity = Capacity() * 2;
			if (capacity == 0)
				capacity = 3;
			Expand(capacity);
		}
		*_finish = x;
		_finish++;
	}
	T& operator[](size_t pos)
	{
		return _start[pos];
	}
	Iterator Begin()
	{
		return _start;
	}
	Iterator End()
	{
		return _finish;
	}
	void Reserve(size_t n)
	{
		Expand(n);
	}
	void Resize(size_t n, T x = T())
	{
		if (n > Size() || n < Capacity())
		{
			Expand(n);
			for (int i = Size(); i < n; i++)
			{
				_start[i] = x;
				++_finish;
			}	
		}
		if (n < Size())//capacity不变，size减小到n
		{
			while (n--)
			{
				--_finish;
			}
		}
	}
protected:
	Iterator _start;
	Iterator _finish;
	Iterator _endofstorge;
};

void TestMyVector()
{
	Vector<int> v1;
	v1.PushBack(1);
	v1.PushBack(2);
	v1.PushBack(3);
	v1.PushBack(4);
	for (int i = 0; i < v1.Size(); i++)
		cout << v1[i] << " ";
	cout << endl;
	Vector<int>::Iterator it = v1.Begin();//迭代器
	while (it != v1.End())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;

	//模拟reserve  预先开辟空间
	Vector<int> v2;
	cout << "capacity:"<<v2.Capacity() << endl;
	for (int i = 0; i < 5; i++)
		v2.PushBack(i);
	cout << "capacity:" << v2.Capacity() << endl;
	v2.Reserve(10);
	cout << "capacity:" << v2.Capacity() << endl;

	//模拟resize
	Vector<int> v3;
	v3.PushBack(1);
	v3.PushBack(1);
	v3.PushBack(1);
	v3.PushBack(1);
	cout << "size:" << v3.Size() << endl;
	cout << "capacity:" << v3.Capacity() << endl;
	for (int i = 0; i < v3.Size(); i++)
		cout << v3[i] << " ";
	cout << endl;
	v3.Resize(8);
	cout << "size:" << v3.Size() << endl;
	cout << "capacity:" << v3.Capacity() << endl;
	for (int i = 0; i < v3.Size(); i++)
		cout << v3[i] << " ";
	cout << endl;
}