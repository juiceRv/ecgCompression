// CompressECG.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
// #include "koolplot.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int *get_data(string file_dir)
{
	int *data = new int[3584]; // declare integer array of known size

	// read values from csv file into data array
	ifstream file(file_dir);
	string value;
	int counter = 0;
	while (file.good())
	{
		getline(file, value, ',');
		atoi(value.c_str());
		cout << value;
		cout << "\n";
		//data[counter] = value;
	}

	return data;

}

int main()
{
    cout << "Loading test signal...\n";
	int *signal = get_data("../../testdata/ecg.csv");

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
