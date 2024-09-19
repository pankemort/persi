#include <fstream>
#include <iostream>
#include <iterator>
#include <sstream>
#include <vector>
#include<iomanip>
#include <map>
#include <string>
#include <cstdlib> 
#include "Product.h"
#include "OrderDetail.h"
using namespace std;

int main() {
    int count,x;
	string str;
	Product product;
	OrderDetail orderdetail;
	vector<Product> productVector;
	map<int, Product> productMap = product.getProductMap();

	product.display(product.getProductMap());
	cout << "Number of order details\n";

	cin >> count;
	vector<OrderDetail> orderVector;
	for (int i = 0; i < count; i++) {
		cout << "Enter Order Details " << (i + 1) << " (username,contactNo,orderedDate,deliveryDate,Product Details(separated by pipe sign))\n";
		cin >> str;
		stringstream ss(str);
		string token;
		string order[5];
		int j = 0;
		while (getline(ss, token, ','))
		{
			order[j] = token;
			j++;
		}
		j = 0;
		stringstream ss1(order[4]);
		string porder[10];
		while (getline(ss1, token, '|'))
		{
			porder[j] = token;
		}


		int costPerMonth = 0;
		for (int y = 0; y < j; j++) {
			int b = atoi(porder[y].c_str());
			productVector.emplace_back(productMap[b]);
			costPerMonth += productMap[b].getRate();
		}

		OrderDetail od = OrderDetail(i + 1, order[0], order[1], order[2], order[3], costPerMonth, productVector);
		orderVector.emplace_back(od);
	}


	map<string, vector<OrderDetail> > customerSummaryMap = orderdetail.getCustomerOrderMap(orderVector);
	map<string, vector<OrderDetail> >::iterator ot;

	cout << "Customer Name" << setw(15) << "No of Orders"<<endl;
	for (ot = customerSummaryMap.begin(); ot != customerSummaryMap.end(); ++ot) {
		int noOfOrders = ot->second.size();
		cout << ot->first.c_str() << setw(15) << noOfOrders<<endl;
	}
	cout << "Customer who placed more number of orders" << endl;
	orderdetail.findCustomer(customerSummaryMap);
	cout << "Enter the product rate to be searched" << endl;
	cin >> x;
	product.searchProductByRate(productMap, x);

	return 0;
}

