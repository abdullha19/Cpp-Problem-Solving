// الكورس الخامس الدرس 22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Write a program to read N elements and store them in array then print all array elements and ask for a number to check, then print how many number a certain element repeated in that array.
#include <iostream>
#include <ctime>
#include <cstdlib> 
#include <string>

using namespace std;
enum Myarraysenum { Size = 100 };
int ReadPositiveNumber(string Message) {
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 0);
    return Number;
}
int Askuoserhohmanyaree(int from , int to) {
    int Number = 0; do { cout << "Enter a number between " << from << " and " << to << endl; cin >> Number; } while (Number < from || Number > to); return Number;

}

int main()
{
    // Read number of elements (must be between 1 and Size)
    int n = 0;
    do {
        cout << "Enter number of elements (1 to " << Size << "): ";
        cin >> n;
    } while (n <= 0 || n > Size);

    int arr[Size] = {0};

    // Read array elements
    for (int i = 0; i < n; ++i) {
        cout << "Enter element [" << i << "]: ";
        cin >> arr[i];
    }

    // Print all elements
    cout << "Array elements: ";
    for (int i = 0; i < n; ++i) {
        if (i) cout << ", ";
        cout << arr[i];
    }
    cout << endl;

    // Ask for a number to check
    int key;
    cout << "Enter a number to check how many times it appears: ";
    cin >> key;

    // Count occurrences
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key) ++count;
    }

    cout << key << " appears " << count << " time" << (count == 1 ? "" : "s") << " in the array." << endl;

    return 0;
}

