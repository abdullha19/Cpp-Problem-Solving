// Problem #37.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <string>
using namespace std;



void AddArrayElement(int Number, int arr[100], int& arrLength)
{
	arrLength++;
	arr[arrLength - 1] = Number;
}
int ReadPositiveNumber(string Message) {

	int Number = 0;
	do
	{
		cout << "___________________________________________" << endl;
		cout << Message << endl;
		cout << "___________________________________________" << endl;
		cin >> Number;

	} while (Number <= 0 || Number > 100);
	return Number;
}
void Swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}


int Randomnumber(int from, int to);

void ShuffleArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		int index1 = Randomnumber(1, arrLength) - 1;
		int index2 = Randomnumber(1, arrLength) - 1;
		Swap(arr[index1], arr[index2]);
	}
}
int Randomnumber(int from, int to)
{
	// do not reseed here; seed once in main
	return rand() % (to - from + 1) + from;
}
void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void FillArrayWith1toN(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		arr[i] = i + 1;
}
void copyarrayreverseorder(int source[100], int destination[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		destination[i] = source[arrLength - 1 - i];
}
void CopyArrayUsingAddArrayElement(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength)
{
	for (int i = 0; i < arrLength; i++)
		AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
}



int main()
{
	srand((unsigned)time(NULL));

	int arr[100];
	int arrLength = ReadPositiveNumber("\nEnter number of elements : \n");
	int arr2[100];
	int arr2Length = 0;
	FillArrayWith1toN(arr, arrLength);
	cout << "\nArray elements before shuffle:\n";
	PrintArray(arr, arrLength);

	ShuffleArray(arr, arrLength);
	cout << "\nArray elements after shuffle:\n";
	PrintArray(arr, arrLength);

	// Copy arr into arr2 (same order)
	CopyArrayUsingAddArrayElement(arr, arr2, arrLength, arr2Length);
	cout << "\nArray elements after copying in the same order:\n";
	PrintArray(arr2, arr2Length);

	// Copy the (initialized and shuffled) array into arr2 in reverse order
	copyarrayreverseorder(arr, arr2, arrLength);
	cout << "\nArray elements after copying in reverse order:\n";
	PrintArray(arr2, arr2Length);
	return 0;
}