// class activity2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	double county_tax;
	double estate_tax;
	double total_sales;
	double total_tax;
	double net_income = 95000.0;
	
	
	
	total_sales = net_income/(0.94);

	county_tax = 0.04 * total_sales;
	estate_tax = 0.02 * total_sales;
	total_tax = county_tax + estate_tax;
	

	cout << "Your total sales is: " << total_sales << endl;
	cout << "You paid " << county_tax << " for county tax." << endl;
	cout << "You also paid " << estate_tax << " for estate tax. Which is you are paying " << total_tax << " in total taxes." << endl;

	return 0;
}

