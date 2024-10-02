#pragma once
#include<string>
#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Product {
private:
    int id;
	string name;
	string brand;
	string productType;
	string productCategory;
	string color;
	int rate;

public:
	Product();
	Product(int id, string name, string brand, string productType, string productsCategory, string color, int rate);
	int getId();
	void setId(int id);
	string getName();
	void setName(string name);
	string getBrand();
	void setBrand(string brand);
	string getProductType();
	void setProductType(string productType);
	string getProductCategory();
	void setProductCategory(string productCategory);
	string getColor();
	void setColor(string color);
	int getRate();
	void setRate(int rate);
	map<int, Product> getProductMap();
	void display(map<int, Product> productMap);
	void searchProductByRate(map<int, Product> productMap, int searchRate);
};
// #ifndef PRODUCT_H
// #define PRODUCT_H

// #include <string>
// #include <map>
// #include <vector>

// using namespace std;

// class Product {
// private:
//     int id;
//     string name;
//     string brand;
//     string productType;
//     string productCategory;
//     string color;
//     int rate;

// public:
//     Product();
//     Product(int id, string name, string brand, string productType, string productCategory, string color, int rate);
//     int getId();
//     void setId(int id);
//     string getName();
//     void setName(string name);
//     string getBrand();
//     void setBrand(string brand);
//     string getProductType();
//     void setProductType(string productType);
//     string getProductCategory();
//     void setProductCategory(string productCategory);
//     string getColor();
//     void setColor(string color);
//     int getRate();
//     void setRate(int rate);
//     map<int, Product> getProductMap();
//     void display(map<int, Product> productMap);
//     void searchProductByRate(map<int, Product> productMap, int searchRate);
// };

// #endif
