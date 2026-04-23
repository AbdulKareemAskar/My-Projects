#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

enum enGameOption {Stone, Paper, Scissors};
enum enWinnerNames {PlayerOne,Computer,NoWinner};

struct stGameData
{
	string arrGameOption[3],arrWinnerNames[3];
};

struct stGameResult
{
	int GameRounds,PlayerOneWinTimes,ComputerWinTimes,DrawTimes;
	string FinalWinner;
};

int GetRandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

stGameData GetGameData()
{
    stGameData GameData;
    
    GameData.arrGameOption [0] = "Stone";
    GameData.arrGameOption [1] = "Paper";
    GameData.arrGameOption [2] = "Scissors";
    GameData.arrWinnerNames [0] = "PlayerOne";
    GameData.arrWinnerNames [1] = "Computer";
    GameData.arrWinnerNames [2] = "NoWinner";

	return GameData;
}

stGameResult GetGameResult()
{
    stGameResult GameResult;
    
    GameResult.GameRounds = 0;
	 GameResult.PlayerOneWinTimes = 0;
	 GameResult.ComputerWinTimes = 0;
	 GameResult.DrawTimes = 0;
	 GameResult.FinalWinner = "Unknown";
    
	return GameResult;
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

enGameOption ReadPlayerChoice(stGameResult GameResult)
{
	int Number = 0;

	cout << "\n\nRounds [" << GameResult.GameRounds << "] begins :\n\n";

   do
   {

	cout << "Your Choice : [1]:Stone, [2]:Paper, [3]:Scissors ? ";
	cin >> Number;
   
   } while(Number <= 0 || Number > 3);

	return enGameOption(Number - 1);
}

string GetChoiceName(enGameOption PlayerChoice,const stGameData& GameData)
{
	switch(PlayerChoice)
	{
	case enGameOption::Stone:
		return GameData.arrGameOption[enGameOption::Stone];

	case enGameOption::Paper:
		return GameData.arrGameOption[enGameOption::Paper];

	case enGameOption::Scissors:
		return GameData.arrGameOption[enGameOption::Scissors];

	default:
		return "Unknown";
	}
}

enGameOption GetRandomComputerChoice()
{
      return enGameOption(GetRandomNumber(0,2));
}

string GetComputerChoice(const enGameOption& enComputerChoice,const stGameData& GameData )
{
	   string strComputerChoice = GetChoiceName(enComputerChoice,GameData);
	
		return strComputerChoice;
}

string GetRoundWinner(enGameOption PlayerChoice,enGameOption ComputerChoice,const stGameData& GameData )
{
    if (PlayerChoice == ComputerChoice)
    {
        return GameData.arrWinnerNames[enWinnerNames::NoWinner];
    }

    
   else if ((PlayerChoice == enGameOption::Stone && ComputerChoice == enGameOption::Scissors) ||
        (PlayerChoice == enGameOption::Paper && ComputerChoice == enGameOption::Stone) ||
        (PlayerChoice == enGameOption::Scissors && ComputerChoice == enGameOption::Paper))
    {
        return GameData.arrWinnerNames[enWinnerNames::PlayerOne];
    }

    return GameData.arrWinnerNames[enWinnerNames::Computer];
}

void PrintRoundSummary(const stGameResult& GameResult,string PlayerChoice,string ComputerChoice,string WinnerName)
{
	cout << "\n\n____________  Round [" << GameResult.GameRounds << "] ____________\n\n";
	cout << "Player One Choice : " << PlayerChoice << endl;
	cout << "Computer Choice   : " << ComputerChoice << endl;
	cout << "Round Winner      : " << WinnerName << endl;
	cout << "____________________________________\n\n";
}

void SetScreenColor(string WinnerName,const stGameData& GameData )
{

	if(WinnerName == GameData.arrWinnerNames[enWinnerNames::PlayerOne])
	{
		system("color 2F");

	}

	else if(WinnerName == GameData.arrWinnerNames[enWinnerNames::Computer])
	{
		system("color 4F");
		cout << "\a";

	}

	else if(WinnerName == GameData.arrWinnerNames[enWinnerNames::NoWinner])
	{
		system("color 6F");

	}

	else
	{
		system("color 0F");

	}
}

void UpdateGameResult(string WinnerName,const stGameData& GameData ,stGameResult& GameResult)
{

	if(WinnerName == GameData.arrWinnerNames[enWinnerNames::PlayerOne])
		GameResult.PlayerOneWinTimes++;

	else if(WinnerName == GameData.arrWinnerNames[enWinnerNames::Computer])
		GameResult.ComputerWinTimes++;

	else
		GameResult.DrawTimes++;
}

void PlayOneRound(stGameResult& GameResult,const stGameData& GameData )
{
	enGameOption enPlayerChoice = ReadPlayerChoice(GameResult);
	string PlayerChoice = GetChoiceName(enPlayerChoice,GameData);
   enGameOption enComputerChoice = GetRandomComputerChoice();
	string ComputerChoice = GetComputerChoice(enComputerChoice,GameData);
	string WinnerName = GetRoundWinner(enPlayerChoice,enComputerChoice,GameData);
	PrintRoundSummary(GameResult,PlayerChoice,ComputerChoice,WinnerName);
	SetScreenColor(WinnerName,GameData);
	UpdateGameResult(WinnerName,GameData,GameResult);
}

void PlayGame(int Rounds,stGameResult& GameResult,const stGameData& GameData )
{
	do
	{
      GameResult.GameRounds++;
		Rounds--;

		PlayOneRound(GameResult,GameData);

	} while(Rounds > 0);

}

void GetFinalWinner(stGameResult& GameResult,const stGameData& GameData )
{
	if(GameResult.PlayerOneWinTimes > GameResult.ComputerWinTimes)
		GameResult.FinalWinner = GameData.arrWinnerNames[enWinnerNames::PlayerOne];

	else if(GameResult.PlayerOneWinTimes < GameResult.ComputerWinTimes)
		GameResult.FinalWinner = GameData.arrWinnerNames[enWinnerNames::Computer];

	else
		GameResult.FinalWinner = GameData.arrWinnerNames[enWinnerNames::NoWinner];
}

void PrintFinalGameSummary(stGameResult& GameResult,const stGameData& GameData )
{
	GetFinalWinner(GameResult,GameData);

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

void ClearScreen()
{
    stGameResult GameResult = GetGameResult();
	
    system("cls");
    system("color 0F");
    GameResult = {};
}

void StartGame()
{
    
    stGameData GameData = GetGameData();
    stGameResult GameResult = GetGameResult();
	 char PlayAgain = 'N';

	do
	{
		ClearScreen();

		int GameRounds = ReadGameRounds();
		PlayGame(GameRounds,GameResult,GameData);
		PrintFinalGameSummary(GameResult,GameData);

		cout << "Do you want to play again ? Y/N ? ";
      cin.ignore(100, '\n');
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
