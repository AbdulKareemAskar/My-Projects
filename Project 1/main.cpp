#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <climits>

using namespace std;

(1) ReadNumbers :
(2) Size and Range and Convert between Variable :
(3) Perfect Numbers :
(4) Digits And Reverse Numbers and Functions and Procedure for Them :
(5) Inverted Numbers and Letters Pattern :
(6) Letters From A,AA,AAA To Z,ZZ,ZZZ :
(7) Password Functions :
(8) Creating The Key:
(9) Structures and Enums and Function and Procedure For Enums :
(10) For Print Full Name :
(11) The Loops :
(12) PI Number :
(13) Random Numbers Library :
(14) Swap Procedure :
(15) Array Function and Procedure :
(16) Palindrome Function :
(17) Count The Things :
(18) Cmath Library Function :
(19) Create Multiplyction Table  :
(20) Calculate Operation Half Number And Others :
(21) Print Range From 1 To N And From N To 1 _ Using Loops  :


(20)
(30)
(40)








	
(1)(1)(1)(1)(1)(1)(1)(1)(1)
******* ReadNumbers ****** :
[

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


float ReadNumber()
{
    float Number;  
    cout << "\nPlease enter a number? ";
    cin >> Number;  
    return Number;  
}


int ReadAge()
{
    int Age;  

    cout << "Please enter your Age ? " << endl;
    cin >> Age;

    return Age;  
}


bool ValidateNumberInRange(int Number, int From, int To)
{
    return (Number >= From && Number <= To);
}


int ReadUntilAgeBetween(int From, int To)
{
    int Age = 0;  

    do
    {
        Age = ReadAge();  
    } while (!ValidateNumberInRange(Age, From, To));  

    return Age;  
}


int ReadPower()
{
    int Number;  

    cout << "Please enter the power? " << endl;
    cin >> Number;

    return Number;  
}


int ReadNumberInRange(int From, int To)
{
    int Grade;  

    do
    {
        cout << "Please enter a Grade between " << From << " and " << To << "? " << endl;
        cin >> Grade;
    } while (Grade < From || Grade > To);  

    return Grade;  
}

]********








(2)(2)(2)(2)(2)(2)(2)(2)(2)(2)(2)(2)(2)(2)(2)(2)(2)(2)(2)(2)(2)
******* Size and Range and Convert between Variable  ******* :
[
	
cout << sizeof( ) << endl;

cout << "Variable Range : ( "  << Variable_MIN << " , " << Variable_MAX << " ) \n";
    
string Name = to_string( Name of Variable)
    
string to int  : int Variable = stoi(Name of string)

string to double  : double Variable = stod(Name of string)

string to float  : float Variable = stof(Name of string)

int, double, float Name = ( int, double, float) Name of int, double, float /(conversation between Variable)
    
int, double, float Name = int, double, float (Name of int, double, float) /(conversation between Variable)

]*********








(3)(3)(3)(3)(3)(3)(3)(3)(3)(3)(3)(3)
******** Perfect Numbers ******** :
[

bool isPerfectNumber(int Number)
{
    int Sum = 0; 
    
    for (int i = 1; i < Number; i++)
    {
        if (Number % i == 0)
            Sum += i; 
    }
    
    
    return Number == Sum;
}



void PrintPerfectNumbersFrom1ToN(int Number)
{
    for (int i = 1; i <= Number; i++)
    {
        if (isPerfectNumber(i))
        {
            cout << i << endl;
        }
    }
}

]*********








(4)(4)(4)(4)(4)(4)(4)(4)(4)(4)(4)(4)(4)(4)(4)(4)(4)(4)(4)(4)(4)(4)(4)(4)(4)(4)(4)(4)(4)
******** Digits And Reverse Numbers and Functions and Procedure for Them *********** :
[

void PrintDigits(int Number)
{
    int Remainder = 0; 
    
    while (Number > 0)
    {
        Remainder = Number % 10; 
        Number = Number / 10;   
        cout << Remainder << endl;  
    }
}


int SumOfDigits(int Number)
{
    int Sum = 0;        
    int Remainder = 0;  

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;    
        Sum = Sum + Remainder;   
    }
    
    return Sum;  
}


nt ReverseNumber(int Number)
{
    int Remainder = 0;  
    int Number2 = 0;    
    
    while (Number > 0)
    {
        Remainder = Number % 10;  
        Number = Number / 10;      
        Number2 = Number2 * 10 + Remainder;  
    }
    
    return Number2;  
}



bool IsPalindromeNumber(int Number)
{
    return Number == ReverseNumber(Number);
}



int CountDigitFrequency(short DigitToCheck, int Number)
{
    int FreqCount = 0;  
    int Remainder = 0;   
    
    while (Number > 0)
    {
        Remainder = Number % 10; 
        Number = Number / 10;     
        
        if (DigitToCheck == Remainder)
        {
            FreqCount++;
        }
    }
	
    return FreqCount;  
}



void PrintAllDigitsFrequencey(int Number)
{
    cout << endl; 
    
    for (int i = 0; i < 10; i++)
    { 
        short DigitFrequency = 0;                      
        DigitFrequency = CountDigitFrequency(i, Number);    
        
        if (DigitFrequency > 0)
        {
            cout << "Digit " << i << " Frequencey is "  
                 << DigitFrequency << " Time(s).\n";
        }
    }
}



]***********








(5)(5)(5)(5)(5)(5)(5)(5)(5)(5)(5)(5)(5)(5)(5)(5)(5)(5)(5)(5)
(نمط الاعداد والاحرف المقلوبة)
********** Inverted Numbers and Letters Pattern ********** :
[

void PrintNumberPattern(int Number)
{
    cout << "\n"; 

    for (int i = 1; i <= Number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;  
        }
        cout << "\n";  
    }
}


void PrintLetterPattern(int Number)
{
    cout << "\n";  
   
   
    for (int i = 65; i <= 65 + Number - 1; i++)
    {
       
        for (int j = 1; j <= i - 65 + 1; j++)
        {
            cout << char(i);  
        }
       
        cout << "\n";  
    }
}

]**********








(6)(6)(6)(6)(6)(6)(6)(6)(6)(6)(6)(6)(6)(6)(6)(6)(6)(6)(6)
********* Letters From A,AA,AAA To Z,ZZ,ZZZ ********* :
[

void PrintAllFromAAAtoZZZ()
{
    cout << "\n";  
    string word = "";  
    
    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                word.append(1, char(i));
                word.append(1, char(j));
                word.append(1, char(k));
                
                cout << word << endl;
                word = "";
            }
        }
        cout << "\n____________________________\n";
    }
}

]*********








(7)(7)(7)(7)(7)(7)(7)(7)(7)(7)(7)(7)(7)(7)
********** Password Functions ********* :
[

string ReadPassword()
{
    string Password; 
    
    cout << "Please enter a 3-Letter Password (all capital)?\n"; 
    cin >> Password;  
    
    return Password;  
}


	
bool GuessPassword(string OriginalPassword)
{
    string word = "";  
    int Counter = 0;   
    
    cout << "\n"; 
    
    for (int i = 65; i <= 90; i++)         
    {
        for (int j = 65; j <= 90; j++)     
        {
            for (int k = 65; k <= 90; k++) 
            {
                word = word + char(i);
                word = word + char(j);
                word = word + char(k);
                
                Counter++;  
                
                cout << "Trial [" << Counter << "] : " << word << endl;
                
                if (word == OriginalPassword)
                {
                    cout << "\nPassword is " << word << "\n";
                    cout << "Found after " << Counter << " Trial(s)\n";
                    
                    return true; 
                }
                
                word = "";
            }
        }
    }
    
    return false;  
}

]**********








(8)(8)(8)(8)(8)(8)(8)(8)(8)(8)(8)(8)
********* Creating The Key ********* :
[


string ReadText()
{
    string Text;  
    
    cout << "Please enter Text?\n"; 
    getline(cin, Text);              
    
    return Text; 
}

	


string EncryptText(string Text, short EncryptionKey)
{
    
    for (int i = 0; i <= Text.length(); i++)
    {
        
        Text[i] = char((int)Text[i] + EncryptionKey);
    }
    return Text;
}




string DecryptText(string Text, short EncryptionKey)
{
   
    for (int i = 0; i <= Text.length(); i++)
    {
        
        Text[i] = char((int)Text[i] - EncryptionKey);
    }
    return Text;
}

|
|
|
|
|
	
int main()
{
    const short EncryptionKey = 2; 

    string TextAfterEncryption, TextAfterDecryption;  
    
    string Text = ReadText();
    
    TextAfterEncryption = EncryptText(Text, EncryptionKey);
    
    TextAfterDecryption = DecryptText(TextAfterEncryption, EncryptionKey);

    cout << "\nText Before Encryption : " << Text << endl;
    cout << "Text After Encryption  : " << TextAfterEncryption << endl;
    cout << "Text After Decryption  : " << TextAfterDecryption << endl;

    return 0; 
}


string GenerateWord(enCharType CharType, short Length)
{
    string Word;  

    for (int i = 1; i <= Length; i++)
    {
        Word = Word + GetRandomCharacter(CharType);
    }
    return Word;
}



string GenerateKey()
{
    string Key = "";  

    Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4);
    
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



]**********





















(9)(9)(9)(9)(9)(9)(9)(9)(9)(9)(9)(9)(9)(9)(9)(9)(9)(9)(9)(9)(9)(9)(9)(9)
******* Structures and Enums and Function and Procedure For Enums ******** :
[
	
struct Name
{

};

enum Name {  };
enum enOddOrEven { Odd = 1, Even = 2 };
enum enPassFail { Pass = 1, Fail = 2 };
enum enPrimNotPrime { Prime = 1, NotPrime = 2 };
enum enCharType { SamallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };


string GetFullName(stInfo Info, bool Reversed)
{
    string FullName = "";  

    if (Reversed)
        FullName = Info.LastName + " " + Info.FirstName;
        FullName = Info.FirstName + " " + Info.LastName;

    return FullName; 
}


bool IsAccepted(stInfo Info)
{
    if (Info.HasRecommendation)
    {
        return true;
    }
    else
    {
        return (Info.Age > 21 && Info.HasDrivingLicense);
    }
}



bool IsAccepted(stInfo Info)
{
    return (Info.Age > 21 && Info.HasDrivingLicense);
}


enOddOrEven CheckOddOrEven(int Number)
{
    if (Number % 2 != 0)
        return enOddOrEven::Odd;
    else
        return enOddOrEven::Even;
}


enNumberType CheckNumberType(int Num)
{
    int Result = Num % 2;  

    if (Result == 0)  
        return enNumberType::Even;
    else  
        return enNumberType::Odd;
}


enPassFail CheckAverage(float Average)
{
    if (Average >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}


void PrintNumberType(enNumberType NumberType)
{
    if (NumberType == enNumberType::Even)
        cout << "\n Number is Even. \n";
    else
        cout << "\n Number is Odd. \n";
}



char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {

		
    case enCharType::SamallLetter:
    {
        return char(RandomNumber(97, 122));
        break;  
    }
    case enCharType::CapitalLetter:
    {
        return char(RandomNumber(65, 90));
        break;
    }
    case enCharType::SpecialCharacter:
    {
        return char(RandomNumber(33, 47));
        break;
    }
    case enCharType::Digit:
    {
        return char(RandomNumber(48, 57));
        break;
    }

		
 
	}
	
    return '\0';
}



void PrintPrimeNumbersFrom1ToN(int Number)
{
    cout << "\n";  
    cout << "Prime Numbers from " << 1 << " To " << Number;
    cout << " are : " << endl;

    for (int i = 1; i <= Number; i++)
    {
        if (CheckPrime(i) == enPrimNotPrime::Prime)
        {
            cout << i << endl;
        }
    }
}



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


enPassFail CheckMark(int Mark)
{
    if (Mark >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}


]*********








(10)(10)(10)(10)(10)(10)(10)(10)(10)	
******* For Print Full Name ******* :
[
	
cin.ignore(1,'\n');
getline(cin,Name);

]*********








(11)(11)(11)(11)(11)(11)(11)	
******** The Loops ******** :
[
    
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


]*********







	
(12)(12)(12)(12)(12)(12)(12)
******** PI Number ******** :
[

float pi = 3.14159265358979323846;

]********







	
(13)(13)(13)(13)(13)(13)(13)(13)(13)(13)(13)
********* Random Numbers Library ******** :
[
    
int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
	
srand((unsigned)time(NULL));


]*********








(14)(14)(14)(14)(14)(14)(14)(14)(14)
******** Swap Procedure ********* :
[

void Swap(int& A, int & B)
{
    int Temp = 0;
    
    Temp = A;
    A = B;
    B = Temp;
}

]*********








(15)(15)(15)(15)(15)(15)(15)(15)(15)(15)(15)(15)
********* Array Function and Procedure ********* "
[

	
void ReadArray(int arr[100], int &arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;  
    
    cout << "\nEnter array elements: \n";
    for (int i = 0; i < arrLength; i++)
    {
        cout << "Element [" << i + 1 << "] : ";  
        cin >> arr[i];                         
    }
    cout << endl;  
}


int TimesRepeated(int Number, int arr[100], int arrLength)
{
    int count = 0;  
    for (int i = 0; i <= arrLength - 1; i++)
    {
        if (Number == arr[i])  
        {
            count++;  
        }
    }
    return count;  
}

	
void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;  
    
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}



void FillArrayWithKeys(string arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        arr[i] = GenerateKey();
}



void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	cout << arr[i] << " ";
	
		
	cout << "\n";
}



void PrintStringArray(string arr[100], int arrLength)
{
    cout << "\nArray elements:\n\n";
    for (int i = 0; i < arrLength; i++)
    {
        cout << "Array[" << i << "] : ";
        cout << arr[i] << "\n";
    }
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


 if (!IsNumberInArray(Number, arr, arrLength))
        cout << "No, The number is not found :-(\n";
    else
        cout << "Yes it is found :-)\n";



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



void CopyArray(int arrSource[100], int arrDestination[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        arrDestination[i] = arrSource[i];
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



void CopyOnlyPrimaryNumbers(int arrSource[100], int arrDestination[100], int arrLength, int &arr2Lenght)
{
    int Counter = 0;  
    
    for (int i = 0; i < arrLength; i++)
    {
        if (CheckPrime(arrSource[i]) == enPrimNotPrime::Prime)
        {
            arrDestination[Counter] = arrSource[i];
            Counter++;  
        }
    }
    
    arr2Lenght = --Counter;
}



void CopyArrayInReverseOrder(int arrSource[100], int arrDestination[100], int arrLength)
{
 
    for (int i = 0; i < arrLength; i++)
        arrDestination[i] = arrSource[arrLength - 1 - i];
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


int MaxNumberInArray(int arr[100], int arrLength)
{
    int Max = 0; 
	
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] > Max)
        {
            Max = arr[i];
        }
    }
    return Max; 
}


int MinNumberInArray(int arr[100], int arrLength)
{
    int Min = arr[0]; 
    
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] < Min)
        {
            Min = arr[i];
        }
    }
    return Min;  
}


int SumArray(int arr[100], int arrLength)
{
    int Sum = 0;  
    
    for (int i = 0; i < arrLength; i++)
    {
        Sum += arr[i];
    }
    
    return Sum; 
}


void SumOf2Arrays(int arr1[100], int arr2[100], int arrSum[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        arrSum[i] = arr1[i] + arr2[i];  
    }
}



float ArrayAverage(int arr[100], int arrLength)
{
    return (float)SumArray(arr, arrLength) / arrLength;
}



(قلب اليمين الى اليسار)
void ShuffleArray(int arr[100], int arrLength)
{

    for (int i = 0; i < arrLength; i++)
    {
        
        int index1 = RandomNumber(1, arrLength) - 1;
        int index2 = RandomNumber(1, arrLength) - 1;
		
        Swap(arr[index1], arr[index2]);
    }
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


]**********







	
(16)(16)(16)(16)(16)(16)(16)(16)(16)(16)
********* Palindrome Function ********* :
[

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


bool IsPalindromeNumber(int Number)
{
    return Number == ReverseNumber(Number);
}

]**********







	
(17)(17)(17)(17)(17)(17)(17)(17)(17)(17)
********** Count The Things ********* :
[
	
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

]**********








(18)(18)(18)(18)(18)(18)(18)(18)(18)(18)(18)
********* Cmath Library Function ********* :
[

void PowerOf2_3_4(int Number)
{
    int a, b, c;  

    a = Number * Number;                  
    b = Number * Number * Number;         
    c = Number * Number * Number * Number; 

    cout << a << " " << b << " " << c << endl;
	
}
	
float MyABS(float Number)
{
    if (Number > 0)
        return Number;
    else
        return Number * -1;  
}


float GetFractionPart(float Number)
{
    return Number - int(Number);
}


int MyRound(float Number)
{
    int IntPart;  
    IntPart = int(Number);  

    float FractionsPart = GetFractionPart(Number);

    if (abs(FractionsPart) >= 0.5)
    {
        if (Number > 0)
            return ++IntPart;  
        else
            return --IntPart;
    }
    else
    {
        return IntPart;
    }
	
}


int MyFloor(float Number)
{
    if (Number > 0)
        return int(Number);
    else
        return int(Number) - 1;
}


int MyCeil(float Number)
{
    if (abs(GetFractionPart(Number)) > 0)
    {
        if (Number > 0)
            return int(Number) + 1;  
        else
            return int(Number);  
    }
    else
        return Number;  
}


float MySqrt(float Number)
{
    return pow(Number, 0.5);  
}

]*********







	
(19)(19)(19)(19)(19)(19)(19)(19)(19)(19)(19)(19)
********** Create Multiplyction Table ********* :
[

void PrintTableHeader()
{
    cout << "\n\n\t\t\t Multiplication Table From 1 to 10\n\n";
    
    cout << "\t";
    
    for (int i = 1; i <= 10; i++)
    {
        cout << i << "\t";
    }
    
    cout << "\n___________________________________________________________________________________\n";
}


string ColumSperator(int i)
{
    if (i < 10)
        return "   |";
    else
        return "  |";
}


void PrintMultiplicationTable()
{
    PrintTableHeader();

    for (int i = 1; i <= 10; i++)
    {
        cout << " " << i << ColumSperator(i) << "\t";
        
        for (int j = 1; j <= 10; j++)
        {
            cout << i * j << "\t";
        }
        cout << endl;
    }
	
}

]***********






	


(20)(20)(20)(20)(20)(20)(20)(20)(20)(20)(20)(20)
********** Calculate Operation Half Number And Others ********* :
[

	
float CalculateHalfNumber(int Num)
{
    return (float) Num / 2;  
}
	


void PrintResults(int Num)
{
    string Result = "Half of " + to_string(Num) + " is " + to_string(CalculateHalfNumber(Num));

    cout << endl << Result << endl;
}

	

int SumOf3Numbers(int Num1, int Num2, int Num3)
{
    return Num1 + Num2 + Num3;  
}

	


int SumOf3Marks(int Mark1, int Mark2, int Mark3)
{
    return Mark1 + Mark2 + Mark3;  
}

	

float CalculateAverage(int Mark1, int Mark2, int Mark3)
{
    return (float) SumOf3Marks(Mark1, Mark2, Mark3) / 3;
}

	

int MaxOf2Numbers(int Num1, int Num2)
{
    if (Num1 > Num2)
        return Num1;
    else
        return Num2;
}

	


int MaxOf3Numbers(int A, int B, int C)
{
    if (A > B) 
    {
        if (A > C)
            return A;  
        else
            return C;  
    }
    else 
    {
        if (B > C)
            return B; 
        else
            return C;  
    }
}

	

float CalculateRectangleArea(float A, float B)
{
    return A * B;  
}



float RectangleAreaBySideAndDiagonal(float A, float D)
{
    float Area = A * sqrt(pow(D, 2) - pow(A, 2));

    return Area;  
}


	

float TriangleArea(float A, float H)
{
    float Area = (A / 2) * H;

    return Area;  
}

	

float CircleArea(float R)
{
    const float PI = 3.141592653589793238;  

    float Area = pow(R, 2) * PI;

    return Area;  
}

	

float CircleAreaByDiameter(float D)
{
    const float PI = 3.141592653589793238; 

    float Area = (pow(D, 2) * PI) / 4;

    return Area; 
}

	

float CircleAreaInscribedInSquare(float A)
{
    const float PI = 3.141592653589793238;  

    float Area = (PI * pow(A, 2)) / 4;

    return Area;  
}

	

float CircleAreaByCircumference(float L)
{
    const float PI = 3.141592653589793238;  

    float Area = pow(L, 2) / (4 * PI);

    return Area;  
}

	

float CircleAreaByITriangle(float A, float B)
{
    const float PI = 3.141592653589793238;  

    float Area = PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));

    return Area;  
}

	

float CircleAreaByATriangle(float A, float B, float C)
{
    const float PI = 3.141592653589793238;  
    
    float P = (A + B + C) / 2;

    float T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));

    float Area = PI * pow(T, 2);

    return Area;  
}
	


int SumOddNumbersFrom1toN_UsingWhile(int N)
{
    int Counter = 0; 
    int Sum = 0; 

    cout << "Sum odd numbers using While Statement:\n";

    while (Counter < N)
    {
        Counter++;  
        
        if (CheckOddOrEven(Counter) == enOddOrEven::Odd)
        {
            Sum += Counter;
        }
    }
    return Sum;  
}
	


int SumOddNumbersFrom1toN_UsingDoWhile(int N)
{
    int Counter = 0;
    int Sum = 0;  

    cout << "Sum odd numbers using Do..While Statement:\n";

    do
    {
        Counter++; 

        if (CheckOddOrEven(Counter) == enOddOrEven::Odd)
        {
            Sum += Counter;
        }
    } while (Counter < N);  

    return Sum;  
}
	


int SumOddNumbersFrom1toN_UsingFor(int N)
{
    int Sum = 0;  

    cout << "Sum odd numbers using For Statement:\n";

    for (int Counter = 1; Counter <= N; Counter++)
    {
        if (CheckOddOrEven(Counter) == enOddOrEven::Odd)
        {
            Sum += Counter;
        }
    }

    return Sum;  
}
	


int Factorial(int N)
{
    int F = 1;  

    for (int Counter = N; Counter >= 1; Counter--)
    {
        F = F * Counter;  
    }

    return F;  
}

	

int PowerOfM(int Number, int M)
{
    if (M == 0)
    {
        return 1;
    }

    int P = 1;  

    for (int i = 1; i <= M; i++)
    {
        P = P * Number;  
    }

    return P;  
}


char GetGradeLetter(int Grade)
{
    if (Grade >= 90)
        return 'A';
    else if (Grade >= 80)
        return 'B';
    else if (Grade >= 70)
        return 'C';
    else if (Grade >= 60)
        return 'D';
    else if (Grade >= 50)
        return 'E';
    else
        return 'F';  
}
	
]***********









(21)(21)(21)(21)(21)(21)(21)(21)(21)(21)(21)(21)(21)(21)(21)(21)(21)(21)(21)
********** Print Range From 1 To N And From N To 1 _ Using Loops ********* :
[

void PrintRangeFrom1toN_UsingWhile(int N)
{
    int Counter = 0;  

    cout << "Range printed using While Statement:\n";

    while (Counter < N)
    {
        Counter++;  
        cout << Counter << endl;  
    }
}


void PrintRangeFrom1toN_UsingDoWhile(int N)
{
    int Counter = 0;  

    cout << "Range printed using Do..While Statement:\n";

    do
    {
        Counter++; 
        cout << Counter << endl;  
    } while (Counter < N);  
}


void PrintRangeFrom1toN_UsingFor(int N)
{
    cout << "Range printed using For Statement:\n";

    for (int Counter = 1; Counter <= N; Counter++)
    {
        cout << Counter << endl;  
    }
}

int main()
{
    int N = ReadNumber();

    PrintRangeFrom1toN_UsingWhile(N);
    PrintRangeFrom1toN_UsingDoWhile(N);
    PrintRangeFrom1toN_UsingFor(N);

    return 0;  
}

|
|
|
|
|
|
|
|

void PrintRangeFromNto1_UsingWhile(int N)
{
    int Counter = N + 1;  

    cout << "Range printed using While Statement:\n";

    while (Counter > 1)
    {
        Counter--;  
        cout << Counter << endl;  
    }
}


void PrintRangeFromNto1_UsingDoWhile(int N)
{
    int Counter = N + 1;  

	cout << "Range printed using Do..While Statement:\n";

    do
    {
        Counter--; 
        cout << Counter << endl;  

    } while (Counter > 1);  
}


void PrintRangeFromNto1_UsingFor(int N)
{
    cout << "Range printed using For Statement:\n";

    for (int Counter = N; Counter >= 1; Counter--)
    {
        cout << Counter << endl;  
    }
}

int main()
{
    int N = ReadNumber();

    PrintRangeFromNto1_UsingWhile(N);
    PrintRangeFromNto1_UsingDoWhile(N);
    PrintRangeFromNto1_UsingFor(N);

    return 0;  
}

]***********


































































































































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

