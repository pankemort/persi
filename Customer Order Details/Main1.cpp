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
    Product product;
    map<int, Product> productMap = product.getProductMap();
    product.display(productMap);

    int numOrders;
    cout << "Number of order details: ";
    cin >> numOrders;
    cin.ignore();

    vector<OrderDetail> orderDetails;
    for (int i = 0; i < numOrders; ++i) {
        string input;
        cout << "Enter Order Details " << (i + 1) << " (username,contactNo,orderedDate,deliveryDate,Product Details(separated by pipe sign)): ";
        getline(cin, input);

        stringstream ss(input);
        string username, contactNo, orderedDate, deliveryDate, productDetailsStr;
        getline(ss, username, ',');
        getline(ss, contactNo, ',');
        getline(ss, orderedDate, ',');
        getline(ss, deliveryDate, ',');
        getline(ss, productDetailsStr, ',');

        vector<Product> products;
        stringstream productSS(productDetailsStr);
        string productIdStr;
        while (getline(productSS, productIdStr, '|')) {
            int productId = stoi(productIdStr);
            products.push_back(productMap[productId]);
        }

        OrderDetail orderDetail(i + 1, username, contactNo, orderedDate, deliveryDate, 0, products);
        orderDetails.push_back(orderDetail);
    }

    OrderDetail orderDetail;
    map<string, vector<OrderDetail>> customerOrderMap = orderDetail.getCustomerOrderMap(orderDetails);

    cout << "Customer Name" << setw(15) << "No of Orders" << endl;
    for (const auto& pair : customerOrderMap) {
        cout << pair.first << setw(15) << pair.second.size() << endl;
    }

    orderDetail.findCustomer(customerOrderMap);

    int searchRate;
    cout << "Enter the product rate to be searched: ";
    cin >> searchRate;
    product.searchProductByRate(productMap, searchRate);

    return 0;
}