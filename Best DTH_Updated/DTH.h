#pragma once
#include<string>
#include<vector>
#include<map>
#include <list>
#include "Package.h"
#include <iostream>

using namespace std;
class DTH :public Package
{
private:
    string name;
	string website;
	int estimated_year;
	list<Package>packageList;
public:

	DTH();
	DTH(string name, string website, int estimated_year, list<Package>packageList);
	string getName();
	void setName(string name);
	string getWebsite();
	void setWebsite(string website);
	int getEstimated_year();
	void setEstimated_year(int estimated_year);
	list<Package> getPackageList(list<Package> packageList);
	void setPackageList(list<Package> packageList);
	void getBestDTH(map <string, Package > packageMap);

};