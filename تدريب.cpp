// تدريب.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <limits>
using namespace std;

short  EnterEncryptionKey( ) {
    short EncryptionKey;
    cout << "please enter the EncryptionKey" << endl;
    cin >> EncryptionKey;
    // discard the rest of the line so subsequent getline works correctly
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return EncryptionKey;
}

string REadename() {
    string Text;
    cout << "Enter your name: ";
    getline(cin, Text);
    return Text;

}
string EncryptText(string Text, short EncryptionKey) {
    for (size_t i = 0; i < Text.length(); ++i) {
        Text[i] = char((int)Text[i] + EncryptionKey);
    }
    return Text;
}

string DncryptText(string Text, short EncryptionKey) {
    for (size_t i = 0; i < Text.length(); ++i) {
        Text[i] =  char((int)Text[i] - EncryptionKey);
    }
    return Text;
}

int main()
{
    short EncryptionKey = EnterEncryptionKey();
    string TextAfterEncryption, TextAfterDecryption;
    string Text = REadename();
    TextAfterEncryption = EncryptText(Text, EncryptionKey);

    TextAfterDecryption = DncryptText(TextAfterEncryption, EncryptionKey);

    cout << "Original Text: " << Text << endl;

    cout << "Encrypted Text: " << TextAfterEncryption << endl;

    cout << "Decrypted Text: " << TextAfterDecryption << endl;
}

