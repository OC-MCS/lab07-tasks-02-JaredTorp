#pragma once
#include <iostream>
#include <string>
using namespace std;

class RetailItem

{
private: 
	string description;
	int unitsOnHand;
	double price;
public:

	RetailItem(string, int, double);
	string getDescription();
	int getUnitsOnHand();
	double getPrice();
	float getStockValue();







};