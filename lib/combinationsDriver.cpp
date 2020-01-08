#include "combinations.h"
#include <vector>
#include <iostream>

using namespace std;

void display_combination(vector<vector<int>> combinations) {
	for(auto comb: combinations) {
		for(auto val: comb)
			cout << val << " ";
		cout << endl;
	}
}


int main() {
	vector<int> more_nums = {1, 2, 3, 4, 5};
	//print_combinations(more_nums, 3);
	vector<vector<int>> combinations = get_combinations(more_nums, 3);
	display_combination(combinations);

	return 0;
}