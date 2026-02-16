// المشكله رقم 33.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib> 
#include <ctime>
using namespace std;
enum CharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };
int ReadPositiveNumber(string Message) {
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 0);
    return Number;
}
int RandomNumber(int From, int To)
{

    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
char RandomChar(CharType type)
{
    char result;
    switch (type)
    {
    case SmallLetter:
        result = RandomNumber(97, 122);
        break;
    case CapitalLetter:
        result = RandomNumber(65, 90);
        break;
    case SpecialCharacter:
        result = RandomNumber(33, 47);
        break;
    case Digit:
        result = RandomNumber(48, 57);
        break;
    default:
        result = ' ';
        break;
    }
    return result;
}
string GenerateWord(CharType CharType, short Length)
{
    string Word;
    for (int i = 1; i <= Length; i++)
    {

        Word = Word + RandomChar(CharType);
    }
    return Word;
}
string GenerateKey()
{
    string Key = "";
    Key = GenerateWord(CharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(CharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(CharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(CharType::CapitalLetter, 4);

    return Key;
}
void GenerateKeys(short NumberOfKeys)
{
    for (int i = 1; i <= NumberOfKeys; i++)
    {

        cout << "Key [" << i << "] : ";
        cout << GenerateKey() << endl;
    }
}
void printstringarre (string arr[100] , int arrLength) {

    cout << "___________________________" << endl;
    for (int i = 0; i < arrLength; i++) {
        cout << "Array[" << i << "] : ";
        cout << arr[i] << "\n";
    }
    cout << "___________________________" << endl;
}
void FillArrayWithKeys(string arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        arr[i] = GenerateKey();
}
int main()
{
    srand((unsigned)time(NULL));

    string arr[100]; 

    int arrLength = 0; 

    arrLength = ReadPositiveNumber("How many keys do you want to generate?\n");

    FillArrayWithKeys(arr, arrLength);

    printstringarre(arr, arrLength);

    return 0;

}