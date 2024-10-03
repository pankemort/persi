#include "Customer.h"
#include <iomanip>
#include<vector>

Customer::Customer()
{
}

Customer::Customer(int id, string name, string username, string password, string mobile_number, string email)
{
    this->id = id;
    this->name = name;
    this->username = username;
    this->password = password;
    this->mobile_number = mobile_number;
    this->email = email;


}

int Customer::getId()
{
    return id;
}

void Customer::setId(int id)
{
    this->id = id;
}

string Customer::getName()
{
    return name;

}

void Customer::setName(string name)
{
    this->name = name;

}

string Customer::getUsername()
{
    return username;
}

void Customer::setUsername(string username)
{
    this->username = username;

}

string Customer::getPassword()
{
    return password;
}

void Customer::setPassword(string password)
{
    this->password = password;

}

string Customer::getMobile_number()
{
    return mobile_number;
}

void Customer::setMobile_number(string mobile_number)
{
    this->mobile_number = mobile_number;

}

string Customer::getEmail()
{
    return email;
}

void Customer::setEmail(string email)
{
    this->email = email;
}

void Customer::display(vector<Customer> customerVector)
{
    cout << "Customer Details\n";
    cout << setw(25) << left << "Name" << setw(25) << left << "UserName" << setw(25) << left << "Password" << setw(25) << left << "Mobile_Number" << setw(25) << left << "Email" << endl;
    //Fill your code here. You can use the above setw formatting to avoid space issues
}

void Customer::searchCustomerByMobileNumber(vector<Customer> customerVector, string mobile)
{
    cout << setw(25) << left << "Name" << setw(25) << left << "UserName" << setw(25) << left << "Password" << setw(25) << left << "Mobile_Number" << setw(25) << left << "Email" << endl;
    //Fill your code here. You can use the above setw formatting to avoid space issues   
}

vector<Customer> Customer::updateCustomerMobileNumber(vector<Customer> customerVector, string cust_name, string new_mobile)
{
    //Fill your code here
    return customerVector;
}
