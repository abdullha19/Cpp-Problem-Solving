// co5_l12.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
	
    
	
    for (int i = Number; i >= 1; i--) {
       for (int j = 1; j <= i; j++) {
            cout << i;
        }
	   cout << endl;
    }

    
    
	
}

int main()
{
	
    int Number = ReadPositiveNumber("Please enter a positive number: ");
	InvPrintInvertedNumberPattern(Number);

	return 0;
}
