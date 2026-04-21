#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

enum enGameOption {Stone, Paper, Scissors};
string arrGameOption [3] = {"Stone","Paper","Scissors"};
enum enWinner {PlayerOne,Computer,NoWinner};
string arrWinner [3] = {"PlayerOne","Computer","NoWinner"};

struct stGameResult
{
	int GameRounds = 0;
	int PlayerOneWinTimes = 0;
	int ComputerWinTimes = 0;
	int DrawTimes = 0;
	string FinalWinner = "Unknown";
};

stGameResult GameResult;

int GetRandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

int ReadGameRounds()
{
	int Rounds = 0;

	do
	{
		cout << "How Many Rounds 1 To 10 ?\n";
		cin >> Rounds;

	} while (Rounds <= 0);

	return Rounds;
}

enGameOption ReadPlayerChoice()
{
	int Number = 0;
	GameResult.GameRounds++;

	cout << "\n\nRounds [" << GameResult.GameRounds << "] begins :\n\n";
	cout << "Your Choice : [1]:Stone, [2]:Paper, [3]:Scissors ? ";
	cin >> Number;

	return enGameOption(Number - 1);
}

string GetChoiceName(enGameOption PlayerChoice)
{
	switch(PlayerChoice)
	{
	case enGameOption::Stone:
		return arrGameOption[enGameOption::Stone];

	case enGameOption::Paper:
		return arrGameOption[enGameOption::Paper];

	case enGameOption::Scissors:
		return arrGameOption[enGameOption::Scissors];

	default:
		return "Unknown";
	}
}

string GetComputerChoice()
{
	enGameOption ComputerChoice = enGameOption(GetRandomNumber(0,2));

	switch(ComputerChoice)
	{
	case enGameOption::Stone:
		return arrGameOption[enGameOption::Stone];

	case enGameOption::Paper:
		return arrGameOption[enGameOption::Paper];

	case enGameOption::Scissors:
		return arrGameOption[enGameOption::Scissors];

	default:
		return "Unknown";
	}
}

string GetRoundWinner(string PlayerChoice,string ComputerChoice)
{
	if(PlayerChoice == ComputerChoice)
		return arrWinner[enWinner::NoWinner];

	else if((PlayerChoice == arrGameOption[enGameOption::Stone] && ComputerChoice == arrGameOption[enGameOption::Scissors]) ||
	        (PlayerChoice == arrGameOption[enGameOption::Scissors] && ComputerChoice == arrGameOption[enGameOption::Paper]) ||
	        (PlayerChoice == arrGameOption[enGameOption::Paper] && ComputerChoice == arrGameOption[enGameOption::Stone]))
		return arrWinner[enWinner::PlayerOne];

	else
		return arrWinner[enWinner::Computer];
}

void PrintRoundSummary(string PlayerChoice,string ComputerChoice, string WinnerName)
{
	cout << "\n\n____________  Round [" << GameResult.GameRounds << "] ____________\n\n";
	cout << "Player One Choice : " << PlayerChoice << endl;
	cout << "Computer Choice   : " << ComputerChoice << endl;
	cout << "Round Winner      : " << WinnerName << endl;
	cout << "____________________________________\n\n";
}

void SetScreenColor(string WinnerName)
{

	if(WinnerName == arrWinner[enWinner::PlayerOne])
	{
		system("color 2F");

	}

	else if(WinnerName == arrWinner[enWinner::Computer])
	{
		system("color 4F");
		cout << "\a";

	}

	else if(WinnerName == arrWinner[enWinner::NoWinner])
	{
		system("color 6F");

	}

	else
	{
		system("color 0F");

	}
}

void UpdateGameResult(string WinnerName)
{

	if(WinnerName == arrWinner[enWinner::PlayerOne])
		GameResult.PlayerOneWinTimes++;

	else if(WinnerName == arrWinner[enWinner::Computer])
		GameResult.ComputerWinTimes++;

	else
		GameResult.DrawTimes++;
}

void PlayOneRound()
{
	enGameOption enPlayerChoice = ReadPlayerChoice();
	string PlayerChoice = GetChoiceName(enPlayerChoice);
	string ComputerChoice = GetComputerChoice();
	string WinnerName = GetRoundWinner(PlayerChoice,ComputerChoice);
	PrintRoundSummary(PlayerChoice,ComputerChoice,WinnerName);
	SetScreenColor(WinnerName);
	UpdateGameResult(WinnerName);
}

void PlayGame(int Rounds)
{
	do
	{
		Rounds--;

		PlayOneRound();

	} while(Rounds > 0);

}

void GetFinalWinner()
{
	if(GameResult.PlayerOneWinTimes > GameResult.ComputerWinTimes)
		GameResult.FinalWinner = arrWinner[enWinner::PlayerOne];

	else if(GameResult.PlayerOneWinTimes < GameResult.ComputerWinTimes)
		GameResult.FinalWinner = arrWinner[enWinner::Computer];

	else
		GameResult.FinalWinner = arrWinner[enWinner::NoWinner];
}

void PrintFinalGameSummary()
{
	GetFinalWinner();

	cout << "\n\n__________________________________________________________________\n\n";
	cout << "                       +++ G a m e  O v e r +++                       ";
	cout << "\n__________________________________________________________________\n\n";
	cout << "________________________ [Game Results ] _________________________\n\n";
	cout << "GameRounds           : " << GameResult.GameRounds << endl;
	cout << "Player One Won Times : " << GameResult.PlayerOneWinTimes << endl;
	cout << "Computer Won Times   : " << GameResult.ComputerWinTimes << endl;
	cout << "Draw Times           : " << GameResult.DrawTimes << endl;
	cout << "Final Winner         : " << GameResult.FinalWinner << endl;
	cout << "__________________________________________________________________\n\n";

}

void StartGame()
{
	char PlayAgain = 'N';

	do
	{
		system("cls");
		system("color 0F");
		GameResult = {};

		int GameRounds = ReadGameRounds();
		PlayGame(GameRounds);
		PrintFinalGameSummary();

		cout << "Do you want to play again ? Y/N ? ";
		cin >> PlayAgain;
		cout << "\n\n";

	} while(PlayAgain == 'Y' || PlayAgain == 'y');

}

int main()
{
	srand((unsigned)time(NULL));

	StartGame();

	return 0;
}
