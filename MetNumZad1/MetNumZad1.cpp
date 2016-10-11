// MetNumZad1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	int k;

	cout << "==========printf=============" << endl;
	printf("|%10.3f", 12345.678);
	printf("|%12.5f|\n", 9876.12345);
	printf("|%10.5f", 123.45678);
	printf("|%12.2f|\n", 9876543.21);


	cout << "==========cout=============" << endl;
	cout.precision(10);
	//cout.setf(ios::showpoint);
	cout << "|";
	cout.width(10);
	cout << 1234.5678 << "|";
	cout.width(12);
	cout << 1234.567899 << "|" << endl;

	cout << "|";
	cout.width(10);
	cout << 123.074 << "|";
	cout.width(12);
	cout << 0.9876 << "|" << endl;

	cin >> k;

    return 0;
}

