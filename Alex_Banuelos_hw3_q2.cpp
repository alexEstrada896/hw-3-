/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
using namespace std;
#include <iostream>
#include <cmath>
int main()
{
//data types for ingridients and amount of cookies
	double sugarPercookie = 2.5 / 60;
	double butterPercookie = 1.5/60;
	double flourPercookie = 4/60;
	double chocolatechipsPercookie = 0.8/60;
//asks user how many cookies they want to make
	cout << "how many cookies would you like to make?: " << endl;
//inputs amount of cookies
	double cookiesAmount;
	cin >> cookiesAmount;
//calculates amount of ingredients for number of cookies
	double totalSugar = cookiesAmount * sugarPercookie;
	double totalButter = cookiesAmount * butterPercookie;
	double totalFlour = cookiesAmount * flourPercookie;
	double totalChocolatechips = cookiesAmount * chocolatechipsPercookie;
//displays results
	cout<< "To make " << cookiesAmount<<" amount of cookies, you need: "<< endl;
	cout<< totalSugar <<" cups of sugar"<< endl;
	cout <<totalButter<<" cups of butter"<< endl;
	cout<<totalFlour<<" cups of flower"<<endl;
	cout <<totalChocolatechips<<" cups of chocolate chips"<<endl;
	return 0;
}