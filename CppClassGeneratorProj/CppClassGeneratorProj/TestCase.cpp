#include "TestCase.h"
#include <iostream>
#include <fstream>
#include <iostream>

using namespace std;

namespace Test
{	
	TestCase::TestCase(void)
	{
		ID = "asd";
		Balance = 0;
	}

	TestCase::~TestCase(void)
	{
		cout << endl;
		cout << "destruct" << endl;
		cout << "ID " << ID << endl;
		cout << "Balance " << Balance << endl;
		cout << endl;
	}

	TestCase::TestCase(ui balance, char * id)
	{
		ID = id;
		Balance = balance;
	}

	void TestCase::setId(char* id)
	{
		ID = id;
	}

	char* TestCase::getId()
	{		
		return ID;
	}

	void TestCase::setBalance(ui balance)
	{
		Balance = balance;
	}

	ui TestCase::getBalance()
	{
		return Balance;
	}

	TestCase TestCase::equals(TestCase& other)
	{
		if (Balance == other.getBalance()) 
		{
			return other;
		} else 
			return *this;
	}

	TestCase TestCase::read(int i)
	{
		if (i == 0)
			return TestCase();

		return TestCase();
	}
	int TestCase::operator+(TestCase that)
	{
		return Balance + that.Balance;
	}
}
