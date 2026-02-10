// الكورس الخامس الدرس  21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Write a program to read how many keys to generate and print them on the screen

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

int main()
{
    srand((unsigned)time(NULL));

   // srand((unsigned)time(NULL));

    
    GenerateKeys(ReadPositiveNumber("Pleaes enter how many keys to generate? \n "));

    return 0;  
   
}

