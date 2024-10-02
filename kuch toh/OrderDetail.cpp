#include "OrderDetail.h"

OrderDetail::OrderDetail()
{

}

OrderDetail::OrderDetail(int id, string name, string contactNo, string orderedstring, string deliverystring, int costPerMonth, vector<Product> productDetails)
{
    //Fill your code here
}

int OrderDetail::getId()
{
	//Fill your code here
}

void OrderDetail::setId(int id)
{
	//Fill your code here
}

string OrderDetail::getName()
{
	//Fill your code here
}

void OrderDetail::setName(string name)
{
	//Fill your code here
}

string OrderDetail::getContactNo()
{
	//Fill your code here
}

void OrderDetail::setContactNo(string contactNo)
{
	//Fill your code here
}

string OrderDetail::getOrderedstring()
{
	//Fill your code here
}

void OrderDetail::setOrderedstring(string orderedstring)
{
	//Fill your code here
}

string OrderDetail::getDeliverystring()
{
	//Fill your code here
}

void OrderDetail::setDeliverystring(string deliverystring)
{
	//Fill your code here
}

int OrderDetail::getCostPerMonth()
{
	//Fill your code here
}

void OrderDetail::setCostPerMonth(int costPerMonth)
{
	//Fill your code here
}

vector<Product> OrderDetail::getProductDetails()
{
	//Fill your code here
}

void OrderDetail::setProductDetails(vector<Product> productDetails)
{
	//Fill your code here
}

map<string, vector<OrderDetail>> OrderDetail::getCustomerOrderMap(vector<OrderDetail> orderVector)
{
	map<string, vector<OrderDetail> > customerOrderSummaryMap;
	//Fill your code here
	return customerOrderSummaryMap;
}

void OrderDetail::findCustomer(map<string, vector<OrderDetail>> customerOrderSummaryMap)
{
	//Fill your code here
}
// }
// #include "OrderDetail.h"
// #include <iostream>
// #include <iomanip>

// OrderDetail::OrderDetail() : id(0), name(""), contactNo(""), orderedstring(""), deliverystring(""), costPerMonth(0), productDetails({}) {}

// OrderDetail::OrderDetail(int id, string name, string contactNo, string orderedstring, string deliverystring, int costPerMonth, vector<Product> productDetails)
//     : id(id), name(name), contactNo(contactNo), orderedstring(orderedstring), deliverystring(deliverystring), costPerMonth(costPerMonth), productDetails(productDetails) {}

// int OrderDetail::getId() {
//     return id;
// }

// void OrderDetail::setId(int id) {
//     this->id = id;
// }

// string OrderDetail::getName() {
//     return name;
// }

// void OrderDetail::setName(string name) {
//     this->name = name;
// }

// string OrderDetail::getContactNo() {
//     return contactNo;
// }

// void OrderDetail::setContactNo(string contactNo) {
//     this->contactNo = contactNo;
// }

// string OrderDetail::getOrderedstring() {
//     return orderedstring;
// }

// void OrderDetail::setOrderedstring(string orderedstring) {
//     this->orderedstring = orderedstring;
// }

// string OrderDetail::getDeliverystring() {
//     return deliverystring;
// }

// void OrderDetail::setDeliverystring(string deliverystring) {
//     this->deliverystring = deliverystring;
// }

// int OrderDetail::getCostPerMonth() {
//     return costPerMonth;
// }

// void OrderDetail::setCostPerMonth(int costPerMonth) {
//     this->costPerMonth = costPerMonth;
// }

// vector<Product> OrderDetail::getProductDetails() {
//     return productDetails;
// }

// void OrderDetail::setProductDetails(vector<Product> productDetails) {
//     this->productDetails = productDetails;
// }

// map<string, vector<OrderDetail>> OrderDetail::getCustomerOrderMap(vector<OrderDetail> orderVector) {
//     map<string, vector<OrderDetail>> customerOrderSummaryMap;
//     for (const auto& order : orderVector) {
//         customerOrderSummaryMap[order.getName()].push_back(order);
//     }
//     return customerOrderSummaryMap;
// }

// void OrderDetail::findCustomer(map<string, vector<OrderDetail>> customerOrderSummaryMap) {
//     string topCustomer;
//     int maxOrders = 0;
//     for (const auto& pair : customerOrderSummaryMap) {
//         if (pair.second.size() > maxOrders) {
//             maxOrders = pair.second.size();
//             topCustomer = pair.first;
//         }
//     }
//     cout << topCustomer << endl;
// }