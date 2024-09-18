#include <list>
#include <fstream>
#include <sstream>
#include "event1.cpp"

class EventBO {
public:
    std::list<Event> readEventlist(std::ifstream& file) {
        std::list<Event> events;
        std::string line, name, detail, type, organiser;

        while (std::getline(file, line)) {
            std::stringstream ss(line);
            std::getline(ss, name, ',');
            std::getline(ss, detail, ',');
            std::getline(ss, type, ',');
            std::getline(ss, organiser, ',');

            Event event(name, detail, type, organiser);
            events.push_back(event);
        }

        return events;
    }

    std::list<Event> searchEventlist(std::list<Event> list2, std::string organiser) {
        std::list<Event> result;
        for (const auto& event : list2) {
            if (event.getOrganiser() == organiser) {
                result.push_back(event);
            }
        }
        return result;
    }
};