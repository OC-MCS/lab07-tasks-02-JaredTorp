#include <iostream>
#include "RetailItem.h"
#include <fstream>
#include <vector>
#include <iomanip>

// code to test your RetailItem class goes here
using namespace std;

void loadterms(vector<RetailItem>& v);
void display(vector<int>& v);

int main()
{
	
	
	vector<RetailItem> vec;

	loadterms(vec);
	display(vec);

	return 0;
}

void loadterms( vector<RetailItem>& v)
{

	string tempDescription;
	string tempUnits;
	string tempPrice;
	fstream file;
	file.open("ExcelFile.csv");

	if (!file)
	{
		cout << "Error opening file :(" << endl;
	}
	

	while (getline(file, tempDescription, ','))
	{
		getline(file, tempUnits, ',');
		getline(file, tempPrice, ',');
		
		RetailItem temp(tempDescription, stoi(tempUnits), stod(tempPrice)); //create an instance of 

		v.push_back(temp); // add a RetailItem to end of vector

	}




}

void display(vector<RetailItem>& v)
{
	// can access *existing* elements using array notation
	float total = 0; //total initialized at zero
	cout << fixed << showpoint << setprecision(2) << endl;
	cout << setw(15) << "Description " << setw(10) << "On Hand" << setw(10) << "Value" << endl;
	for (unsigned int i = 0; i < v.size(); i++)
	{
		cout << setw(15) << v[i].getDescription() << setw(10) << v[i].getUnitsOnHand() << setw(10) << v[i].getPrice() << setw(10) << v[i].getStockValue() << endl;
		total = total + v[i].getPrice(); //to add up our total
	}
	cout << "Total inventory value: " << total << endl;
}