#include "Customer.h"
#include<iomanip>

Customer::Customer() {}

Customer::Customer(int id, string name, string username, string password, string mobile_number, string email) {
    this->id = id;
    this->name = name;
    this->username = username;
    this->password = password;
    this->mobile_number = mobile_number;
    this->email = email;
}

int Customer::getId() { 
    return this->id; 
}

string Customer::getName() { 
    return this->name; 
}

string Customer::getUsername() { 
    return this->username; 
}

string Customer::getPassword() { 
    return this->password; 
}

string Customer::getMobile_number() { 
    return this->mobile_number; 
}

string Customer::getEmail() { 
    return this->email; 
}

void Customer::setId(int id) { 
    this->id = id; 
}

void Customer::setName(string name) { 
    this->name = name; 
}

void Customer::setUsername(string username) { 
    this->username = username; 
}

void Customer::setPassword(string password) { 
    this->password = password; 
}

void Customer::setMobile_number(string mobile_number) { 
    this->mobile_number = mobile_number; 
}

void Customer::setEmail(string email) { 
    this->email = email; 
}

void Customer::display(vector<Customer> customerVector) {
    cout << "Customer Details\n";
    cout << setw(25) << left << "Name" << setw(25) << left << "UserName" << setw(25) << left << "Password" << setw(25) << left << "Mobile_Number" << setw(25) << left << "Email" << endl;
    
    for (Customer customer : customerVector) {
        cout << setw(25) << left << customer.getName() << setw(25) << left << customer.getUsername() << setw(25) << left << customer.getPassword() << setw(25) << left << customer.getMobile_number() << setw(25) << left << customer.getEmail() << endl;
    }
}

void Customer::searchCustomerByMobileNumber(vector<Customer> customerVector, string mobile) {
    int flag = 0;
    for (Customer customer : customerVector) {
        if (customer.getMobile_number() == mobile) {
            cout << setw(25) << left << "Name" << setw(25) << left << "UserName" << setw(25) << left << "Password" << setw(25) << left << "Mobile_Number" << setw(25) << left << "Email" << endl;
            cout << setw(25) << left << customer.getName() << setw(25) << left << customer.getUsername() << setw(25) << left << customer.getPassword() << setw(25) << left << customer.getMobile_number() << setw(25) << left << customer.getEmail() << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        cout << "Customer Not Found\n";
    }
}

vector<Customer> Customer::updateCustomerMobileNumber(vector<Customer> customerVector, string cust_name, string new_mobile) {
    for (int i = 0; i < customerVector.size(); i++) {
        if (customerVector[i].getName() == cust_name) {
            customerVector[i].setMobile_number(new_mobile);
            break;
        }
    }
    return customerVector;
}
