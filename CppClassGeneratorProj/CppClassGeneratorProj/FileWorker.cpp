#include "FileWorker.h"

FileWorker::FileWorker() {
}

FileWorker::~FileWorker() {
}

void FileWorker::read(string fileName) {
	string data;

	// open a file in read mode.
	ifstream infile;
	infile.open(fileName);

	cout << "Reading from the file" << endl;
	infile >> data;

	// write the data at the screen.
	cout << data << endl;

	// again read the data from the file and display it.
	infile >> data;
	cout << data << endl;
	
	// close the opened file.
	infile.close();
}

void FileWorker::write(string fileName) {
	string data;

	// open a file in write mode.
	ofstream outfile;
	outfile.open(fileName);

	cout << "Writing to the file" << endl << "Enter your name: ";
	cin >> data;

	// write inputted data into the file.
	outfile << data << endl;

	cout << "Enter your age: ";
	cin >> data;

	// again write inputted data into the file.
	outfile << data << endl;

	// close the opened file.
	outfile.close();
}
