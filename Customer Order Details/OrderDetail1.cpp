#include "OrderDetail.h"

OrderDetail::OrderDetail() {}

OrderDetail::OrderDetail(int id, string name, string contactNo, string orderedDate, string deliveryDate, int costPerMonth, vector<Product> productDetails)
    : id(id), name(name), contactNo(contactNo), orderedstring(orderedDate), deliverystring(deliveryDate), costPerMonth(costPerMonth), productDetails(productDetails) {}

int OrderDetail::getId() {
    return id;
}

void OrderDetail::setId(int id) {
    this->id = id;
}

string OrderDetail::getName() {
    return name;
}

void OrderDetail::setName(string name) {
    this->name = name;
}

string OrderDetail::getContactNo() {
    return contactNo;
}

void OrderDetail::setContactNo(string contactNo) {
    this->contactNo = contactNo;
}

string OrderDetail::getOrderedstring() {
    return orderedstring;
}

void OrderDetail::setOrderedstring(string orderedDate) {
    this->orderedstring = orderedDate;
}

string OrderDetail::getDeliverystring() {
    return deliverystring;
}

void OrderDetail::setDeliverystring(string deliveryDate) {
    this->deliverystring = deliveryDate;
}

int OrderDetail::getCostPerMonth() {
    return costPerMonth;
}

void OrderDetail::setCostPerMonth(int costPerMonth) {
    this->costPerMonth = costPerMonth;
}

vector<Product> OrderDetail::getProductDetails() {
    return productDetails;
}

void OrderDetail::setProductDetails(vector<Product> productDetails) {
    this->productDetails = productDetails;
}

map<string, vector<OrderDetail>> OrderDetail::getCustomerOrderMap(vector<OrderDetail> orderVector) {
    map<string, vector<OrderDetail>> customerOrderMap;
    for (auto& order : orderVector) {
        customerOrderMap[order.getName()].push_back(order);
    }
    return customerOrderMap;
}

void OrderDetail::findCustomer(map<string, vector<OrderDetail>> customerOrderSummaryMap) {
    string topCustomer;
    int maxOrders = 0;
    for (auto& pair : customerOrderSummaryMap) {
        if (pair.second.size() > maxOrders) {
            maxOrders = pair.second.size();
            topCustomer = pair.first;
        }
    }
    cout << "Customer who placed more number of orders: " << topCustomer << endl;
}
