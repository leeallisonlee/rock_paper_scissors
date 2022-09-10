/**
 * test.cpp
 * Project UID 24b93ce4a6274610f4c3f3e31fe17277t
 *
 * Allison Lee
 * leealli
 *
 * EECS 183: Project 2
 * Winter 2022
 *
 * Testing functions for your rps.cpp implementation.
 * Holds the definitions of required testing functions.
 * We have stubbed all required functions for you.
 */

#include <iostream>
#include <string>

using namespace std;


//************************************************************************
// You should have implemented the following functions in rps.cpp
//************************************************************************
string getName(int playerNumber);
int getMenuChoice();
bool isMoveGood(char move);
char getMove(string playerName);
bool isRoundWinner(char move, char opponentMove);
void announceRoundWinner(string winnerName);
int doRound(string p1Name, string p2Name);
void announceWinner(string winnerName);
string doGame(string p1Name, string p2Name, int gameType);

//************************************************************************
// The following functions were already implemented for you in rps.cpp
//************************************************************************
void printInitialHeader();
void printMenu();
void printErrorMessage(int errorNumber);
void printCloser();

//************************************************************************
// Testing function declarations. Function definition is below main.
//************************************************************************
void test_isMoveGood();
void test_isRoundWinner();
void test_announceRoundWinner();
void test_announceWinner();


void startTests() {
    cout << "\nExecuting your test cases\n";

    test_isMoveGood();
    test_isRoundWinner();
    test_announceRoundWinner();
    test_announceWinner();

    return;
}

//************************************************************************
// Put all your test function implementations below here.
// We have stubbed all required functions for you
// to recieve full points when submitting test.cpp
// NOTE: We will only grade your tests for the following functions
//       * isMoveGood
//       * isRoundWinner
//       * announceRoundWinner()
//       * announceWinner()
//************************************************************************

void test_isMoveGood() {
    cout << "Now testing function isMoveGood()\n";
    cout << "'r': Expected: 1, Actual: " << isMoveGood('r') << endl;
    cout << "'q': Expected: 0, Actual: " << isMoveGood('q') << endl;
    cout << "'S': Expected: 1, Actual: " << isMoveGood('S') << endl;
    cout << "'Z': Expected: 0, Actual: " << isMoveGood('Z') << endl;
    cout << "' ': Expected: 0, Actual: " << isMoveGood(' ') << endl;

    return;
}

void test_isRoundWinner() {
    cout << "Now testing function isRoundWinner()\n";
    cout << "'r' 's': Expected: 1, Actual: " << isRoundWinner('r', 's') << endl;
    cout << "'r' 'S': Expected: 1, Actual: " << isRoundWinner('r', 'S') << endl;
    cout << "'R' 'p': Expected: 0, Actual: " << isRoundWinner('R', 'p') << endl;
    cout << "'r' 'p': Expected: 1, Actual: " << isRoundWinner('r', 'p') << endl;
    cout << "'S' 'P': Expected: 1, Actual: " << isRoundWinner('S', 'P') << endl;
    cout << "'r' 'R': Expected: 0, Actual: " << isRoundWinner('r', 'R') << endl;
    cout << "'s' 'p': Expected: 0, Actual: " << isRoundWinner('s', 'p') << endl;
    cout << "'P' 'S': Expected: 0, Actual: " << isRoundWinner('P', 'S') << endl;
    cout << "'p' 's': Expected: 0, Actual: " << isRoundWinner('p', 's') << endl;
    cout << "' ' 's': Expected: 0, Actual: " << isRoundWinner(' ', 's') << endl;
    cout << "'Q' 's': Expected: 0, Actual: " << isRoundWinner('Q', 's') <<endl;
    cout << "'P' 'q': Expected: 0, Actual: " << isRoundWinner('P', 'q') <<endl;
    cout << "'Q' ' ': Expected: 0, Actual: " << isRoundWinner('Q', ' ') <<endl;
    cout << "' ' ' ': Expected: 0, Actual: " << isRoundWinner(' ', ' ') <<endl;
    cout << "'X' 'y': Expected: 0, Actual: " << isRoundWinner('X', 'y') <<endl;
    cout << "'t' 'V': Expected: 0, Actual: " << isRoundWinner('t', 'V') <<endl;

    return;
}

void test_announceRoundWinner() {
    cout << "Now testing function announceRoundWinner()\n";
    cout << "'Patrick': Expected: Patrick wins the round!, Actual: ";
    announceRoundWinner("Patrick");
    cout << endl;
    cout << "' Tom': Expected: Tom wins the round!, Actual: ";
    announceRoundWinner(" Tom");
    cout << endl;
    cout << "'Justin Bieber': Expected: Justin Bieber wins the round!, Actual: ";
    announceRoundWinner("Justin Bieber");
    cout << endl;
    cout << "'': Expected: This round is a draw!, Actual: ";
    announceRoundWinner(" ");
    cout << endl;
    cout << "'': Expected: This round is a draw!, Actual: ";
    announceRoundWinner("");
    cout << endl;

    return;
    
}

void test_announceWinner() {
    cout << "Now testing function announceWinner()\n";
    cout << "Patrick: Expected: Congratulations Patrick! You won EECS 183 Rock-Paper-Scissors!, Actual: ";
    announceWinner("Patrick");
    cout << endl;
    cout << "' ': Expected: No winner!, Actual: ";
    announceWinner(" ");
    cout << endl;
    
}
