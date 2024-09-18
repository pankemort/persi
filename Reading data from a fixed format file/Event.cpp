// #include<iostream>
// #include<string>
// #include<stdio.h>
// #include<fstream>
// #include<list>
// #include<iterator>
// #include<sstream>
// using namespace std;
// class Event
// {
//         //fill your code here
// };
#include <iostream>
#include <string>
#include <list>
#include <fstream>
#include <sstream>

using namespace std;

class Event {
private:
    string name;
    string detail;
    string type;
    string organiser;

public:
    Event() {}

    Event(string name, string detail, string type, string organiser) {
        this->name = name;
        this->detail = detail;
        this->type = type;
        this->organiser = organiser;
    }

    string getName() { return name; }
    void setName(string name) { this->name = name; }

    string getDetail() { return detail; }
    void setDetail(string detail) { this->detail = detail; }

    string getType() { return type; }
    void setType(string type) { this->type = type; }

    string getOrganiser() { return organiser; }
    void setOrganiser(string organiser) { this->organiser = organiser; }
};