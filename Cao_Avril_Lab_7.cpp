// Avril Cao
// Lab 7
// November 3, 2024

#include <iostream>
#include <fstream>
#include <string>

// you use the header file #include <iostream> to use cout and endl
// you use the header file #include <fstream> to use ifstream and ofstream
// you use the header file #include <string> to use a string of characters

using namespace std;

// you use using namespace std; to avoid typing std:: before every cout and 
    
int main()

// you use int main() to start the program

{
    string player1;
    string player2;
    string player3;
    double p1score1;
    double p1score2;
    double p1score3;
    double p2score1;
    double p2score2;
    double p2score3;
    double p3score1;
    double p3score2;
    double p3score3;
    ifstream inFile;
    ofstream outFile;

// ifsteam and ofstream are used to declare the inFile and the outFile variables

    inFile.open("in_game_scores.txt");
    outFile.open("out_game_scores.txt");

// inFile.open and outFile.open are used to open the files inFile and outFile
// the inFile is named "in_game_scores.txt" and the outFile is named "out_game_scores.txt"

    inFile >> player1 >> p1score1 >> p1score2 >> p1score3;
    
// this inputs the values for the variables for player one in the inFile  
    
    outFile << "Player Name: " << player1 << " Score One: " << p1score1 << " Score Two: " << p1score2 << " Score Three: " << p1score3 << " Average Score: " << ((p1score1 * 2) + (p1score2 * 3) + (p1score3 * 5)) / 3 << endl;

// this outputs the values for the variables for player one in the outFile
    
if((((p1score1 * 2) + (p1score2 * 3) + (p1score3 * 5)) / 3) > 2000)
    outFile << "Congrats! You are an Expert!" << endl;
else if((((p1score1 * 2) + (p1score2 * 3) + (p1score3 * 5)) / 3) > 1800 && (((p1score1 * 2) + (p1score2 * 3) + (p1score3 * 5)) / 3) <= 2000)
    outFile << "Master - Good Job!" << endl;
else if((((p1score1 * 2) + (p1score2 * 3) + (p1score3 * 5)) / 3) > 1500 && (((p1score1 * 2) + (p1score2 * 3) + (p1score3 * 5)) / 3) <= 1800)
    outFile << "Master - Good Job!" << endl;
else if((((p1score1 * 2) + (p1score2 * 3) + (p1score3 * 5)) / 3) >= 1000 && (((p1score1 * 2) + (p1score2 * 3) + (p1score3 * 5)) / 3) <= 1500)
    outFile << "Master - Good Job!" << endl;
else {
    outFile << "Beginner - Keep Practicing!" << endl; }

// I used if else statements to output different statements in the outFile based on player one's average score
    
    inFile >> player2 >> p2score1 >> p2score2 >> p2score3;
    
// this inputs the values for the variables for player two in the inFile  
    
    outFile << "Player Name: " << player2 << " Score One: " << p2score1 << " Score Two: " << p2score2 << " Score Three: " << p2score3 << " Average Score: " << ((p2score1 * 2) + (p2score2 * 3) + (p2score3 * 5)) / 3 << endl;

// this outputs the values for the variables for player two in the outFile

if((((p2score1 * 2) + (p2score2 * 3) + (p2score3 * 5)) / 3) > 2000)
    outFile << "Congrats! You are an Expert!" << endl;
else if((((p2score1 * 2) + (p2score2 * 3) + (p2score3 * 5)) / 3) > 1800 && (((p2score1 * 2) + (p2score2 * 3) + (p2score3 * 5)) / 3) <= 2000)
    outFile << "Master - Good Job!" << endl;
else if((((p2score1 * 2) + (p2score2 * 3) + (p2score3 * 5)) / 3) > 1500 && (((p2score1 * 2) + (p2score2 * 3) + (p2score3 * 5)) / 3) <= 1800)
    outFile << "Master - Good Job!" << endl;
else if((((p2score1 * 2) + (p2score2 * 3) + (p2score3 * 5)) / 3) >= 1000 && (((p2score1 * 2) + (p2score2 * 3) + (p2score3 * 5)) / 3) <= 1500)
    outFile << "Master - Good Job!" << endl;
else {
    outFile << "Beginner - Keep Practicing!" << endl; }

// I used if else statements to output different statements in the outFile based on player two's average score
    
    inFile >> player3 >> p3score1 >> p3score2 >> p3score3;
    
// this inputs the values for the variables for player three in the inFile  
    
    outFile << "Player Name: " << player3 << " Score One: " << p3score1 << " Score Two: " << p3score2 << " Score Three: " << p3score3 << " Average Score: " << ((p3score1 * 2) + (p3score2 * 3) + (p3score3 * 5)) / 3 << endl;

// this outputs the values for the variables for player three in the outFile

if((((p3score1 * 2) + (p3score2 * 3) + (p3score3 * 5)) / 3) > 2000)
    outFile << "Congrats! You are an Expert!" << endl;
else if((((p3score1 * 2) + (p3score2 * 3) + (p3score3 * 5)) / 3) > 1800 && (((p3score1 * 2) + (p3score2 * 3) + (p3score3 * 5)) / 3) <= 2000)
    outFile << "Master - Good Job!" << endl;
else if((((p3score1 * 2) + (p3score2 * 3) + (p3score3 * 5)) / 3) > 1500 && (((p3score1 * 2) + (p3score2 * 3) + (p3score3 * 5)) / 3) <= 1800)
    outFile << "Master - Good Job!" << endl;
else if((((p3score1 * 2) + (p3score2 * 3) + (p3score3 * 5)) / 3) >= 1000 && (((p3score1 * 2) + (p3score2 * 3) + (p3score3 * 5)) / 3) <= 1500)
    outFile << "Master - Good Job!" << endl;
else {
    outFile << "Beginner - Keep Practicing!" << endl; }

// I used if else statements to output different statements in the outFile based on player three's average score
    
    inFile.close();
    outFile.close();

// inFile.close(); and outFile.close(); are used to close the files inFile and outFile
    
    return 0;

// return 0; ends the progra,
    
}

/* 
in_game_scores.txt:
PlayerA 276 186 136
PlayerB 749 354 689
PlayerC 468 462 265

out_game_scores.txt:
Player Name: PlayerA Score One: 276 Score Two: 186 Score Three: 136 Average Score: 596.667
Beginner - Keep Practicing!
Player Name: PlayerB Score One: 749 Score Two: 354 Score Three: 689 Average Score: 2001.67
Congrats! You are an Expert!
Player Name: PlayerC Score One: 468 Score Two: 462 Score Three: 265 Average Score: 1215.67
Master - Good Job!
*/