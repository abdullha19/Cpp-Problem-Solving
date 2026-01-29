// 11.cpp : This file contains the 'main' function. Program execution begins and ends there.
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


int ReverseNumber(int Number) {
    int Remainder = 0, sum = 0;

    while (Number > 0) {
        Remainder = Number % 10;      // 1. نأخذ الرقم الأخير
        sum = sum * 10 + Remainder;   // 2. نضيفه للرقم المعكوس
        Number = Number / 10;         // 3. نحذف الرقم الأخير من العدد الأصلي
    }
    return sum;
}
bool IsPalindrome(int Number) {
    return Number == ReverseNumber(Number);
}

int main() {
	int Number = ReadPositiveNumber("Please enter a positive number: ");
    if (IsPalindrome(Number))
        cout << "The number is a palindrome." << endl;
    else
		cout << "The number is not a palindrome." << endl;

    

    return 0;
}

