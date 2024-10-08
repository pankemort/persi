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
<<<<<<< HEAD
    
    for (Customer customer : customerVector) {
=======
    //Fill your code here. You can use the above setw formatting to avoid space issues
        for (auto& customer : customerVector) {
>>>>>>> 4b3b90dc6cde8a1a7eee8723e1a3b916f41db4a6
        cout << setw(25) << left << customer.getName() << setw(25) << left << customer.getUsername() << setw(25) << left << customer.getPassword() << setw(25) << left << customer.getMobile_number() << setw(25) << left << customer.getEmail() << endl;
    }
}

<<<<<<< HEAD
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
=======
void Customer::searchCustomerByMobileNumber(vector<Customer> customerVector, string mobile)
{
    cout << setw(25) << left << "Name" << setw(25) << left << "UserName" << setw(25) << left << "Password" << setw(25) << left << "Mobile_Number" << setw(25) << left << "Email" << endl;
    //Fill your code here. You can use the above setw formatting to avoid space issues   
        for (auto& customer : customerVector) {
        if (customer.getMobile_number() == mobile) {
            cout << setw(25) << left << customer.getName() << setw(25) << left << customer.getUsername() << setw(25) << left << customer.getPassword() << setw(25) << left << customer.getMobile_number() << setw(25) << left << customer.getEmail() << endl;
            return;
        }
    }
    cout << "Customer Not Found" << endl;
}

vector<Customer> Customer::updateCustomerMobileNumber(vector<Customer> customerVector, string cust_name, string new_mobile)
{
    //Fill your code here
        for (auto& customer : customerVector) {
        if (customer.getName() == cust_name) {
            customer.setMobile_number(new_mobile);
            cout << "Mobile number updated successfully." << endl;
            display(customerVector);
            return customerVector;
        }
    }
    cout << "Customer Not Found" << endl;
>>>>>>> 4b3b90dc6cde8a1a7eee8723e1a3b916f41db4a6
    return customerVector;
}
