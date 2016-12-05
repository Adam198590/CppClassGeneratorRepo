#pragma once

#include <fstream>
#include <string>
#include <iostream>
#include <conio.h>
#include <iostream>

using namespace std;

class FileWorker {
public:
	FileWorker();
	~FileWorker();

	void read(string fileName);
	void write(string fileName);

private:

};