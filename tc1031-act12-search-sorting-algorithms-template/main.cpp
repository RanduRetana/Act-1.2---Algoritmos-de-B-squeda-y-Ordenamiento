// =================================================================
//
// File: main.cpp
// Author: Marco Randu Retana Vargas
// Date: 06/09/2022
//
// =================================================================
#include <iostream>
#include <chrono>
#include <vector>
#include "header.h"
#include "search.h"
#include "bubble.h"
#include "selection.h"
#include "insertion.h"

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
	vector<int> v1{45, 35 , 69, 12, 6};
	clock_t start, end;
	start = clock();
	bubbleSort(v1);
	binarySearch(v1,69);
	end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout<<end <<endl <<start;
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;
	//insertionSort(v1);
	//selectionSort(v1);
	//cout<<v1[0];
	//cout<<binarySearch(v1,69);
	return 0;
}
