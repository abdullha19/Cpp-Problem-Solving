// Problem #31.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
int ReadPositiveNumber (string Message){

	int Number=0;
	do
	{
		cout << "___________________________________________" << endl;
		cout << Message << endl;
		cout << "___________________________________________" << endl;
		cin >> Number;

	} while (Number <= 0 || Number > 100);
	return Number;
}
void Swap (int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}


int Randomnumber (int from, int to);

void ShuffleArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		int index1 = Randomnumber(1, arrLength) - 1;
		int index2 = Randomnumber(1, arrLength) - 1;
		Swap(arr[index1], arr[index2]);
	}
}
int Randomnumber (int from, int to)
{
	// do not reseed here; seed once in main
	return rand() % (to - from + 1) + from;
}
void PrintArray (int arr[100], int arrLength)
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


	int main() 
	{
		srand((unsigned)time(NULL));

		int arr[100];  
		int arrLength = ReadPositiveNumber("\nEnter number of elements : \n");

		FillArrayWith1toN(arr, arrLength);

		cout << "\nArray elements before shuffle:\n";
		PrintArray(arr, arrLength);

		ShuffleArray(arr, arrLength);

		cout << "\nArray elements after shuffle:\n";
		PrintArray(arr, arrLength);

		return 0;
}
