//Kai Kuebler
#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;


void printName(int year){
    int age = year - 2000;
    cout << "Kai M. Kuebler ";
    cout << age << endl;
}

int main(int argc, char ** argv) {
    printName(2021);
	return 0;
}
