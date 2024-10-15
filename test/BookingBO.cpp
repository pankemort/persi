#include <list>
#include <iostream>
#include <string>
#include <map>
#include "User.h"
#include "Booking.h"
using namespace std;
class BookingBO{
    public:
	list<User> listAllUsers(){
		list<User> userList;
		userList.push_back(User(1,"Kathir","Ekart","kathir_01","kathir#01","9876543210","Coimbatore","Active",190.453,"Customer"));
		userList.push_back(User(2,"Nithya","Flipkart","nithya","nithya@0123","9837838747","Chennai","Active",182.447,"Customer"));
		userList.push_back(User(3,"Mathi","Amazon","mathi_098","mathi","7896273410","Chennai","Active",132.2,"Customer"));
		userList.push_back(User(4,"Surya","hp","surya","surya","9753627819","Salem","Inactive",67,"Customer"));
		userList.push_back(User(5,"Ebay","Ponds","ebay","ebay123","9856473647","Trichy","Inactive",134.456,"Customer"));
		userList.push_back(User(6,"Mithra","Ebay","Mithra123","Mithra123","9834354881","Madurai","Active",100.123,"Customer"));
		return userList;
	}
	
	void displayUserList(){
		//fill your code here
	}
	
	User getUserObject(list<User> userList,string username){
		//fill your code here
    }
	
	void displayBookingCount(map<string, list<Booking>> bookingMap){
		//fill your code here
	}
	
	void displayUserBooking(map<string, list<Booking>> bookingMap, string username){
		//fill your code here
	}
};