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
