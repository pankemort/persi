#pragma once
#include<string>
#include<iostream>
#include<vector>
#include<map>
#pragma once
using namespace std;

class Account {
private:
    string account_number;
	string account_type;
	string branch;
	double account_balance;
	string account_status;
	string customer_name;

public:
	Account();
	Account(string account_number, string account_type, string branch, double account_balance, string account_status, string customer_name);
	string getAccount_number();
	void setAccount_number(string account_number);
	string getAccount_type();
	void setAccount_type(string account_type);
	string getBranch();
	void setBranch(string branch);
	double getAccount_balance();
	void setAccount_balance(double account_balance);
	string getAccount_status();
	void setAccount_status(string account_status);
	string getCustomerName();
	void setCustomerName(string customer_name);
	void display(vector<Account> accountVector);
	map<string, vector<Account> > getCustomerAccountMap(vector<Account> accountVector);
	void findCustomer(map<string, vector<Account>> customerAccountSummaryMap);
	vector<Account> deleteAccount(vector<Account> accountVector);
};
