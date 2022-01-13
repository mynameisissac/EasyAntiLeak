#include <iostream>
#include <fstream>
#include "utility.cpp"
using namespace std;


int main(){

	// reading user's filename
	string fileName;
	cout << "Enter your cpp file name: ";
	cin >> fileName;

	// executing cmd 
	const char* command = "cd \"put your file inside\" && make clean";
	system(command);

	// create input and output file stream instances
	ifstream userSourceCode("put your file inside/" + fileName);
	ofstream modifiedUserCode("put your file inside/modified.cpp");

	insertHeaders(modifiedUserCode);
	modifyFile(userSourceCode, modifiedUserCode);

	// close the file streams
	userSourceCode.close();
	modifiedUserCode.close();

	// executing cmd 
	command = "cd \"put your file inside\" && make && result_gen.exe";
	system(command);
	
	// read the result.log and print memory leak count
	ifstream resultLog("put your file inside/result.log");

	int memLeakCount = countMemoryLeak(resultLog);
	cout << "Number of memory leak counted (per variable/object allocated) = "
		 << memLeakCount << endl;

	resultLog.close();

	// hold the program to let user see output
	char dummy;
	cin >> dummy;

	return 0;
}