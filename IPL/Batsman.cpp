#include "Batsman.h"
#include <iomanip>
#include <iostream>

int Batsman::getNoOfBallsFaced()
{
    return noOfBallsFaced;
}

void Batsman::setNoOfBallsFaced(int noOfBallsFaced)
{
    this->noOfBallsFaced = noOfBallsFaced;
}

int Batsman::getTotalRunsScored()
{
    return totalRunsScored;
}

void Batsman::setTotalRunsScored(int totalRunsScored)
{
    this->totalRunsScored = totalRunsScored;
}

void Batsman::displayBattingStrikeRate(Batsman b)
{
    if (b.getNoOfBallsFaced() == 0) {
        std::cout << "Batsman Strike rate: Infinity (No balls faced)" << std::endl;
    } else {
        float strikeRate = static_cast<float>(b.getTotalRunsScored()) * 100 / b.getNoOfBallsFaced();
        std::cout << "Batsman Strike rate: " << std::fixed << std::setprecision(2) << strikeRate << std::endl;
    }
}
