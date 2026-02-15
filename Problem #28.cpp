// Problem #28.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

int GetMaxNumber(int arr[100], int arrLength) {
    int max = arr[0];
    for (int i = 1; i < arrLength; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int GetMinNumber(int arr[100], int arrLength) {
    int min = arr[0];
    for (int i = 1; i < arrLength; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int sumArray(int arr[100], int arrLength) {
    int sum = 0;
    for (int i = 0; i < arrLength; i++) {
        sum += arr[i];
    }
    return sum;
}

float GetAverage(int arr[100], int arrLength) {
    return (float)sumArray(arr, arrLength) / arrLength;
}

// التعديل هنا: خليناها void لأننا مش محتاجين نرجع الطول
void CopyArray(int arrsource[100], int arrdestination[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        arrdestination[i] = arrsource[i];
    }
}

int main() {
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength = 0; // يفضل إعطاء قيمة ابتدائية
    int arr2[100];

    arrLength = ReadPositiveNumber("Please enter the number of elements in the array:");

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray 1 Elements: ";
    PrintArray(arr, arrLength);

    cout << "\nMaximum Number: " << GetMaxNumber(arr, arrLength) << endl;
    cout << "Minimum Number: " << GetMinNumber(arr, arrLength) << endl;
    cout << "Sum: " << sumArray(arr, arrLength) << endl;
    cout << "Average: " << GetAverage(arr, arrLength) << endl;

    // عملية النسخ
    CopyArray(arr, arr2, arrLength);

    // الطباعة للتأكد (الجزء المهم اللي كان ناقص)
    cout << "\nArray 2 Elements after copy: ";
    PrintArray(arr2, arrLength);

    return 0;
}