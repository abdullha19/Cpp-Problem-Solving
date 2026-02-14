// Problem #23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int ReadPositiveNumber(string Message) {
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}
void FillArrayWithRandomNumbers(int arr[100], int& arrLength) {
    if (arrLength > 100) {
        arrLength = 100;
        cout << "Note: Array size limited to 100." << endl;
    }

    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = rand() % 100 + 1; 
    }
}

void PrintArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength;

    arrLength = ReadPositiveNumber("Please enter the number of elements in the array:");

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray Elements: ";
    PrintArray(arr, arrLength);

    return 0;
}