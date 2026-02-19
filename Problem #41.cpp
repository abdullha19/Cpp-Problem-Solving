// Problem #41.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <ctime>
using namespace std;
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
void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}
void FillArrayWith1toN(int arr[100], int &arrLength)
{
	for (int i = 0; i < arrLength; i++)
		arr[i] = i + 1;
}
bool checkifitisPalindrome(int arr[100], int arrLength)
{
	bool isPalindrome = true;
	for (int i = 0; i < arrLength ; i++)
	{
		if (arr[i] != arr[arrLength - 1 - i])
		{
			isPalindrome = false;
			break;
		}
	}
	if (isPalindrome)
		cout << "The array is a palindrome." << endl;
	else
		cout << "The array is not a palindrome." << endl;
	return isPalindrome;
}

int main()
{
	int arr[100], arrLength;
    // Read the desired array length first
	arrLength = ReadPositiveNumber("Please enter the length of the array (1-100):");
	cout << "This program checks if the entered array is a palindrome or not." << endl;
	cout << "Note: A palindrome is a sequence that reads the same backward as forward." << endl;
	cout << "Please enter " << arrLength << " numbers to fill the array:" << endl;
	cout << "___________________________________________" << endl;

	// Read array elements from the user
	for (int i = 0; i < arrLength; i++)
	{
		cin >> arr[i];
	}

	// Show the array and check for palindrome
	PrintArray(arr, arrLength);
	checkifitisPalindrome(arr, arrLength);

	return 0;
}

