#include "Account.h"

#include <iomanip>
Account::Account()
{
}

Account::Account(string account_number, string account_type, string branch, double account_balance, string account_status, string customer_name)
{
    this->account_number = account_number;
	this->account_type = account_type;
	this->branch = branch;
	this->account_balance = account_balance;
	this->account_status = account_status;
	this->customer_name = customer_name;
}

string Account::getAccount_number()
{
	return account_number;
}

void Account::setAccount_number(string account_number)
{
	this->account_number = account_number;
}

string Account::getAccount_type()
{
	return account_type;
}

void Account::setAccount_type(string account_type)
{
	this->account_type = account_type;
}

string Account::getBranch()
{
	return branch;
}

void Account::setBranch(string branch)
{
	this->branch = branch;
}

double Account::getAccount_balance()
{
	return account_balance;
}

void Account::setAccount_balance(double account_balance)
{
	this->account_balance = account_balance;
}

string Account::getAccount_status()
{
	return account_status;
}

void Account::setAccount_status(string account_status)
{
	this->account_status = account_status;
}

string Account::getCustomerName()
{
	return customer_name;
}

void Account::setCustomerName(string customer_name)
{
	this->customer_name = customer_name;
}

void Account::display(vector<Account> accountVector)
{
	cout << "Account Details\n";
	cout << setw(25) << left << "Account Number" << setw(25) << left << "Account Type" << setw(25) << left << "Branch" << setw(25) << left << "Account Balance" << setw(25) << left << "Account Status" << setw(25) << left << "Customer Name" << endl;

	//Fill your code here. You can use the above setw formatting to avoid space issues
}

map<string, vector<Account>> Account::getCustomerAccountMap(vector<Account> accountVector)
{
	map<string, vector<Account> > CustomerAccountMap;
	//Fill your code here
	return CustomerAccountMap;
}

void Account::findCustomer(map<string, vector<Account>> customerAccountSummaryMap)
{
	//Fill your code here
}
vector<Account> Account::deleteAccount(vector<Account> accountVector)
{
	//Fill your code here
	return accountVector;
}
