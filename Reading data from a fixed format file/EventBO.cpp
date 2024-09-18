// #include<iostream>
// #include<string>
// #include<stdio.h>
// #include<fstream>
// #include<list>
// #include<iterator>
// #include"Event.cpp"
// #include<sstream>
// using namespace std;
// class EventBO
// {
//         //fill your code here
//          string* splitString(string str)//to read comma separated values
//      {
//         string* arr = new string[25];
//         int i=0;
//         string delimiter = ",";
//         size_t pos = 0;
//         string token;
//         str+=",";
//         while ((pos = str.find(delimiter)) != string::npos) 
//         {
//                 token = str.substr(0, pos);
//                 arr[i]=token;
//                 str.erase(0, pos + delimiter.length());
//                 i++;
//         }
//             return arr; 
//      }
// };
#include <list>
#include <fstream>
#include <sstream>
#include "Event.cpp"

using namespace std;

class EventBO {
public:
    list<Event> readEventlist(ifstream& file) {
        list<Event> events;
        string line;
        while (getline(file, line)) {
            stringstream ss(line);
            string name, detail, type, organiser;
            getline(ss, name, ',');
            getline(ss, detail, ',');
            getline(ss, type, ',');
            getline(ss, organiser, ',');
            events.push_back(Event(name, detail, type, organiser));
        }
        return events;
    }

    list<Event> searchEventlist(list<Event> events, string organiser) {
        list<Event> result;
        for (Event event : events) {
            if (event.getOrganiser() == organiser) {
                result.push_back(event);
            }
        }
        return result;
    }
};