#include "DTH.h"
#include <list>
DTH::DTH()
{
}

DTH::DTH(string name, string website, int estimated_year, list<Package> packageList)
{
    this->name = name;
	this->website = website;
	this->estimated_year = estimated_year;
	this->packageList = packageList;
}

string DTH::getName()
{
	return name;
}

void DTH::setName(string name)
{
	this->name = name;
}

string DTH::getWebsite()
{
	return website;
}

void DTH::setWebsite(string website)
{
	this->website = website;
}

int DTH::getEstimated_year()
{
	return estimated_year;
}

void DTH::setEstimated_year(int estimated_year)
{
	this->estimated_year = estimated_year;
}

list<Package> DTH::getPackageList(list<Package> packageList)
{
	return packageList;
}

void DTH::setPackageList(list<Package> packageList)
{
	this->packageList = packageList;
}

void DTH::getBestDTH(map<string, Package> packageMap)
{
	//Fill your code here
}