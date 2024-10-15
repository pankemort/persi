#include "Channel.h"
#include<iomanip>
#include "Package.h"


Channel::Channel()
{
}

Channel::Channel(int id, string name, string language, string type, bool hd_quality)
{
    this->id = id;
	this->name = name;
	this->language = language;
	this->type = type;
	this->hd_quality = hd_quality;
}

int Channel::getId()
{
	return id;
}

void Channel::setId(int id)
{
	this->id = id;
}

string Channel::getName()
{
	return name;
}

void Channel::setName(string name)
{
	this->name = name;
}

string Channel::getLanguage()
{
	return language;
}

void Channel::setLanguage(string language)
{
	this->language = language;
}

string Channel::getType()
{
	return type;
}

void Channel::setType(string type)
{
	this->type = type;
}

bool Channel::getHd_quality()
{
	return hd_quality;
}

void Channel::setHd_quality(bool hd_quality)
{
	this->hd_quality = hd_quality;
}

void Channel::displayChannelDetails() {
    std::cout << this->getName()<<endl;
}

void Channel::deleteChannelBasedOnHD(list<Channel> channelList, bool hd)
{
	//Fill your code here
	bool allHD = true;
    for (auto it = channelList.begin(); it != channelList.end();) {
        if (it->getHd_quality() != hd) {
            cout << it->getName() << endl;
            it = channelList.erase(it);
            allHD = false;
        } else {
            ++it;
        }
    }
    if (allHD) {
        cout << "All channels in this package are in hd quality" << endl;
    }
}
