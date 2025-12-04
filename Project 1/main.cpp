#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;

    } while (Number <= 0);

    return Number;
}

void ReadArrayElements(int Number, string& Z, string& Number2)
{
    
    cout << "\nEnter array elements : \n";

    for (int i = 0; i < Number; i++)
    {
        cout << "Elements [" << i + 1 << "] : ";
        cin >> Number2;

        Z = Z + Number2;
    }
}

void HowManyTimesRepeatElements(string Z, short& R, char& CheckNumber)
{
    for (int j = 0; j < Z.length(); j++)
    {
        if (Z[j] == CheckNumber)
            R++;
    }
}

void PrintElements(string Z, char CheckNumber, short R)
{
    cout << "\nOriginal array : ";

    for (int i = 0; i < Z.length(); i++)
    {
        cout << " " << Z[i] << " ";
    }

    cout << "\nNumber " << CheckNumber << " is repeated " << R << " Time(s)\n";
}

int main()
{   
    string Z = "";
    string Number2;
    char CheckNumber;
    short R = 0;

    int ArraySize = ReadPositiveNumber("Please enter a positive number ?");

    ReadArrayElements(ArraySize, Z, Number2);

    cout << "\nEnter the number you want to check ?\n";
    cin >> CheckNumber;

    HowManyTimesRepeatElements(Z, R, CheckNumber);
    PrintElements(Z, CheckNumber, R);

    return 0;
}

