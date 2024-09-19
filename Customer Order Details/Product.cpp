#include "Product.h"
#include<iomanip>
Product::Product()
{

}

Product::Product(int id, string name, string brand, string productType, string productCategory, string color, int rate)
{
    //Fill your code here
}

int Product::getId()
{
	//Fill your code here
}

void Product::setId(int id)
{
	//Fill your code here
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


