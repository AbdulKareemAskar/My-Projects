#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <climits>

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

int main()
{   
cout << sizeof( ) << endl;
cout << "Variable Range : ( "  << Variable_MIN << " , " << Variable_MAX << " ) \n";
A++,A--;
A += A, -=, *=, /* , %=;
Prefix ++A, --A, Postfix A++, A--
A == A, A != A, A < A , A > A , A <= A , A >= A 
A && A, A ! A , A || A
CMATH LIB : round , sqrt , pow , floor , arc , ceil 

struct Name
{

};

enum Name {  };

Structure with Enums : Enums inside the structure.

string Name = to_string( Name of Variable)
string to int  : int Variable = stoi(Name of string)
string to double  : double Variable = stod(Name of string)
string to float  : float Variable = stof(Name of string)
int, double, float Name = ( int, double, float) Name of int, double, float /(conversation between Variable)
int, double, float Name = int, double, float (Name of int, double, float) /(conversation between Variable)

string : 
1. length
2. Name[?] , 0,1,2
3. string + string = Abd + ulkareem
4. int Name = stoi( Name of string) + stoi ( Name of string ) / or conversation to any type of Variable

Function : Type of Function + Name + () + { } + return 
Procedure : void + Name + () + { } + for Reading and Printing

getline(cin, Name of string)
cin.ignore(1,'\n');

Function With Parameter : int Car(int A), int Car(int& A)
Switch Case : It's Compare between switch and the case if the result is true the body of case will implement if not will not implement

Function of Enum Type : 
1. conversation the Number to enum : int Name = 5 , return (Name of enum) Name of int;

for (int i = 1; i <= Length; i++)
{
    
}
for (int i = Length; i >= 1; i--)
{
    
}
int i = 1;
while (i <= length )
{
cout << i << endl;
i++;
}


int Number;
do
{
cout << "Please enter a number ? "  << endl;
cin >> Number;

} while (Number < Length);
    




return 0;

}

