#include "Product.h"
#include<iomanip>
Product::Product()
{

}

Product::Product(int id, string name, string brand, string productType, string productCategory, string color, int rate)
: id(id),name(name), brand(brand),productType(productType),productCategory(productCategory),color(color),rate(rate)
{
    //Fill your code here
   
}

int Product::getId()
{
	//Fill your code here
    return id;
}

void Product::setId(int id)
{
	//Fill your code here
    this->id = id;
}

string Product::getName()
{
	//Fill your code here
    
}

void Product::setName(string name)
{
	//Fill your code here
}

string Product::getBrand()
{
	//Fill your code here
}

void Product::setBrand(string brand)
{
	//Fill your code here
}

string Product::getProductType()
{
	//Fill your code here
}

void Product::setProductType(string productType)
{
	//Fill your code here
}

string Product::getProductCategory()
{
	//Fill your code here
}

void Product::setProductCategory(string productCategory)
{
	//Fill your code here
}

string Product::getColor()
{
	//Fill your code here
}

void Product::setColor(string color)
{
	//Fill your code here
}

int Product::getRate()
{
	//Fill your code here
}

void Product::setRate(int rate)
{
	//Fill your code here
}

map<int, Product> Product::getProductMap()
{
	map<int, Product> productMap;
	//Fill your code here

	return productMap;
}

void Product::display(map<int, Product> productMap)
{
	cout << "Product Details\n";
	cout << setw(25) << left << "Name" << setw(25) << left << "Brand" << setw(25) << left << "ProductCategory" << setw(25) << left << "Color" << setw(25) << left << "Cost" << endl;
	//Fill your code here
}

void Product::searchProductByRate(map<int,Product> productMap, int searchRate)
{
	//Fill your code here
}

// #include "Product.h"
// #include <iostream>
// #include <iomanip>

// Product::Product() {}

// Product::Product(int id, string name, string brand, string productType, string productCategory, string color, int rate)
//     : id(id), name(name), brand(brand), productType(productType), productCategory(productCategory), color(color), rate(rate) {}

// int Product::getId() {
//     return id;
// }

// void Product::setId(int id) {
//     this->id = id;
// }

// string Product::getName() {
//     return name;
// }

// void Product::setName(string name) {
//     this->name = name;
// }

// string Product::getBrand() {
//     return brand;
// }

// void Product::setBrand(string brand) {
//     this->brand = brand;
// }

// string Product::getProductType() {
//     return productType;
// }

// void Product::setProductType(string productType) {
//     this->productType = productType;
// }

// string Product::getProductCategory() {
//     return productCategory;
// }

// void Product::setProductCategory(string productCategory) {
//     this->productCategory = productCategory;
// }

// string Product::getColor() {
//     return color;
// }

// void Product::setColor(string color) {
//     this->color = color;
// }

// int Product::getRate() {
//     return rate;
// }

// void Product::setRate(int rate) {
//     this->rate = rate;
// }

// map<int, Product> Product::getProductMap() {
//     map<int, Product> productMap;
//     productMap[1] = Product(1, "Bosch 6.5Kg Washing Machines", "Bosch", "Washing Machine", "Laundry Room - Appliances", "Blue", 20000);
//     productMap[2] = Product(2, "Lenovo Ideapad Core i3", "Philips", "Laptop", "Conference Room-Electronics", "Black", 14000);
//     productMap[3] = Product(3, "Philips 25-Litre Digital Oven", "Philips", "Oven", "Kitchen - Appliances", "Black", 6000);
//     productMap[4] = Product(4, "Ebony Wardrobe", "Philips", "Bed", "Bedroom - Furniture", "Brown", 7000);
//     productMap[5] = Product(5, "Recliner", "Bosch", "Living Room - Furniture", "Chair", "Brown", 540);
//     return productMap;
// }

// void Product::display(map<int, Product> productMap) {
//     cout << "Product Details\n";
//     cout << setw(25) << left << "Name" << setw(25) << left << "Brand" << setw(25) << left << "ProductCategory" << setw(25) << left << "Color" << setw(25) << left << "Cost" << endl;
//     for (const auto& pair : productMap) {
//         const Product& product = pair.second;
//         cout << setw(25) << left << product.name << setw(25) << left << product.brand << setw(25) << left << product.productCategory << setw(25) << left << product.color << setw(25) << left << product.rate << endl;
//     }
// }

// void Product::searchProductByRate(map<int, Product> productMap, int searchRate) {
//     bool found = false;
//     for (const auto& pair : productMap) {
//         const Product& product = pair.second;
//         if (product.rate >= searchRate) {
//             if (!found) {
//                 cout << setw(25) << left << "Name" << setw(25) << left << "Brand" << setw(25) << left << "ProductCategory" << setw(25) << left << "Color" << setw(25) << left << "Cost" << endl;
//                 found = true;
//             }
//             cout << setw(25) << left << product.name << setw(25) << left << product.brand << setw(25) << left << product.productCategory << setw(25) << left << product.color << setw(25) << left << product.rate << endl;
//         }
//     }
//     if (!found) {
//         cout << "No product found with the given rate." << endl;
//     }
// }

