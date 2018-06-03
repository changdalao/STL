#pragma once

#include<iostream>
#include<list>
using namespace std;

void TestList()
{
	list<int> s;
	s.push_back(1);
	s.push_back(2);
	s.push_back(3);
	s.push_back(4);
	s.push_back(5);
	list<int>::iterator it = s.begin();
	while ( it != s.end() )
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
}
