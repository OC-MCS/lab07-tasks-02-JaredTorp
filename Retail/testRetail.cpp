#include <iostream>
#include "RetailItem.h"
#include <fstream>
#include <vector>

// code to test your RetailItem class goes here
using namespace std;

int main()
{
	
	ifstream file;
	vector<RetailItem> vec;



	return 0;
}

void loadterms(ifstream& file, vector<RetailItem>& v, int& counter)
{

	string tempDescription;
	string tempUnits;
	string tempPrice;
	file.open("ExcelFile.csv");

	if (!file)
	{
		cout << "Error opening file :(" << endl;
	}
	

	while (getline(file, tempDescription , ','))
	{
		getline(file, tempUnits, ',');
		getline(file, tempPrice, ',');
		
		RetailItem temp(tempDescription, stoi(tempUnits), stof(tempPrice)); //create an instance of 

		v.push_back(temp); // add a RetailItem to end of vector

	}




}