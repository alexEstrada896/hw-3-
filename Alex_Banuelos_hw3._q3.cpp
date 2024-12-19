/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
using namespace std;
#include <iostream>
#include <cmath>
#include <string>
int main()
{
	//asks user for first month
	cout << "what is the first month?: " << endl;
	string month1;
	cin >> month1;
	//asks user for amount of rain in inches for month 1
	cout << "what is the amount of rain that fell in inches: "<< endl;
	double rainFall1;
	cin >> rainFall1;
	//asks user for second month
	cout <<"what is the second month: " << endl;
	string month2;
	cin>> month2;

	//asks user for rainfall in second month
	cout << "What is the amount of rain that fell in inches:"<< endl;
	double rainFall2;
	cin>> rainFall2;
	//asks user for  third month
	cout << "what is the third month: " << endl;
	string month3;
	cin >> month3;
	//asks user for rainfall in tird month
	cout << "what is the amount of rain that fell in inches: " << endl;
	double rainFall3;
	cin >> rainFall3;
	//asks user for fourth month
	cout << " what is the fourth month: " << endl;
	string month4;
	cin>> month4;
	//asks user for rainfall of fourth month
	cout << "what is the amount of rain that fell in inches: " << endl;
	double rainFall4;
	cin >>rainFall4;
	//calculates average rainfall
	double avgRainfall = (rainFall1 + rainFall2 + rainFall3 + rainFall4)/4;
	//outputs result
	cout << "The average rain fall for "<<month1<<","<<month2<<","<<month3<<", and "<<month4<<", is "
	     << avgRainfall<<" inches"<<endl;

	return 0;
}