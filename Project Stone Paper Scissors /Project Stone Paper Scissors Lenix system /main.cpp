#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

#ifdef _WIN32
    #define CLEAR "cls"
#else
    #define CLEAR "clear"
    #define RESET   "\033[0m"
    #define RED     "\033[31m"
    #define GREEN   "\033[32m"
    #define YELLOW  "\033[33m"
    #define BLUE    "\033[34m"
#endif

void ResetScreen() {
    system(CLEAR);
}

void SetColor(string color) {
#ifndef _WIN32
    if (color == "red") cout << RED;
    else if (color == "green") cout << GREEN;
    else if (color == "yellow") cout << YELLOW;
    else if (color == "blue") cout << BLUE;
    else cout << RESET;
#else
    if (color == "red") system("color 4F");
    else if (color == "green") system("color 2F");
    else if (color == "yellow") system("color 6F");
    else system("color 0F");
#endif
}

enum enGameChoice { Stone = 1, Paper = 2, Scissors = 3 };
enum enWinner { Player1 = 1, Computer = 2, Draw = 3 };

struct stRoundInfo {
    short RoundNumber = 0;
    enGameChoice Player1Choice;
    enGameChoice ComputerChoice;
    enWinner Winner;
    string WinnerName = "";
};

struct stGameResults {
    short GameRounds = 0;
    short Player1WinTimes = 0;
    short Computer2WinTimes = 0;
    short DrawTimes = 0;
    enWinner GameWinner;
    string WinnerName = "";
};

int RandomNumber(int From, int To) {
    return rand() % (To - From + 1) + From;
}

string ChoiceName(enGameChoice Choice) {
    string arrChoiceName[3] = { "Stone", "Paper", "Scissors" };
    return arrChoiceName[Choice - 1];
}

enWinner WhoWonTheRound(stRoundInfo RoundInfo) {
    if (RoundInfo.Player1Choice == RoundInfo.ComputerChoice) {
        return enWinner::Draw;
    }
    switch (RoundInfo.Player1Choice) {
    case enGameChoice::Stone:
        if (RoundInfo.ComputerChoice == enGameChoice::Paper) return enWinner::Computer;
        break;
    case enGameChoice::Paper:
        if (RoundInfo.ComputerChoice == enGameChoice::Scissors) return enWinner::Computer;
        break;
    case enGameChoice::Scissors:
        if (RoundInfo.ComputerChoice == enGameChoice::Stone) return enWinner::Computer;
        break;
    }
    return enWinner::Player1;
}

string WinnerName(enWinner Winner) {
    string arrWinnerName[3] = { "Player1", "Computer", "No Winner" };
    return arrWinnerName[Winner - 1];
}

enGameChoice ReadPlayer1Choice() {
    short Choice = 1;
    do {
        cout << "\nYour Choice: [1]:Stone, [2]:Paper, [3]:Scissors ? ";
        cin >> Choice;
    } while (Choice < 1 || Choice > 3);
    return (enGameChoice)Choice;
}

enGameChoice GetComputerChoice() {
    return (enGameChoice)RandomNumber(1, 3);
}

stRoundInfo PlayRound(short RoundNumber) {
    stRoundInfo RoundInfo;
    RoundInfo.RoundNumber = RoundNumber;
    RoundInfo.Player1Choice = ReadPlayer1Choice();
    RoundInfo.ComputerChoice = GetComputerChoice();
    RoundInfo.Winner = WhoWonTheRound(RoundInfo);
    RoundInfo.WinnerName = WinnerName(RoundInfo.Winner);

    if (RoundInfo.Winner == enWinner::Player1) {
        SetColor("green");
//        cout << "\a"; 
    }
    else if (RoundInfo.Winner == enWinner::Computer) {
        SetColor("red");
        cout << "\a";
    }
    else {
        SetColor("yellow");
    }

    cout << "\n____________Round [" << RoundNumber << "] ____________\n";
    cout << "Player1 Choice: " << ChoiceName(RoundInfo.Player1Choice) << endl;
    cout << "Computer Choice: " << ChoiceName(RoundInfo.ComputerChoice) << endl;
    cout << "Round Winner   : [" << RoundInfo.WinnerName << "]" << endl;
    cout << "__________________________________\n" << endl;
    
    SetColor("reset");
    return RoundInfo;
}

enWinner WhoWonTheGame(short Player1WinTimes, short ComputerWinTimes) {
    if (Player1WinTimes > ComputerWinTimes) return enWinner::Player1;
    else if (ComputerWinTimes > Player1WinTimes) return enWinner::Computer;
    else return enWinner::Draw;
}

stGameResults FillGameResults(int GameRounds, short Player1WinTimes, short ComputerWinTimes, short DrawTimes) {
    stGameResults GameResults;
    GameResults.GameRounds = GameRounds;
    GameResults.Player1WinTimes = Player1WinTimes;
    GameResults.Computer2WinTimes = ComputerWinTimes;
    GameResults.DrawTimes = DrawTimes;
    GameResults.GameWinner = WhoWonTheGame(Player1WinTimes, ComputerWinTimes);
    GameResults.WinnerName = WinnerName(GameResults.GameWinner);
    return GameResults;
}

short ReadHowManyRounds() {
    short GameRounds = 1;
    do {
        cout << "How Many Rounds 1 to 10? \n";
        cin >> GameRounds;
    } while (GameRounds < 1 || GameRounds > 10);
    return GameRounds;
}

stGameResults PlayGame(int HowManyRounds) {
    stRoundInfo RoundInfo;
    short Player1WinTimes = 0, ComputerWinTimes = 0, DrawTimes = 0;
    for (short GameRound = 1; GameRound <= HowManyRounds; GameRound++) {
        cout << "\nRound [" << GameRound << "] begins:\n";
        RoundInfo = PlayRound(GameRound);
        if (RoundInfo.Winner == enWinner::Player1) Player1WinTimes++;
        else if (RoundInfo.Winner == enWinner::Computer) ComputerWinTimes++;
        else DrawTimes++;
    }
    return FillGameResults(HowManyRounds, Player1WinTimes, ComputerWinTimes, DrawTimes);
}

void ShowGameOverScreen() {
    cout << "\n\n\t\t__________________________________________________________\n";
    cout << "\t\t\t\t+++ G a m e  O v e r +++\n";
    cout << "\t\t__________________________________________________________\n\n";
}

void ShowFinalGameResults(stGameResults GameResults) {
    cout << "\t\t___________________ [Game Results] _______________________\n";
    cout << "\t\tGame Rounds        : " << GameResults.GameRounds << endl;
    cout << "\t\tPlayer1 won times  : " << GameResults.Player1WinTimes << endl;
    cout << "\t\tComputer won times : " << GameResults.Computer2WinTimes << endl;
    cout << "\t\tDraw times         : " << GameResults.DrawTimes << endl;
    cout << "\t\tFinal Winner       : " << GameResults.WinnerName << endl;
    cout << "\t\t__________________________________________________________\n";
    
    if (GameResults.GameWinner == enWinner::Player1) {
        SetColor("green");
        cout << "\a\a\a"; 
    }
    else if (GameResults.GameWinner == enWinner::Computer) {
        SetColor("red");
    }
}

void StartGame() {
    char PlayAgain = 'Y';
    do {
        ResetScreen();
        SetColor("reset");
        stGameResults GameResults = PlayGame(ReadHowManyRounds());
        ShowGameOverScreen();
        ShowFinalGameResults(GameResults);
        SetColor("reset");
        cout << endl << "\t\tDo you want to play again? Y/N? ";
        cin >> PlayAgain;
    } while (PlayAgain == 'Y' || PlayAgain == 'y');
}

int main() {
    srand((unsigned)time(NULL));
    StartGame();
    return 0;
}
