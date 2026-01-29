// الكورس الخامس الدرس 13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message) {
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 0);
    return Number;
}
void InvPrintInvertedNumberPattern(int Number) {


    cout << "\n" << "**************************************" <<"\n" << endl;
    for (int i = 1; i <= Number; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }
    cout << "\n" << "**************************************" << endl;




}


int main()
{
	InvPrintInvertedNumberPattern(ReadPositiveNumber("Please enter a positive number:"));
}

