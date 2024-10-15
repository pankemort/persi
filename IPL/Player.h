#include <iostream>
#include <string>
using namespace std;

class Player {
private:
    string country;
    string playerName;

public:
    string getCountry();

    void setCountry(string country);

    string getPlayerName();

    void setPlayerName(string playerName) ;
};