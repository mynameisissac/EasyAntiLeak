#include <iostream>
#include <fstream>
#include "utility.cpp"
using namespace std;


int main(){

	// reading user's filename
	string fileName;
	cout << "Enter your cpp file name: ";
	cin >> fileName;

	// create input and output file stream instances
	ifstream userSourceCode("put your file inside/" + fileName);
	ofstream modifiedUserCode("put your file inside/modified_" + fileName);

	insertHeaders(modifiedUserCode);
	modifyFile(userSourceCode, modifiedUserCode);

	// close the file streams
	userSourceCode.close();
	modifiedUserCode.close();

	// executing cmd 
	//const char* command = "cd \"put your file inside\" && make && sample.exe";
	//system(command);
	

	return 0;
}