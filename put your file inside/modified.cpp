// insert by Easy Anti Leak
#include <fstream>
#include <iostream>
std::ofstream lo_G_6987("result.log");

#include <iostream>
using namespace std; 

int* memoryLeak(){


lo_G_6987 << "newing at line 6\n";    return new int;
}

int main(){ 

    // nothing

    return 0;
}
