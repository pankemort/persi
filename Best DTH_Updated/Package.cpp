#include "Package.h"
#include "DTH.h"
#include<iomanip>
#include <sstream>
Package::Package()
{
}

Package::Package(string name, string reference_code, string type, double cost, int validity, string dth, list<Channel> channelList)
{
    this->name = name;
	this->reference_code = reference_code;
	this->type = type;
	this->cost = cost;
	this->validity = validity;
	this->dth = dth;
	this->channelList = channelList;
}

string Package::getName()
{
	return name;
}

void Package::setName(string name)
{
	this->name = name;
}

string Package::getReference_code()
{
	return reference_code;
}

void Package::setReference_code(string reference_code)
{
	this->reference_code = reference_code;
}

string Package::getType()
{
	return type;
}

void Package::setType(string type)
{
	this->type = type;
}

double Package::getCost()
{
	return cost;
}

void Package::setCost(double cost)
{
	this->cost = cost;
}

int Package::getValidity()
{
	return validity;
}

void Package::setValidity(int validity)
{
	this->validity = validity;
}

string Package::getDth()
{
	return dth;
}

void Package::setDth(string dth)
{
	this->dth = dth;
}

list<Channel> Package::getChannelList()
{
	return channelList;
}

void Package::setChannelList(list<Channel> channelList)
{
	this->channelList = channelList;
}

void Package::addPackage(map<string, Package>& packageMap, const string& packageDetails) {
    //Fill your code here
    stringstream ss(packageDetails);
    string name, reference_code, type, dth;
    double cost;
    int validity;
    getline(ss, name, ',');
    getline(ss, reference_code, ',');
    getline(ss, type, ',');
    ss >> cost;
    ss.ignore();
    ss >> validity;
    ss.ignore();
    getline(ss, dth, ',');
    Package newPackage(name, reference_code, type, cost, validity, dth, {});
    packageMap[reference_code] = newPackage;
    cout << "Package added successfully" << endl;
}

void Package::addChannelsToPackage(map<string, Package>& packageMap, const string& packageCode, const list<Channel>& channels) {
    //Fill your code here

    if (packageMap.find(packageCode) != packageMap.end()) {
        packageMap[packageCode].channelList.insert(packageMap[packageCode].channelList.end(), channels.begin(), channels.end());
        cout << "Channels added to the " << packageMap[packageCode].getName() << " package successfully" << endl;
    } else {
        cout << "Package not found" << endl;
    }
}

void Package::displayPackageDetails() {
    //Fill your code here

    cout << "Package Name: " << name << endl;
    cout << "Channels in this package:" << endl;
    for (auto& channel : channelList) {
        cout << channel.getName() << endl;
    }
}

void Package::displayNoOfChannelsinPackage(map<string, Package> packageMap)
{
	
    cout << "Package Name" << setw(15) << "Number of channels" << endl;
    for (auto& package : packageMap) {
        cout << package.second.getName() << setw(15) << package.second.getChannelList().size() << endl;
    }
}

void Package::findPackageBasedOnDTH(map<string, Package> packageMap, string dthname)
{
	bool found = false;
	cout << "Package Name" << setw(25) << "Type" << setw(25) << "Cost" << setw(25) << "Validity" << setw(25) << "Number of channels" << endl;
	//Fill your code here

    for (auto& package : packageMap) {
        if (package.second.getDth() == dthname) {
            cout << package.second.getName() << setw(25) << package.second.getType() << setw(25) << package.second.getCost() << setw(25) << package.second.getValidity() << setw(25) << package.second.getChannelList().size() << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Packages not found for the given DTH" << endl;
    }
}

void Package::findPackageBasedOnChannel(map<string, Package> packageMap, string channelname) {
	bool found = false;
	cout << "Package Name" << setw(25) << "DTH Name" << setw(25) << endl;
	//Fill your code here

    for (auto& package : packageMap) {
        for (auto& channel : package.second.getChannelList()) {
            if (channel.getName() == channelname) {
                cout << package.second.getName() << setw(25) << package.second.getDth() << setw(25) << endl;
                found = true;
                break;
            }
        }
    }
    if (!found) {
        cout << "Channel name not found in any package" << endl;
    }
}

