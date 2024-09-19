#pragma once
#include<string>
#include<iostream>
#include<vector>
#include<map>
#include "Product.h"
#pragma once
using namespace std;

class OrderDetail {
private:
    int id;
	string name;
	string contactNo;
	string orderedstring;
	string deliverystring;
	int costPerMonth;
	vector<Product> productDetails;

public:
	OrderDetail();
	OrderDetail(int id, string name, string contactNo, string orderedstring, string deliverystring, int costPerMonth, vector<Product> productDetails);
	int getId();
	void setId(int id);
	string getName();
	void setName(string name);
	string getContactNo();
	void setContactNo(string contactNo);
	string getOrderedstring();
	void setOrderedstring(string orderedstring);
	string getDeliverystring();
	void setDeliverystring(string deliverystring);
	int getCostPerMonth();
	void setCostPerMonth(int costPerMonth);
	vector<Product> getProductDetails();
	void setProductDetails(vector<Product> productDetails);
	map<string, vector<OrderDetail> > getCustomerOrderMap(vector<OrderDetail> orderVector);
	void findCustomer(map<string, vector<OrderDetail>> customerOrderSummaryMap);
};
