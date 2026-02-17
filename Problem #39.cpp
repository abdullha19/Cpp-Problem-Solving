// Problem #39.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <ctime>
#include <string>
using namespace std;



int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}


void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}


void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
    arrLength++;
    arr[arrLength - 1] = Number;
}


void CopyOddNumbers(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arrSource[i] % 2 != 0)
        {
            AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
        }
    }
}
void primarrenumber (int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        bool isPrime = true;
        if (arr[i] <= 1) {
            isPrime = false;
        }
        else {
            for (int j = 2; j <= arr[i] / 2; j++) {
                if (arr[i] % j == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime) {
            cout << arr[i] << " is a prime number." << endl;
        }
    }
}

void primarrenumberwithAddArrayElement(int arr[100], int arrLength, int primeArr[100], int& primeArrLength) {
    for (int i = 0; i < arrLength; i++) {
        bool isPrime = true;
        if (arr[i] <= 1) {
            isPrime = false;
        }
        else {
            for (int j = 2; j <= arr[i] / 2; j++) {
                if (arr[i] % j == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime) {
            AddArrayElement(arr[i], primeArr, primeArrLength);
        }
    }
}

int main() {
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength = 0;

    FillArrayWithRandomNumbers(arr, arrLength);

    int arr2[100];
    int arr2Length = 0;

    int primeArr[100];
	int primeArrLength = 0;

    CopyOddNumbers(arr, arr2, arrLength, arr2Length);
    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);
	primarrenumberwithAddArrayElement(arr, arrLength, primeArr, primeArrLength);
    cout << "\nArray 2 Odd numbers:\n";
    PrintArray(arr2, arr2Length);
    
	cout << "\nPrime numbers in Array 1:\n";
	primarrenumber(arr, arrLength);
	cout << "\nPrime numbers in Array 1 added to a new array:\n";
	PrintArray(primeArr, primeArrLength);
    return 0;
}