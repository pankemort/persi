#pragma once
#include<string>
#include<iostream>
#include<vector>
#include<map>
#include <list>

using namespace std;
class Channel {
private:
    int id;
    string name;
    string username;
    string language;
    string type;
    bool  hd_quality;
public:
    Channel();
    Channel(int id, string name, string language, string type, bool hd_quality);  
    int getId();
    void setId(int id);
    string getName();
    void setName(string name);
    string getLanguage();
    void setLanguage(string language);
    string getType();
    void setType(string type);
    bool getHd_quality();
    void setHd_quality(bool hd_quality);  
    void displayChannelDetails() ;
    void deleteChannelBasedOnHD(list<Channel>channelList, bool hd);
};