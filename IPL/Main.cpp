#include <iostream>
#include<string>
#include<stdio.h>
#include"Batsman.h"
#include"Bowler.h"
using namespace std;

int main()
{
   //Fill the code here
 int choice;
    cout << "Enter if the player is a Batsman or Bowler\n1.Batsman\n2.Bowler\n";
    cin >> choice;

    if (choice == 1) {
        Batsman batsman;
        string name, country;
        int ballsFaced, runsScored;

        cout << "Enter the Name :\n";
        cin >> name;
        cout << "Enter the country :\n";
        cin >> country;
        cout << "Enter the no of Balls Faced :\n";
        cin >> ballsFaced;
        cout << "Enter the total number of Runs Scored :\n";
        cin >> runsScored;

        batsman.setPlayerName(name);
        batsman.setCountry(country);
        batsman.setNoOfBallsFaced(ballsFaced);
        batsman.setTotalRunsScored(runsScored);

        batsman.displayBattingStrikeRate(batsman);

    } else if (choice == 2) {
        Bowler bowler;
        string name, country;
        int oversBowled, wicketsScored;

        cout << "Enter the Name :\n";
        cin >> name;
        cout << "Enter the country :\n";
        cin >> country;
        cout << "Enter the no Of Overs Bowled :\n";
        cin >> oversBowled;
        cout << "Enter the total no Of Wickets Scored :\n";
        cin >> wicketsScored;

        bowler.setPlayerName(name);
        bowler.setCountry(country);
        bowler.setNoOfOversBowled(oversBowled);
        bowler.setNoOfWicketsScored(wicketsScored);

        bowler.displayBowlingStrikeRate(bowler);
    } else {
        cout << "Invalid choice" << endl;
    }
return 0;
    
}