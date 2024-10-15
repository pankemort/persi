#include "Package.h"
#include "DTH.h"
#include<iomanip>

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
}

void Package::addChannelsToPackage(map<string, Package>& packageMap, const string& packageCode, const list<Channel>& channels) {
    //Fill your code here
}

void Package::displayPackageDetails() {
    //Fill your code here
}

void Package::displayNoOfChannelsinPackage(map<string, Package> packageMap)
{
	cout << "Package Name" << setw(15) << "Number of channels" << endl;
    //Fill your code here
}

void Package::findPackageBasedOnDTH(map<string, Package> packageMap, string dthname)
{
	bool found = false;
	cout << "Package Name" << setw(25) << "Type" << setw(25) << "Cost" << setw(25) << "Validity" << setw(25) << "Number of channels" << endl;
	//Fill your code here
}

void Package::findPackageBasedOnChannel(map<string, Package> packageMap, string channelname) {
	bool found = false;
	cout << "Package Name" << setw(25) << "DTH Name" << setw(25) << endl;
	//Fill your code here
}

