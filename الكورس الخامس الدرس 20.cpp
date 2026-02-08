// الكورس الخامس الدرس 20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// random small letters , Captel letters , special characters and digits in order
#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib> 
#include <ctime>
using namespace std;
enum CharType { SmallLetter=1, CapitalLetter=2 , SpecialCharacter=3, Digit=4 };

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

int main()
{
    srand((unsigned)time(NULL));

	cout << "Random Small Letter: " << RandomChar(SmallLetter) << endl;
	cout << "Random Capital Letter: " << RandomChar(CapitalLetter) << endl;
	cout << "Random Special Character: " << RandomChar(SpecialCharacter) << endl;
    cout << "Random Digit: " << RandomChar(Digit) << endl;
	return 0;


}

