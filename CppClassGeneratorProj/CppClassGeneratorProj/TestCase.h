#pragma once

namespace Test
{
	typedef unsigned int ui;

	class TestCase
	{
	private:
		char* ID;
		ui Balance;
		const ui MAX = 789;
	public:
		//TestCase() = default;
		TestCase(void);
		~TestCase(void);
		TestCase(ui, char* ID = "default");	//values by default

		void setId(char*);
		char* getId();

		void setBalance(ui);
		ui getBalance();

		TestCase equals(TestCase&);

		TestCase read(int);

		int operator+(TestCase);
	};
}
