#include <iostream>
#include <string>
#include <list>
#include <map>
#include "Booking.h"
#include "BookingBO.cpp"
#include "User.h"
using namespace std;

int main(void)
{  
	BookingBO bbo;
    list<User> userList = bbo.listAllUsers();
	bbo.displayUserList();
	int n;
	map<string, list<Booking>> bookingMap;
	cout<<"Enter the number of bookings to be added :"<<endl;
	cin>>n;
	cout<<"Enter the booking details :"<<endl;
	for(int j=0;j<n;j++){
		string str;
		cin>>str;
		int i=0;
		string delimiter = ",";
		size_t pos = 0;
		string token;
		string* arr = new string[40];
		while ((pos = str.find(delimiter)) != string::npos) 
		{
			token = str.substr(0, pos);
			arr[i]=token;
			str.erase(0, pos + delimiter.length());
			i++;
		}
		arr[i]=str;
		Booking b((j+1), arr[0], atof(arr[1].c_str()), arr[2], arr[3], bbo.getUserObject(userList, arr[4]));
		
		map<string, list<Booking>>::iterator it = bookingMap.find(arr[4]);
		if (it != bookingMap.end()) {
			it->second.push_back(b);
		}
		else {
			list<Booking> bList;
			bList.push_back(b);
			bookingMap.insert(pair<string, list<Booking>>(arr[4], bList));
		}
	}
	bbo.displayBookingCount(bookingMap);
	string username;
	cout<<"Enter the username to display booking details"<<endl;
	cin>>username;
	bbo.displayUserBooking(bookingMap,username);
	
}