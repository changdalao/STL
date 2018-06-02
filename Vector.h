/*
	STL --> vector的使用
*/

#pragma once

#include<iostream>
#include<vector>
#include<string>
#include<time.h>
#include<windows.h>
using namespace std;

void test_vector()
{
	/*vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	vector<int>::iterator it = v.begin();//迭代器
	while (it != v.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;*/

	/*vector<int> v;
	size_t N = 10000000;
	int begin, end;
	begin = GetTickCount();
	for (int i = 0; i < N; i++)
		v.push_back(i);
	end = GetTickCount();
	cout << end - begin << endl;

	begin = GetTickCount();
	vector<int> v1;
	v1.reserve(N);//避免扩容的接口，会预先扩容指定大小的空间
	for (int i = 0; i < N; i++)
		v1.push_back(i);
	end= GetTickCount();
	cout << end - begin << endl;*/
	
	/*vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(4);
	cout <<"capacity:"<<v.capacity() << endl;
	cout << "szie:" << v.size() << endl;
	v.reserve(2);//不会缩小capacity和size
	cout << "szie:" << v.size() << endl;
	cout << v.capacity() << endl;*/

	/*vector<int> v;
	size_t N = 1000;
	for (int i = 0; i < N; i++)
		v.push_back(i);
	cout << "size:" << v.size() << endl;

	vector<int> v1;
	v1.reserve(N);
	for (int i = 0; i < N; i++)
		v1.push_back(i);
	cout << "size:" << v1.size() << endl;*/

	/*vector<int> v;
	size_t N = 1000;
	
	for (int i = 0; i < N; i++)
		v.push_back(i);
	cout << "size:" << v.size() << endl;
	
	vector<int> v1;
	v1.resize(N);
	for (int i = 0; i < N; i++)
		v1.push_back(i);
	cout << "size:" << v1.size() << endl;*/

	/*vector<int> v1;
	v1.push_back(1);
	v1.push_back(1);
	v1.push_back(1);
	v1.push_back(1);
	cout << "size:" << v1.size() << endl;
	cout << "capacity:" << v1.capacity() << endl;

	vector<int> v2;
	v2.resize(2);//会缩小size，resize和reserve都不会缩小capacity
	cout << "size:" << v2.size() << endl;
	cout << "capacity:" << v2.capacity() << endl;*/

}