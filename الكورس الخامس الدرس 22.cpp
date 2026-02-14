#include <iostream>
#include <string>

using namespace std;

// يفضل استخدام الثابت هنا لتسهيل تغيير حجم المصفوفة لاحقاً
const int Size = 100;

int ReadPositiveNumber(string Message) {
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0); // تعديل الشرط لضمان أن الرقم موجب تماماً (أكبر من صفر)

    return Number;
}

void ReadArray(int arr[Size], int& arrLength) {
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;

    // (Optional) Check to prevent buffer overflow
    if (arrLength > Size) {
        cout << "Limit is " << Size << ", setting length to " << Size << endl;
        arrLength = Size;
    }

    cout << "\nEnter array elements: \n";
    for (int i = 0; i < arrLength; i++)
    {
        cout << "Element [" << i + 1 << "] : ";
        cin >> arr[i];
    }
    cout << endl;
}

void PrintArray(int arr[Size], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";
}

int TimesRepeated(int Number, int arr[Size], int arrLength)
{
    int count = 0;
    for (int i = 0; i < arrLength; i++) // i < arrLength is cleaner than i <= arrLength - 1
    {
        if (Number == arr[i])
        {
            count++;
        }
    }
    return count;
}

int main() {

    int arr[Size];
    int arrLength;
    int NumberToCheck;

    ReadArray(arr, arrLength);

    NumberToCheck = ReadPositiveNumber("Enter the number you want to check: ");

    cout << "\nOriginal array: ";
    PrintArray(arr, arrLength);

    cout << "\nNumber " << NumberToCheck;
    cout << " is repeated ";
    cout << TimesRepeated(NumberToCheck, arr, arrLength) << " time(s)\n";

    return 0;
}