#include "permutations.h"
#include <iostream>
#include <vector>

using namespace std;

void display_permutation(vector<vector<int>> permutations) {
	for(auto perm: permutations) {
		for(auto val: perm)
			cout << val << " ";
		cout << endl;
	}
}

int main() {
	vector<int> nums = {5, 6, 7, 8};
	//print_permutations(nums);
	
	vector<vector<int>> permutations = get_permutations(nums);
	display_permutation(permutations);

	return 0;	
}