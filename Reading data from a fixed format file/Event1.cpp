#include <iostream>
#include <string>

class Event {
private:
    std::string name;
    std::string detail;
    std::string type;
    std::string organiser;

public:
    Event() {}
    Event(std::string name, std::string detail, std::string type, std::string organiser)
        : name(name), detail(detail), type(type), organiser(organiser) {}

    std::string getName() const { return name; }
    std::string getDetail() const { return detail; }
    std::string getType() const { return type; }
    std::string getOrganiser() const { return organiser; }

    void setName(std::string name) { this->name = name; }
    void setDetail(std::string detail) { this->detail = detail; }
    void setType(std::string type) { this->type = type; }
    void setOrganiser(std::string organiser) { this->organiser = organiser; }
};