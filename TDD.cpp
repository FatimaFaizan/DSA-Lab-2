#include <iostream>
#include <cassert>
using namespace std;

bool isSorted(const int* arr, const int size);
void testSortedArray() {
    int arr[] = {1,2,3,4,5};
    bool result = isSorted(arr,5);
    assert(result==true);
    cout<<"Test 1 Passed: Sorted array"<<endl;

}
void testUnsortedArray() {
    int arr[] = {1,4,3,5,6};
    bool result = isSorted(arr,5);
    assert(result==false);
    cout<<"Test 2 Passed: Unsorted array"<< endl;
}
void testDuplicateValues(){
    int arr[] = {1,2,2,3,5};
    bool result = isSorted(arr,5);
    assert(result==true);
    cout<<"Test 3 Passed: Duplicate values"<<endl;
}
void testSingleElement(){
    int arr[]={10};
    bool result= isSorted(arr,1);
    assert(result==true);
    cout<<"Test 4 Passed: Single element"<< endl;
}
void testDescendingArray(){
    int arr[]={5,4,3,2,1};
    bool result=isSorted(arr,5);
    assert(result==false);
    cout <<"Test 5 Passed: Descending array"<<endl;
}
void testNegativeValues(){
    int arr[]={-5,-3,-2,0,4};
    bool result=isSorted(arr,5);
    assert(result==true);
    cout<<"Test 6 Passed: Negative values"<<endl;
}
void testAllEqualValues(){
    int arr[] ={7,7,7,7};
    bool result=isSorted(arr,4);
    assert(result==true);
    cout<<"Test 7 Passed: All equal values"<<endl;
}
void testMixedValues(){
    int arr[]={-10,-5,0,5,10};
    bool result=isSorted(arr,5);
    assert(result == true);
    cout<<"Test 8 Passed: Mixed negative and positive values"<< endl;
}
bool isSorted(const int*arr, const int size) {
     for (int i = 0; i < size - 1; i++) {
        if (arr[i]>arr[i+1]) {
            return false; }
    }
    return true;
}

int main() 
{
    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    testAllEqualValues();
    testMixedValues();
// end of tests 
    cout<<endl;
    cout<<"All tests passed successfully.." <<endl;
    return 0;
}