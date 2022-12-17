// void pointers
// content from "What is a void pointer?"
// https://www.youtube.com/watch?v=mOPYyqSkPO0&list=PL43pGnjiVwgSSRlwfahAuIqoJ8TfDIlHq&index=2
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
    switch (type){
        case 'i':cout << *((int*)ptr) << endl;//handle int*
        break;
        case 'c':cout << *((char*)ptr) << endl;//handle char*
        break;
    }

}

int main()
{
    int number = 5;
    char letter = 'a';
    printNumber(&number);
    printLetter(&letter);
    print(&number, 'i');
    print(&letter, 'c');

    //system("pause>0"):
    return 0;
}