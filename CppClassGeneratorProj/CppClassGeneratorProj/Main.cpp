#include <conio.h>
#include <iostream>


#include "Main.h"
#include "TestCase.h"
#include "FileWorker.h"

using namespace std;
using Test::TestCase;

template<class T> 
T twice(T in) {
	return in * 2;
}

int main() {	
	// testOOP();

	FileWorker fw;
	fw.read("..\\..\\..\\test.txt");

	//fw.write("..\\..\\..\\test.txt");
	
	cout << twice<int>(2) << twice<float>(4.5) << endl;

	_getch();
	
	return 0;
}

void testOOP() {
	//TestCase fw(111);
	//fw.setId("qwe");
	//fw.setBalance(123);
	//cout << "id " << fw.getId() << endl;
	//cout << "balance " << fw.getBalance() << endl;

	//TestCase fw2(222);	
	//cout << "equals " << fw2.equals(fw).getBalance();

	//TestCase fw3 = fw2.equals(fw);
	//cout << "equals " << fw3.getBalance();

	//TestCase* pfw = new TestCase();
	////pfw->~TestCase();
	//cout << "id " << pfw->getId() << endl;
	//cout << "balance " << pfw->getBalance() << endl;

	//const int f = 10;
	//int arr[f];

	//unsigned b = -2;
	//cout << b;

	//TestCase fw;
	//TestCase fw2;
	//TestCase qwe = fw.read(10);
	//cout << fw.getId();

	//fw.setBalance(123);
	//fw2.setBalance(456);
	//cout <<  fw + fw2;
}