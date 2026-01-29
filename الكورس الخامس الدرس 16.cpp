// الكورس الخامس الدرس 16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


void PrintAllFromAAAtoZZZ() {

    string Word = "";
    cout << "\n" << "**************************************" << "\n" << endl;
    for (int i = 65; i <= 90 ; i++) {
        for (int j = 65; j <=90; j++) {
            for (int m = 65; m <=90; m++)
            {
				Word= Word +(1, char(i));
				Word= Word +(1, char(j));
				Word= Word +(1, char(m));
				cout << Word << endl;
				Word = "";
            }
        }
        cout << endl;
    }
    cout << "\n" << "**************************************" << endl;




}


int main()
{
    
	PrintAllFromAAAtoZZZ();

}

