#include "permutations.h"
#include <iostream>

using namespace std;

void display_permutation(vector<int> perm) {
	for(auto val: perm)
		cout << val << " ";
	cout << endl;
}

void get_permutations(vector<int> input) {
	vector<int> perm;
	get_permutations(input, perm);
}

void get_permutations(vector<int> input, vector<int> perm)
{
	if(input.empty())
		display_permutation(perm);
	
	for(int i = 0; i < input.size(); i++) {
		perm.push_back(input[i]);
		input.erase(input.begin() + i);
		get_permutations(input, perm);
		input.insert(input.begin() + i, perm.back());
		perm.pop_back();
	}
}