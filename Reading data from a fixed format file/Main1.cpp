#include <iostream>
#include <list>
#include "eventBO1.cpp"

int main() {
    std::ifstream file("text.txt");
    if (!file) {
        std::cerr << "Unable to open file text.txt";
        return 1;
    }

    EventBO eventBO;
    std::list<Event> events = eventBO.readEventlist(file);
    file.close();

    std::string organiser;
    std::cout << "Enter the organiser name: ";
    std::cin >> organiser;

    std::list<Event> result = eventBO.searchEventlist(events, organiser);

    std::cout << "For organiser " << organiser << ", the list of events are:\n";
    std::cout << "EVENT NAME              EVENT DETAIL                            EVENT TYPE\n";
    for (const auto& event : result) {
        printf("%-20s%-50s%-20s\n", event.getName().c_str(), event.getDetail().c_str(), event.getType().c_str());
    }

    return 0;
}