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
    
CMATH LIB : round , sqrt , pow , floor , arc , ceil 

struct Name
{

};

enum Name {  };

cin.ignore(1,'\n');
    
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

return Number;
    
float pi = 3.14159265358979323846;
float Pi = 3.14159265358979323846;
float PI = 3.14159265358979323846;

string Name = to_string( Name of Variable)
    
string to int  : int Variable = stoi(Name of string)

string to double  : double Variable = stod(Name of string)

string to float  : float Variable = stof(Name of string)

int, double, float Name = ( int, double, float) Name of int, double, float /(conversation between Variable)
    
int, double, float Name = int, double, float (Name of int, double, float) /(conversation between Variable)

    
int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
srand((unsigned)time(NULL));


enPrimeNotPrime CheckPrime(int Number)
{
	if(Number == 2)
		return enPrimeNotPrime::Prime;

	if(Number < 2)
		return enPrimeNotPrime::NotPrime;


	int M = sqrt(Number);

	for (int i = 2; i <= M; i++)
	{
		if(Number % i == 0)
			return enPrimeNotPrime::NotPrime;
	}

	return enPrimeNotPrime::Prime;
}
    

void CopyOnlyPrimaryNumbers(int arr[100], int arr2[100], int arrLength, int& arr2Length)
{

	for (int i = 0; i < arr1Length; i++)
	{

		if(CheckPrime(arr1[i]) == enPrimeNotPrime::Prime)
		{
			arr2[arr2Length] = arr1[i];
			arr2Length++;
		}

	}

}

void Swap(int& A, int & B)
{
    int Temp = 0;
    
    Temp = A;
    A = B;
    B = Temp;
}











  
  
  



// Perfect number is : 6 = 1 + 2 + 3 , The number equal the number those divide it.    
//Structure with Enums : Enums inside the structure.
//
//string : 
//1. length
//2. Name[?] , 0,1,2
//3. string + string = Abd + ulkareem
//4. int Name = stoi( Name of string) + stoi ( Name of string ) / or conversation to any type of Variable
//
//Function of Enum Type : 
//1. conversation the Number to enum : int Name = 5 , return (Name of enum) Name of int;
//getline(cin, Name of string)
//
//Switch Case : It's Compare between switch and the case if the result is true the body of case will implement if not will not implement

return 0;

}

