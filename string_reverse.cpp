#include <iostream>
using namespace std;

int main() 
{
    string *line = new string();
    cout << " Enter a string" << endl;
    getline(cin, *line);
    cout << "Original String: \"" << *line << "\"\n";

    int left=0;
    int right = (*line).length() - 1;    
    while (left < right) {
    swap((*line)[left], (*line)[right]);
    left++;
    right--;
    }
    cout << "Reversed String: " << "\"" << *line << "\"\n"; 
    return 0;
}