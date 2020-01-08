#include "permutations.h"
#include <iostream>

using namespace std;

vector<vector<int>> permutations;

void display_permutation(vector<int> perm) {
	for(auto val: perm)
		cout << val << " ";
	cout << endl;
}

void print_permutations(vector<int> input) {
	vector<int> perm;
	print_permutations(input, perm);
}

void print_permutations(vector<int> input, vector<int> perm)
{
	if(input.empty())
		display_permutation(perm);
	
	for(int i = 0; i < input.size(); i++) {
		perm.push_back(input[i]);
		input.erase(input.begin() + i);
		print_permutations(input, perm);
		input.insert(input.begin() + i, perm.back());
		perm.pop_back();
	}
}

vector<vector<int>> get_permutations(vector<int> input) {
	vector<int> perm;
	permutations.clear();
	return get_permutations(input, perm);
}

vector<vector<int>> get_permutations(std::vector<int> input, std::vector<int> perm) {
	if(input.empty())
		permutations.push_back(perm);
	
	for(int i = 0; i < input.size(); i++) {
		perm.push_back(input[i]);
		input.erase(input.begin() + i);
		get_permutations(input, perm);
		input.insert(input.begin() + i, perm.back());
		perm.pop_back();
	}

	return permutations;
}