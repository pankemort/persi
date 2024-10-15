#include <iostream>
#include <string>
#include "Player.h"
using namespace std;

class Batsman : public Player {
private:
    int noOfBallsFaced;
    int totalRunsScored;

public:
    int getNoOfBallsFaced();
    void setNoOfBallsFaced(int noOfBallsFaced);
    int getTotalRunsScored();
    void setTotalRunsScored(int totalRunsScored);
    void displayBattingStrikeRate(Batsman b);
};