#pragma once
#include<string>
#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Customer {
private:
    int id;
	string name;
	string username;
	string password;
	string mobile_number;
	string email;

public:
	Customer();
	Customer(int id, string name, string username, string password, string mobile_number, string email);
	int getId();
	void setId(int id);
	string getName();
	void setName(string name);
	string getUsername();
	void setUsername(string brand);
	string getPassword();
	void setPassword(string productType);
	string getMobile_number();
	void setMobile_number(string productCategory);
	string getEmail();
	void setEmail(string color);
	void display(vector<Customer> customerVector);
	void searchCustomerByMobileNumber(vector<Customer> customerVector, string mobile);
	vector<Customer> updateCustomerMobileNumber(vector<Customer> customerVector, string cust_name, string new_mobile);
};
