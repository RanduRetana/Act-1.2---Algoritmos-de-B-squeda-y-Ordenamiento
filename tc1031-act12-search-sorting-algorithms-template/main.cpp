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
	struct timeval start, end;
	gettimeofday(&start, NULL);
	ios_base::sync_with_stdio(false);
	bubbleSort(v1);
	binarySearch(v1,69);
	gettimeofday(&end, NULL);
    double time_taken;
    time_taken = (end.tv_sec - start.tv_sec) * 1e6;
    time_taken = (time_taken + (end.tv_usec - start.tv_usec)) * 1e-6;
    cout << "Time taken by program is : " << fixed<< time_taken << setprecision(6);
    cout << " sec" << endl;
	//insertionSort(v1);
	//selectionSort(v1);
	//cout<<v1[0];
	//cout<<binarySearch(v1,69);
	return 0;
}
