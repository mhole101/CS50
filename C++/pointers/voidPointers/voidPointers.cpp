// void pointers
//
//
//
#include <iostream>
using namespace std;

void printNumber(int* numberPtr) {
    cout << *numberPtr << endl;
}

void printLetter(char* charPtr){
    cout << *charPtr << endl;
}
void print(void*ptr, char type){
    
}

int main()
{
    int number = 5;
    char letter = 'a';
    printNumber(&number);
    printLetter(&letter);

    //system("pause>0"):
    return 0;
}