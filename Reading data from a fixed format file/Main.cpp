// #include<iostream>
// #include<string>
// #include<stdio.h>
// #include<fstream>
// #include<list>
// #include<iterator>
// #include"EventBO.cpp"
// #include<sstream>
// using namespace std;
// int main ()
// {
//           //fill your code here.
//           return 0;
// }
#include <iostream>
#include <fstream>
#include <list>
#include "EventBO.cpp"

using namespace std;

int main() {
    ifstream file("text.txt");
    if (!file) {
        cerr << "Unable to open file text.txt";
        return 1;
    }

    EventBO eventBO;
    list<Event> events = eventBO.readEventlist(file);
    file.close();

    cout << "Enter the organiser name:" << endl;
    string organiser;
    getline(cin, organiser);

    list<Event> result = eventBO.searchEventlist(events, organiser);

    cout << "For organiser " << organiser << ", the list of events are:" << endl;
    cout << "EVENT NAME           EVENT DETAIL                            EVENT TYPE" << endl;
    for (Event event : result) {
        printf("%-20s%-50s%-20s\n", event.getName().c_str(), event.getDetail().c_str(), event.getType().c_str());
    }

    return 0;
}