#include <iostream>
using namespace std; 

int* memoryLeak(){

    return new int;
}

int main(){ 

    // nothing

    return 0;
}