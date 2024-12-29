// Now includes two mains, one with a ready made test array and another with a file read of any size, like numbers one to ten.
// All sorting algorithms take the vector array as a reference.
//
#pragma once
#include "AlgoCpp.h"
#include "algos/bubblesort.h"
#include "algos/heapsort.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;


int main() {
	ifstream inputFile("..\\..\\..\\algos\\lists_unordered\\one_to_ten.txt");
	string line;
	vector<int> array;

	while ( getline(inputFile, line) ) {
		stringstream ss(line);
		
		while (ss.good()) {
			string substr;
			getline(ss, substr, ',');
			array.push_back( stoi(substr) );
		}

	}

	inputFile.close();

	cout << "array: ";
	for (int n : array)
		cout << n << ' ';
	cout << endl;
	
	vector<int> bsorted(array);
	bubblesort(bsorted, bsorted.size());

	cout << "bsorted_array bubble: ";
	for (int n : bsorted)
		cout << n << ' ';
	cout << endl;

	vector<int> heaped(array);
	heapsort(heaped, heaped.size());

	cout << "heapsorted: ";
	for (int n : heaped)
		cout << n << ' ';
	cout << endl;


	return 0;
}
