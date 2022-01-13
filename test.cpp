#include <iostream>
#include <fstream>
using namespace std; 

int main(){ 

    ifstream ifs("AntiLeak.cpp");

    char buffer[256] = {};       // maximum reading 256 char in one line
	while (ifs.getline(buffer, 256, '\0')){
        cout << "fuck" << endl;
        cout << buffer << endl;
    }

    return 0;
}