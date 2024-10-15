#ifndef USER
#define USER
#include <iostream>
#include <string>
#include <list>
using namespace std;
class User{
    private:
    int id;
    string name;
    string organization;
	string username;
	string password;
	string contactNumber;
    string address;
	string status;
	double contractRate;
	string role;
	
	public:
	User(){}
	
	User(int id,string name,string organization,string username,string password,string contactNumber,string address,string status,double contractRate,string role){
		this->id = id;
		this->name = name;
		this->organization = organization;
		this->username = username;
		this->password = password;
		this->contactNumber = contactNumber;
		this->address = address;
		this->status = status;
		this->contractRate = contractRate;
		this->role = role;
	}
	
	void setId(int id) { this->id = id; } 
	int getId() { return this->id; }
	void setName(string name) { this->name = name; } 
	string getName() { return this->name; }
	void setOrganization(string organization) { this->organization = organization; } 
	string getOrganization() { return this->organization; }
	void setUsername(string username) { this->username = username; } 
	string getUsername() { return this->username; }
	void setPassword(string password) { this->password = password; } 
	string getPassword() { return this->password; }
	void setContactNumber(string contactNumber) { this->contactNumber = contactNumber; } 
	string getContactNumber() { return this->contactNumber; }
	void setAddress(string address) { this->address = address; } 
	string getAddress() { return this->address; }
	void setStatus(string status) { this->status = status; } 
	string getStatus() { return this->status; }
	void setContractRate(double contractRate) { this->contractRate = contractRate; } 
	double getContractRate() { return this->contractRate; }
	void setRole(string role) { this->role = role; } 
	string getRole() { return this->role;}
	

};
#endif