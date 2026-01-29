// الكورس الخامس الدرس 15.cpp : This file contains the 'main' function. Program execution begins and ends there.
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


    cout << "\n" << "**************************************" << "\n" << endl;
    for (int i = 65; i <= 65 + Number - 1; i++) {
        for (int j = 1; j <= i - 65 + 1; j++) {
            cout << char(i);
        }
        cout << endl;
    }
    cout << "\n" << "**************************************" << endl;




}


int main()
{
    InvPrintInvertedNumberPattern(ReadPositiveNumber("Please enter a positive number:"));
}

