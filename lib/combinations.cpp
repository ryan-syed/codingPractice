#include "combinations.h"
#include <iostream>

using namespace std;

vector<vector<int>> combinations;

void display_combination(vector<int> comb) {
	for(auto val: comb)
		cout << val << " ";
	cout << endl;
}

void print_combinations(vector<int> input, int r) {
	vector<int> data(r, 0);
	print_combinations(input, data, 0, input.size(), 0, r); 
}

void print_combinations(vector<int> input, vector<int> &data, int start, int end, int index, int r) {
	for(int i = start; i < end; i++) {
		if(index == r) {
			display_combination(data);
			break;
		}
		
		data[index] = input[i];
		print_combinations(input, data, i + 1, end, index + 1, r);
	}
}

vector<vector<int>> get_combinations(vector<int> input, int r) 
{
	vector<int> comb(r, 0);
	combinations.clear();
	return get_combinations(input, comb, 0, input.size(), 0, r);
}


vector<vector<int>> get_combinations(vector<int> input, vector<int> comb, int start, int end, int index, int r) {
	if(index == r) {
		combinations.push_back(comb);
		return combinations;
	}

	for(int i = start; i <= end - 1; i++) {
		comb[index] = input[i];
		get_combinations(input, comb, i + 1, end, index + 1, r);
	}
	return combinations;
}