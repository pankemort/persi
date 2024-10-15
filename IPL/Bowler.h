#include <iostream>
#include <iomanip>
#include "Batsman.h"
using namespace std;
class Bowler :public Batsman {
private:
    int noOfOversBowled;
    int noOfWicketsScored;


public:
    int getNoOfOversBowled();

    void setNoOfOversBowled(int noOfOversBowled);
    int getNoOfWicketsScored();

    void setNoOfWicketsScored(int noOfWicketsScored);
   
   
    void displayBowlingStrikeRate(Bowler b);
    
};