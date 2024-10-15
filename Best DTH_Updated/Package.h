#pragma once
#include<string>
#include<vector>
#include<map>
#include "Channel.h"
#include <map>
#include <list>
#include <iostream>

using namespace std;
class Package
{
private:
    string name;
	string reference_code;
	string type;
	double cost;
	int validity;
	string dth;
	list<Channel>channelList;

public:

	Package();
	Package(string name, string reference_code, string type, double cost, int validity, string dth, list<Channel>channelList);
	string getName();
	void setName(string name);
	string getReference_code();
	void setReference_code(string reference_code);
	string getType();
	void setType(string type);
	double getCost();
	void setCost(double cost);
	int getValidity();
	void setValidity(int validity);
	string getDth();
	void setDth(string dth);
	list<Channel> getChannelList();
	void setChannelList(list<Channel> channelList);
	void addPackage(map<string, Package>& packageMap, const string& packageDetails);
    void addChannelsToPackage(map<string, Package>& packageMap,const string& packageCode, const list<Channel>& channels);
	void displayPackageDetails() ;
	void displayNoOfChannelsinPackage(map<string, Package> packageMap);
	void findPackageBasedOnDTH(map <string, Package > packageMap, string dthname);
	void findPackageBasedOnChannel(map<string, Package>packageMap, string channelname);
};