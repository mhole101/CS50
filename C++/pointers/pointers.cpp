//
//
//pointers must be of the same type of variable it points to
//
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    cout << &n << endl; //& gives location of memory
    int* ptr =&n; // sets location of n to ptr
    cout << ptr << endl; // prints location of n
    cout << *ptr << endl; // * dereferences pointer
    *ptr=10;
    cout << *ptr << endl;
    cout << n << endl;


    //system("pause>0");
    return 0;
}