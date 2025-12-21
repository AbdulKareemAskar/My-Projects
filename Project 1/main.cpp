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


int ReadNumber()
{
    int Number;  
    cout << "\nPlease enter a number? ";
    cin >> Number;  
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


void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;  
    
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}


void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	cout << arr[i] << " ";
	
		
	cout << "\n";
}


short FindNumberPositionInArray(int Number, int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == Number)
            return i; 
    }
    return -1;
}


bool IsNumberInArray(int Number, int arr[100], int arrLength)
{
    return FindNumberPositionInArray(Number, arr, arrLength) != -1;
}




void AddArrayElement(int Number, int arr[100], int &arrLength)
{
    
    arrLength++;
   
    arr[arrLength - 1] = Number;
}

void CopyArrayUsingAddArrayElement(int arrSource[100], int arrDestination[100], int arrLength, int &arrDestinationLength)
{
    for (int i = 0; i < arrLength; i++)
		
        AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
}


void InputUserNumbersInArray(int arr[100], int &arrLength)
{
    bool AddMore = true;  

    
    do
    {
       
        AddArrayElement(ReadNumber(), arr, arrLength);

      
        cout << "\nDo you want to add more numbers? [0]:No,[1]:yes? ";
        cin >> AddMore;  

    } while (AddMore);  
}


void CopyOddNumbers(int arrSource[100], int arrDestination[100], int arrLength, int &arrDestinationLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arrSource[i] % 2 != 0)
        {
            AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
        }
		
    }
	
}


void CopyEvenNumbers(int arrSource[100], int arrDestination[100], int arrLength, int &arrDestinationLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arrSource[i] % 2 == 0)
        {
            AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
        }
		
    }
	
}
  
  
  void CopyPrimeNumbers(int arrSource[100], int arrDestination[100], int arrLength, int &arrDestinationLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (CheckPrime(arrSource[i]) == enPrimeNotPrime::Prime)
        {
            AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
        }
		
    }
	
}


void CopyDistinctNumbersToArray(int arrSource[100], int arrDestination[100], int SourceLength, int &DestinationLength)
{
    for (int i = 0; i < SourceLength; i++)
    {
        if (!IsNumberInArray(arrSource[i], arrDestination, DestinationLength))
        {
            AddArrayElement(arrSource[i], arrDestination, DestinationLength);
        }
		
    }
	
}


void FillArray(int arr[100], int &arrLength)
{
    arrLength = 6;  
    
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;
}


bool IsPalindromeArray(int arr[100], int Length)
{
  
    for (int i = 0; i < Length; i++)
    {
        
        if (arr[i] != arr[Length - i - 1])
        {
            return false;  
        }
		
    }
    
    return true;
}


int OddCount(int arr[100], int arrLength)
{
    int Counter = 0;  

    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] % 2 != 0)
        {
            Counter++;  
        }
    }

    return Counter;  
}


int EvenCount(int arr[100], int arrLength)
{
    int Counter = 0;  

    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] % 2 == 0)
        {
            Counter++;  
        }
    }

    return Counter;  
}


int PositiveCount(int arr[100], int arrLength)
{
    int Counter = 0;  
    
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] >= 0)
        {
            Counter++;  
        }
    }
    
    return Counter;  
}


int NegativeCount(int arr[100], int arrLength)
{
    int Counter = 0;  
    
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] < 0)
        {
            Counter++;  
        }
    }
    
    return Counter;  
}


float MyABS(float Number)
{
    if (Number > 0)
        return Number;
    else
        return Number * -1;  
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

