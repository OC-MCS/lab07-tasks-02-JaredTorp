#include <iostream>
#include <cstdlib>
#include <ctime>

// client code to use the Die class goes here
#include "Die.h"

using namespace std;
void display(int counter[], int SIZE);

int main()
{
	int d6result;
	int d12result;

	Die deeSix(6);
	Die deeTwelve(12);
	int d6counter[] = { 0, 0, 0, 0, 0, 0, 0 };
	int d12counter[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	for (int i = 0; i < 1000000; i++)
	{
		deeSix.roll();
		d6result = deeSix.getValue();
		d6counter[d6result]++;

		deeTwelve.roll();
		d12result = deeTwelve.getValue();
		d12counter[d12result]++;

	}
	
	cout << "d6stats" << endl;
	cout << "=======" << endl;

	display(d6counter, 7);

	cout << "============" << endl;
	cout << "d12 stats\n";
	cout << "============" << endl;
	display(d12counter, 13);
	return 0;
}

void display(int counter[], int SIZE)
{
	for (int i = 1; i < SIZE; i++)
	{

		cout << "Side " << i << ": " << ((counter[i] / 1000000.0) * 100) << "%" << endl;
	}

}