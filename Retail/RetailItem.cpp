#include "RetailItem.h"

RetailItem::RetailItem(string D, int U, double P)
{
	description = D;
	unitsOnHand = U;
	price = P;

}

string RetailItem::getDescription()
{
	return description;
}
int RetailItem::getUnitsOnHand()
{
	return unitsOnHand;
}
double RetailItem::getPrice()
{
	return price;
}

float RetailItem::getStockValue()
{
	float stockValue;
	stockValue = (unitsOnHand * price);
	return stockValue;
}