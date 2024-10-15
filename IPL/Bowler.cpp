#include "Bowler.h"
#include <iostream>
using namespace std;

int Bowler::getNoOfOversBowled()
{
    return noOfOversBowled;
}

void Bowler::setNoOfOversBowled(int noOfOversBowled)
{
    this->noOfOversBowled = noOfOversBowled;
}

int Bowler::getNoOfWicketsScored()
{
    return noOfWicketsScored;
}

void Bowler::setNoOfWicketsScored(int noOfWicketsScored)
{
    this->noOfWicketsScored = noOfWicketsScored;
}

void Bowler::displayBowlingStrikeRate(Bowler b)
{
    int bowledBalls = b.getNoOfOversBowled() * 6; // Assuming 6 balls per over
    if (b.getNoOfWicketsScored() == 0) {
        cout << "Bowler Strike rate: Infinity (No wickets taken)" << endl;
    } else {
        float strikeRate = static_cast<float>(bowledBalls) / b.getNoOfWicketsScored();
        cout << "Bowler Strike rate: " << strikeRate << endl;
    }
}
