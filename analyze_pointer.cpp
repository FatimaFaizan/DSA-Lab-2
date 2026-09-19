#include<iostream>
using namespace std;

 void analyze_pointer(int *ptr) {
     // part 1
     cout << "Memory Location: " << ptr << endl;
     cout << "Pointing to value: " << *ptr << endl;
     
 }

int main() {
    int variable1;
    variable1 =  5;
     int *variable2 = new int;
     *variable2 = 6;
     analyze_pointer(&variable1);
     analyze_pointer(variable2);
     delete variable2;
        return 0;
    }