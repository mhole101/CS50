// pointers and arrays
// content taken from "How to use pointers and arrays"
// https://www.youtube.com/watch?v=DsS-ZiYOWy4&list=PL43pGnjiVwgSSRlwfahAuIqoJ8TfDIlHq&index=3
//
//
#include <iostream>
using namespace std;

int main()
{
    /* first part of video
    int luckyNumbers[5] = {2,3,5,7,9};
    cout << luckyNumbers << endl;
    cout << &luckyNumbers[0] << endl;
    cout << luckyNumbers[2] << endl;
    cout << *(luckyNumbers+2) << endl; //
    cout << (luckyNumbers+2) << endl;
    cout << &luckyNumbers[2] << endl;
    */

   int luckyNumbers[5];

   for (int i=0; i <= 4; i++){
        cout << "Number: " << endl;
        cin >> luckyNumbers[i];
   }

    for (int i=0; i <= 4; i++){
        cout << *(luckyNumbers+i)<< " ";

   }


    return 0;
}